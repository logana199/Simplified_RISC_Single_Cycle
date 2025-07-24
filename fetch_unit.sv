module fetch_unit (
    input logic jmp,
    input logic clk,
    input logic reset,
    input logic [15:0] WBBus,
    output logic [15:0] IMAddress,
    output logic [15:0] PCPlus1);

    //variables for later
    logic [15:0] PC_in;
    logic [15:0] PC_out;

    //instantiating PC register
    register PC(
        .clk(clk),
        .reset(reset),
        .we(1'b1),
        .d(PC_in),
        .q(PC_out)
    );

    //contents
    //if there's a jump signal, go to the location in the write_back_bus, otherwise add one to the pc counter
    always_comb begin
        if (jmp) begin
            PC_in=WBBus;
        end
        else
        begin
            PC_in=PC.q+1'b1;
        end
    end

    assign IMAddress=PC_out;
    assign PCPlus1=PC_out+1;
endmodule