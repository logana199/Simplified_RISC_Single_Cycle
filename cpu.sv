module cpu (
    input logic clk,
    input logic reset,
    input logic [15:0] IM_data_in,
    output logic halt_out,
    output logic [15:0] IM_address,
    output logic [15:0] IM_data,
    output logic [15:0] DM_address,
    output logic [15:0] DM_data_in,
    output logic [15:0] write_back,
    output logic [3:0] flags_out,
    output logic [15:0] A_lu_A,
    output logic [15:0] B_lu_B,
    output logic [15:0] ALU_result,
    output logic [15:0] ALU_flags
);

    logic [3:0] flags;
    logic halt;
    logic jmp;
    logic mem_to_reg;
    logic reg_write;
    logic mem_write;
    logic ALU_src;
    logic flags_wr_en;
    logic [3:0] ALU_op;
    logic reg_to_flags;
    logic rn_to_DM;
    logic rti;
    logic [2:0] Rn;
    logic [2:0] Rm;
    logic [2:0] Rd;

    decoder decoder(
        .IMData(IM_data_in),
        .Flags(flags),
        .halt(halt),
        .jmp(jmp),
        .mem_to_reg(mem_to_reg),
        .reg_write(reg_write),
        .mem_write(mem_write),
        .ALU_src(ALU_src),
        .flags_wr_en(flags_wr_en),
        .ALU_op(ALU_op),
        .reg_to_flags(reg_to_flags),
        .rn_to_DM(rn_to_DM),
        .rti(rti),
        .sel_Rn(Rn),
        .sel_Rm(Rm),
        .sel_Rd(Rd)
    );

endmodule