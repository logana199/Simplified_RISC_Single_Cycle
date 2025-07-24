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
        A_in=16'b0011000000000000;
        B_in=16'b0010000000000000;
        ALU_op=4'b0000;
        $monitor("A_upper=%h, B_upper=%h ALU_op=%b%b%b%b, out_upper=%h, FlagsNZCV=%b%b%b%b", A_in, B_in, ALU_op[3], ALU_op[2], ALU_op[1], ALU_op[0],
         out, FlagsNZCV[3], FlagsNZCV[2], FlagsNZCV[1], FlagsNZCV[0]);
        //shows addition
        #1 ALU_op=4'b0001;
        //shows subtraction
        #1 B_in=16'b0011000000000000;
        //should set the zero flag
        #1 B_in=16'b0111000000000000;
        //should set the negative flag
        #1 A_in=16'b1001000000000000;
        #1 ALU_op=4'b0000;
        //should set the carry flag and the overflow flag
        #1 ALU_op=4'b0010;
        //should set the carry flag and the overflow flag
    end
endmodule