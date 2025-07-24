//TODO low priority, understand rotate right
module ALU (
        input logic [15:0] A_in,
        input logic [15:0] B_in,
        input logic AddSubCBin,
        input logic [3:0] ALU_op,
        output logic [15:0] out,
        output logic [3:0] FlagsNZCV
    );

    always_comb begin
        logic cout=0;
        logic [15:0] mulu= {16{1'b0}};
        out=0;
        FlagsNZCV[1]=0;
        FlagsNZCV[0]=0;
        case(ALU_op)
            //add
            4'b0000 : begin
                {cout,out}={1'b0, A_in}+{1'b0, B_in}+{{16{1'b0}}, AddSubCBin};
                //carry flag    
                if(cout)
                    FlagsNZCV[1]=1;
                else
                    FlagsNZCV[1]=0;
                //overflow flag
                if((out[15]!=A_in[15])&&(out[15]!=B_in[15]))
                    FlagsNZCV[0]=1;
                else
                    FlagsNZCV[0]=0;
            end
            //sub
            4'b0001 : begin
                {cout,out}={1'b0, A_in}-{1'b0, B_in}-{{16{1'b0}}, AddSubCBin};
                //carry flag
                if(cout)
                    FlagsNZCV[1]=1;
                else
                    FlagsNZCV[1]=0;
                //overflow flag
                if((out[15]!=A_in[15])&&(out[15]!=B_in[15]))
                    FlagsNZCV[0]=1;
                else
                    FlagsNZCV[0]=0;
            end
            //mul
            4'b0010 : begin
                out=A_in*B_in;
                if(A_in[15]!=out[15])
                    FlagsNZCV[1]=1;
                else
                    FlagsNZCV[1]=0;
                //overflow flag
                FlagsNZCV[0]=0;
            end
            //mulu
            4'b0011 : begin
                {mulu, out}={{15{1'b0}}, A_in}*{{15{1'b0}}, B_in};
                out=mulu;
                if(A_in[15]!=out[15])
                    FlagsNZCV[1]=1;
                else
                    FlagsNZCV[1]=0;
                //overflow flag
                FlagsNZCV[0]=0;
            end
            //div
            4'b0100 : out=A_in/B_in;
            //mod
            4'b0101 : out=A_in%B_in;
            //and
            4'b0110 : out=A_in&B_in;
            //or
            4'b0111 : out=A_in|B_in;
            //eor
            4'b1000 : out=A_in^B_in;
            //not
            4'b1001 : out=~A_in;
            //LSL
            4'b1010 : out=A_in<<B_in;
            //LSR
            4'b1011 : out=A_in>>B_in;
            //ASR
            4'b1100 : out=A_in>>>B_in;
            //ROI rotate, might be harder to implement
            //CMP, like sub, but only for setting flags
            4'b1111 : out=0;
            default : out=0;
        endcase
        //zero flag
        FlagsNZCV[2]=((out==0)&&ALU_op!=4'b1111)||((ALU_op==4'b1111)&&(A_in-B_in)==0);
        //negative flag
        FlagsNZCV[3]=(out[15]==1'b1)||((ALU_op==4'b1111)&&(A_in-B_in)>(B_in-A_in));
    end
endmodule