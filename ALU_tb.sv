module ALU_tb ;
    logic [15:0] A_in;
    logic [15:0] B_in;
    logic [3:0] ALU_op;
    logic [15:0] out;
    logic AddSubCBin;
    logic [3:0] FlagsNZCV;

    //instantiate the ALU
    ALU dut (
        .A_in(A_in),
        .B_in(B_in),
        .AddSubCBin(AddSubCBin),
        .ALU_op(ALU_op),
        .out(out),
        .FlagsNZCV(FlagsNZCV)
    );

    initial begin
        A_in=16'hFFFF;
        B_in=16'h0001;
        ALU_op=4'b0000;
        $monitor("A_upper=%d, B_upper=%d ALU_op=%b%b%b%b, out=%d, FlagsNZCV=%b%b%b%b", A_in, B_in, ALU_op[3], ALU_op[2], ALU_op[1], ALU_op[0],
         out, FlagsNZCV[3], FlagsNZCV[2], FlagsNZCV[1], FlagsNZCV[0]);
        //shows addition, carry and Zero are set
        #1 ALU_op=4'b0001;
        //shows subtraction negative is set
        #1 A_in=16'h7FFF;
        //no flags should be set
        #1 ALU_op=4'b0000;
        //addition with overflow and negative should be set
        #1 ALU_op=4'b0001;
        #1 A_in=16'h0001;
        //subtraction with only zero set
        #1 B_in=16'h0010;
        //subtraction with negative, carry, and overflow set
        #1 A_in=16'hFFFF;
        #1 B_in=16'd2;
        #1 ALU_op=4'b0011;
        //mulu
        #1 A_in=16'd8;
        #1 ALU_op=4'b0100;
        //div
        #1 ALU_op=4'b0101;
        //mod
        #1 ALU_op=4'b0110;
        //and
        #1 ALU_op=4'b0111;
        //or
        #1 A_in=16'd10;
        #1 ALU_op=4'b1000;
        //eor
        #1 ALU_op=4'b1001;
        //not
        #1 ALU_op=4'b1010;
        //LSL
        #1 ALU_op=4'b1011;
        //LSR
        #1 ALU_op=4'b1100;
        //RSR
        #1 ALU_op=4'b1111;
        //CMP should set 0 flags
        #1 B_in=16'd10;
        
    end
endmodule