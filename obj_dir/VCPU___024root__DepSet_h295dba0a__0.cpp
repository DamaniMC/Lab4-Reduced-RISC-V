// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "verilated.h"

#include "VCPU___024root.h"

VL_INLINE_OPT void VCPU___024root___sequent__TOP__0(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__CPU__DOT__dataPath__DOT__regFile__DOT__regArray__v0;
    IData/*31:0*/ __Vdlyvval__CPU__DOT__dataPath__DOT__regFile__DOT__regArray__v0;
    CData/*0:0*/ __Vdlyvset__CPU__DOT__dataPath__DOT__regFile__DOT__regArray__v0;
    // Body
    __Vdlyvset__CPU__DOT__dataPath__DOT__regFile__DOT__regArray__v0 = 0U;
    vlSelf->CPU__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : (IData)(vlSelf->CPU__DOT__dataPath__DOT__next_PC));
    if (vlSelf->CPU__DOT__RegWrite) {
        __Vdlyvval__CPU__DOT__dataPath__DOT__regFile__DOT__regArray__v0 
            = vlSelf->CPU__DOT__dataPath__DOT__ALUout;
        __Vdlyvset__CPU__DOT__dataPath__DOT__regFile__DOT__regArray__v0 = 1U;
        __Vdlyvdim0__CPU__DOT__dataPath__DOT__regFile__DOT__regArray__v0 
            = (0x1fU & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                        >> 7U));
    }
    if (__Vdlyvset__CPU__DOT__dataPath__DOT__regFile__DOT__regArray__v0) {
        vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray[__Vdlyvdim0__CPU__DOT__dataPath__DOT__regFile__DOT__regArray__v0] 
            = __Vdlyvval__CPU__DOT__dataPath__DOT__regFile__DOT__regArray__v0;
    }
    vlSelf->CPU__DOT__controlPath__DOT__Instr = vlSelf->CPU__DOT__controlPath__DOT__instrMem__DOT__rom_array
        [vlSelf->CPU__DOT__PC];
    vlSelf->a0 = vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray
        [0xaU];
    vlSelf->CPU__DOT__dataPath__DOT__ALUop1 = vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray
        [(0x1fU & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                   >> 0xfU))];
    if ((0x13U == (0x7fU & vlSelf->CPU__DOT__controlPath__DOT__Instr))) {
        vlSelf->CPU__DOT__RegWrite = 1U;
        if ((0U == (7U & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                          >> 0xcU)))) {
            vlSelf->CPU__DOT__ALUctrl = 0U;
        } else if ((2U == (7U & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                 >> 0xcU)))) {
            vlSelf->CPU__DOT__ALUctrl = 5U;
        } else if ((6U == (7U & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                 >> 0xcU)))) {
            vlSelf->CPU__DOT__ALUctrl = 3U;
        } else if ((7U == (7U & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                 >> 0xcU)))) {
            vlSelf->CPU__DOT__ALUctrl = 2U;
        }
        vlSelf->CPU__DOT__ALUsrc = 1U;
        vlSelf->CPU__DOT__controlPath__DOT__ImmSrc = 0U;
    } else if ((0x63U == (0x7fU & vlSelf->CPU__DOT__controlPath__DOT__Instr))) {
        vlSelf->CPU__DOT__RegWrite = 0U;
        vlSelf->CPU__DOT__ALUctrl = 1U;
        vlSelf->CPU__DOT__controlPath__DOT__ImmSrc = 2U;
    }
    if ((0U == (IData)(vlSelf->CPU__DOT__controlPath__DOT__ImmSrc))) {
        vlSelf->CPU__DOT__ImmOp = (((- (IData)((vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                >> 0x14U));
    } else if ((1U == (IData)(vlSelf->CPU__DOT__controlPath__DOT__ImmSrc))) {
        vlSelf->CPU__DOT__ImmOp = (((- (IData)((vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                      >> 7U))));
    } else if ((2U == (IData)(vlSelf->CPU__DOT__controlPath__DOT__ImmSrc))) {
        vlSelf->CPU__DOT__ImmOp = (((- (IData)((vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                         >> 7U)))));
    }
    vlSelf->CPU__DOT__dataPath__DOT__ALUop2 = ((IData)(vlSelf->CPU__DOT__ALUsrc)
                                                ? vlSelf->CPU__DOT__ImmOp
                                                : vlSelf->CPU__DOT__dataPath__DOT__regFile__DOT__regArray
                                               [(0x1fU 
                                                 & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                                    >> 0x14U))]);
    if ((0U == (IData)(vlSelf->CPU__DOT__ALUctrl))) {
        vlSelf->CPU__DOT__dataPath__DOT__ALUout = (vlSelf->CPU__DOT__dataPath__DOT__ALUop1 
                                                   + vlSelf->CPU__DOT__dataPath__DOT__ALUop2);
    } else if ((1U == (IData)(vlSelf->CPU__DOT__ALUctrl))) {
        vlSelf->CPU__DOT__dataPath__DOT__ALUout = (vlSelf->CPU__DOT__dataPath__DOT__ALUop1 
                                                   - vlSelf->CPU__DOT__dataPath__DOT__ALUop2);
    } else if ((2U == (IData)(vlSelf->CPU__DOT__ALUctrl))) {
        vlSelf->CPU__DOT__dataPath__DOT__ALUout = (vlSelf->CPU__DOT__dataPath__DOT__ALUop1 
                                                   & vlSelf->CPU__DOT__dataPath__DOT__ALUop2);
    } else if ((3U == (IData)(vlSelf->CPU__DOT__ALUctrl))) {
        vlSelf->CPU__DOT__dataPath__DOT__ALUout = (vlSelf->CPU__DOT__dataPath__DOT__ALUop1 
                                                   | vlSelf->CPU__DOT__dataPath__DOT__ALUop2);
    }
    vlSelf->CPU__DOT__EQ = (vlSelf->CPU__DOT__dataPath__DOT__ALUop1 
                            == vlSelf->CPU__DOT__dataPath__DOT__ALUop2);
    if ((0x13U == (0x7fU & vlSelf->CPU__DOT__controlPath__DOT__Instr))) {
        vlSelf->CPU__DOT__controlPath__DOT__controlUnit__DOT__Branch = 0U;
        vlSelf->CPU__DOT__PCsrc = 0U;
    } else if ((0x63U == (0x7fU & vlSelf->CPU__DOT__controlPath__DOT__Instr))) {
        vlSelf->CPU__DOT__controlPath__DOT__controlUnit__DOT__Branch = 1U;
        if ((0U == (7U & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                          >> 0xcU)))) {
            vlSelf->CPU__DOT__PCsrc = ((IData)(vlSelf->CPU__DOT__controlPath__DOT__controlUnit__DOT__Branch) 
                                       & (IData)(vlSelf->CPU__DOT__EQ));
        } else if ((1U == (7U & (vlSelf->CPU__DOT__controlPath__DOT__Instr 
                                 >> 0xcU)))) {
            vlSelf->CPU__DOT__PCsrc = ((IData)(vlSelf->CPU__DOT__controlPath__DOT__controlUnit__DOT__Branch) 
                                       & (~ (IData)(vlSelf->CPU__DOT__EQ)));
        }
    }
    vlSelf->CPU__DOT__dataPath__DOT__next_PC = (0xffU 
                                                & ((IData)(vlSelf->CPU__DOT__PCsrc)
                                                    ? 
                                                   ((IData)(vlSelf->CPU__DOT__PC) 
                                                    + vlSelf->CPU__DOT__ImmOp)
                                                    : 
                                                   ((IData)(4U) 
                                                    + (IData)(vlSelf->CPU__DOT__PC))));
}

void VCPU___024root___eval(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VCPU___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void VCPU___024root___eval_debug_assertions(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
