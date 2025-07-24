module register(
    input logic clk,
    input logic reset,
    input logic we,
    input logic [15:0] d,
    output logic [15:0] q);

    //contents
    //async reset otherwise set the output if write is enabled
    always_ff @ (posedge clk or posedge reset)
    begin
        if (reset) begin
            q<=0;
        end
        else if (we)
            q<=d;
    end
endmodule