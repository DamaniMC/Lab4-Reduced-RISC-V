// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated.h"

class VCPU__Syms;

class VCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*7:0*/ CPU__DOT__PC;
    CData/*0:0*/ CPU__DOT__EQ;
    CData/*0:0*/ CPU__DOT__ALUsrc;
    CData/*2:0*/ CPU__DOT__ALUctrl;
    CData/*0:0*/ CPU__DOT__RegWrite;
    CData/*0:0*/ CPU__DOT__PCsrc;
    CData/*7:0*/ CPU__DOT__dataPath__DOT__next_PC;
    CData/*1:0*/ CPU__DOT__controlPath__DOT__ImmSrc;
    CData/*0:0*/ CPU__DOT__controlPath__DOT__controlUnit__DOT__Branch;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_OUT(a0,31,0);
    IData/*31:0*/ CPU__DOT__ImmOp;
    IData/*31:0*/ CPU__DOT__dataPath__DOT__ALUout;
    IData/*31:0*/ CPU__DOT__dataPath__DOT__ALUop1;
    IData/*31:0*/ CPU__DOT__dataPath__DOT__ALUop2;
    IData/*31:0*/ CPU__DOT__controlPath__DOT__Instr;
    VlUnpacked<IData/*31:0*/, 32> CPU__DOT__dataPath__DOT__regFile__DOT__regArray;
    VlUnpacked<IData/*31:0*/, 256> CPU__DOT__controlPath__DOT__instrMem__DOT__rom_array;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VCPU___024root(VCPU__Syms* symsp, const char* name);
    ~VCPU___024root();
    VL_UNCOPYABLE(VCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
