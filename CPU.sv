module CPU #(
    parameter DATA_WIDTH=32,
    parameter MEM_ADDRESS_WIDTH=8,
    parameter REG_ADDRESS_WIDTH=5
)(
    input logic clk,
    input logic rst,
    output logic [DATA_WIDTH-1:0] a0
);
logic [MEM_ADDRESS_WIDTH-1:0] PC;
logic EQ;
logic [DATA_WIDTH-1:0] ImmOp;
logic ALUsrc;
logic [2:0] ALUctrl;
logic RegWrite;
logic [REG_ADDRESS_WIDTH-1:0] rs1;
logic [REG_ADDRESS_WIDTH-1:0] rs2;
logic [REG_ADDRESS_WIDTH-1:0] rd;
logic PCsrc;

DataPath dataPath(
    .clk(clk),
    .rst(rst),
    .ImmOp(ImmOp),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .RegWrite(RegWrite),
    .ALUsrc(ALUsrc),
    .ALUctrl(ALUctrl),
    .PC(PC),
    .PCsrc(PCsrc),
    .a0(a0),
    .EQ(EQ)
);

ControlPath controlPath(
    .ImmOp(ImmOp),
    .rs1(rs1),
    .rs2(rs2),
    .rd(rd),
    .RegWrite(RegWrite),
    .ALUsrc(ALUsrc),
    .ALUctrl(ALUctrl),
    .PC(PC),
    .PCsrc(PCsrc),
    .EQ(EQ)
);



endmodule
