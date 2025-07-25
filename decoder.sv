module decoder (
    input logic [15:0] IMData,
    input logic [3:0] Flags,
    output logic halt,
    output logic jmp,
    output logic mem_to_reg,
    output logic reg_write,
    output logic mem_write,
    output logic ALU_src,
    output logic flags_wr_en,
    output logic [3:0] ALU_op,
    output logic reg_to_flags,
    output logic rn_to_DM,
    output logic rti,
    output logic [2:0] sel_Rn,
    output logic [2:0] sel_Rm,
    output logic [2:0] sel_Rd
);

logic [2:0] op=IMData[15:13];

always_comb begin
    //all wire outputs default to zero
    halt=0;
    jmp=0;
    mem_to_reg=0;
    reg_write=0;
    mem_write=0;
    ALU_src=0;
    flags_wr_en=0;
    ALU_op=4'b0000;
    reg_to_flags=0;
    rn_to_DM=0;
    rti=0;
    sel_Rd=3'b000;
    //MOV imm
    if(op[1]==1) begin
        //return A_in
        ALU_op=4'b1110;
        reg_write=1;
        ALU_src=1;
        sel_Rd=IMData[14:12];
    end
end
endmodule