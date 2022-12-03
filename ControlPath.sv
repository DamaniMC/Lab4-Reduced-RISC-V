module ControlPath #(parameter DATA_WIDTH=32, REG_ADDRESS_WIDTH=5, MEM_ADDRESS_WIDTH=8)(
    input logic [MEM_ADDRESS_WIDTH-1:0] PC,
    input logic EQ,
    output logic [DATA_WIDTH-1:0] ImmOp,
    output logic ALUsrc,
    output logic [2:0] ALUctrl,
    output logic RegWrite,
    output logic [REG_ADDRESS_WIDTH-1:0] rs1,
    output logic [REG_ADDRESS_WIDTH-1:0] rs2,
    output logic [REG_ADDRESS_WIDTH-1:0] rd,
    output logic PCsrc

);

logic [1:0] ImmSrc;
logic [DATA_WIDTH-1:0] Instr;


InstrMem instrMem(
    .addr(PC),
    .dout(Instr)
);
ControlUnit controlUnit(
    .Instr(Instr),
    .EQ(EQ),
    .RegWrite(RegWrite),
    .ImmSrc(ImmSrc),
    .PCsrc(PCsrc),
    .ALUctrl(ALUctrl),
    .ALUsrc(ALUsrc)
);
SignExtend signExtend(
    .ImmSrc(ImmSrc),
    .Instr(Instr),
    .ImmOp(ImmOp)
);

always_comb begin
    rs2=Instr[24:20];
    rs1=Instr[19:15];
    rd=Instr[11:7];
end
endmodule
