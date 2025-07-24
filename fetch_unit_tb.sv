module fetch_unit_tb ;
    logic jmp;
    logic clk;
    logic reset;
    logic [15:0] WBBus;
    logic [15:0] currentAddress;
    logic [15:0] PCPlus1;

    fetch_unit DUT (
        .jmp(jmp),
        .clk(clk),
        .reset(reset),
        .WBBus(WBBus),
        .IMAddress(currentAddress),
        .PCPlus1(PCPlus1)
    );

    always begin
        #4 clk=~clk;
    end

    initial begin
        clk=0;
        WBBus=0;
        $monitor("time=%0t, clk=%b, jmp=%b, reset=%b, bottom_4_curr_add=%b%b%b%b", $time, clk, jmp, reset, currentAddress[3], currentAddress[2], currentAddress[1], currentAddress[0]);
        #24;
        reset=1;
        #8;
        reset=1;
        #8;
        reset=0;
        WBBus=16'b1101;
        jmp=1;
        #8
        jmp=0;
        #16 $finish;
    end

endmodule