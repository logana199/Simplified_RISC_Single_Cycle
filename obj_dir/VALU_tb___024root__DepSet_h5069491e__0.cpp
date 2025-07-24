// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU_tb.h for the primary calling header

#include "VALU_tb__pch.h"
#include "VALU_tb__Syms.h"
#include "VALU_tb___024root.h"

VL_INLINE_OPT VlCoroutine VALU_tb___024root___eval_initial__TOP__Vtiming__0(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->ALU_tb__DOT__A_in = 0xffffU;
    vlSelf->ALU_tb__DOT__B_in = 1U;
    vlSelf->ALU_tb__DOT__ALU_op = 0U;
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       26);
    vlSelf->ALU_tb__DOT__ALU_op = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       28);
    vlSelf->ALU_tb__DOT__A_in = 0x7fffU;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       30);
    vlSelf->ALU_tb__DOT__ALU_op = 0U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       32);
    vlSelf->ALU_tb__DOT__ALU_op = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       33);
    vlSelf->ALU_tb__DOT__A_in = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       35);
    vlSelf->ALU_tb__DOT__B_in = 0x10U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       37);
    vlSelf->ALU_tb__DOT__A_in = 0xffffU;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       38);
    vlSelf->ALU_tb__DOT__B_in = 2U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       39);
    vlSelf->ALU_tb__DOT__ALU_op = 3U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       41);
    vlSelf->ALU_tb__DOT__A_in = 8U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       42);
    vlSelf->ALU_tb__DOT__ALU_op = 4U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       44);
    vlSelf->ALU_tb__DOT__ALU_op = 5U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       46);
    vlSelf->ALU_tb__DOT__ALU_op = 6U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       48);
    vlSelf->ALU_tb__DOT__ALU_op = 7U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       50);
    vlSelf->ALU_tb__DOT__A_in = 0xaU;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       51);
    vlSelf->ALU_tb__DOT__ALU_op = 8U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       53);
    vlSelf->ALU_tb__DOT__ALU_op = 9U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       55);
    vlSelf->ALU_tb__DOT__ALU_op = 0xaU;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       57);
    vlSelf->ALU_tb__DOT__ALU_op = 0xbU;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       59);
    vlSelf->ALU_tb__DOT__ALU_op = 0xcU;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       61);
    vlSelf->ALU_tb__DOT__ALU_op = 0xfU;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "ALU_tb.sv", 
                                       63);
    vlSelf->ALU_tb__DOT__B_in = 0xaU;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VALU_tb___024root___dump_triggers__act(VALU_tb___024root* vlSelf);
#endif  // VL_DEBUG

void VALU_tb___024root___eval_triggers__act(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VALU_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VALU_tb___024root___act_sequent__TOP__0(VALU_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU_tb___024root___act_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ ALU_tb__DOT__out;
    ALU_tb__DOT__out = 0;
    CData/*0:0*/ ALU_tb__DOT__dut__DOT__unnamedblk1__DOT__cout;
    ALU_tb__DOT__dut__DOT__unnamedblk1__DOT__cout = 0;
    SData/*15:0*/ ALU_tb__DOT__dut__DOT__unnamedblk1__DOT__mulu;
    ALU_tb__DOT__dut__DOT__unnamedblk1__DOT__mulu = 0;
    // Body
    ALU_tb__DOT__dut__DOT__unnamedblk1__DOT__cout = 0U;
    ALU_tb__DOT__dut__DOT__unnamedblk1__DOT__mulu = 0U;
    ALU_tb__DOT__out = 0U;
    vlSelf->ALU_tb__DOT__FlagsNZCV = (0xcU & (IData)(vlSelf->ALU_tb__DOT__FlagsNZCV));
    if ((8U & (IData)(vlSelf->ALU_tb__DOT__ALU_op))) {
        ALU_tb__DOT__out = (0xffffU & ((4U & (IData)(vlSelf->ALU_tb__DOT__ALU_op))
                                        ? ((2U & (IData)(vlSelf->ALU_tb__DOT__ALU_op))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->ALU_tb__DOT__ALU_op))
                                             ? 0U : 
                                            VL_SHIFTR_III(16,16,16, (IData)(vlSelf->ALU_tb__DOT__A_in), (IData)(vlSelf->ALU_tb__DOT__B_in))))
                                        : ((2U & (IData)(vlSelf->ALU_tb__DOT__ALU_op))
                                            ? ((1U 
                                                & (IData)(vlSelf->ALU_tb__DOT__ALU_op))
                                                ? VL_SHIFTR_III(16,16,16, (IData)(vlSelf->ALU_tb__DOT__A_in), (IData)(vlSelf->ALU_tb__DOT__B_in))
                                                : VL_SHIFTL_III(16,16,16, (IData)(vlSelf->ALU_tb__DOT__A_in), (IData)(vlSelf->ALU_tb__DOT__B_in)))
                                            : ((1U 
                                                & (IData)(vlSelf->ALU_tb__DOT__ALU_op))
                                                ? (~ (IData)(vlSelf->ALU_tb__DOT__A_in))
                                                : ((IData)(vlSelf->ALU_tb__DOT__A_in) 
                                                   ^ (IData)(vlSelf->ALU_tb__DOT__B_in))))));
    } else if ((4U & (IData)(vlSelf->ALU_tb__DOT__ALU_op))) {
        ALU_tb__DOT__out = (0xffffU & ((2U & (IData)(vlSelf->ALU_tb__DOT__ALU_op))
                                        ? ((1U & (IData)(vlSelf->ALU_tb__DOT__ALU_op))
                                            ? ((IData)(vlSelf->ALU_tb__DOT__A_in) 
                                               | (IData)(vlSelf->ALU_tb__DOT__B_in))
                                            : ((IData)(vlSelf->ALU_tb__DOT__A_in) 
                                               & (IData)(vlSelf->ALU_tb__DOT__B_in)))
                                        : ((1U & (IData)(vlSelf->ALU_tb__DOT__ALU_op))
                                            ? VL_MODDIV_III(16, (IData)(vlSelf->ALU_tb__DOT__A_in), (IData)(vlSelf->ALU_tb__DOT__B_in))
                                            : VL_DIV_III(16, (IData)(vlSelf->ALU_tb__DOT__A_in), (IData)(vlSelf->ALU_tb__DOT__B_in)))));
    } else if ((2U & (IData)(vlSelf->ALU_tb__DOT__ALU_op))) {
        if ((1U & (IData)(vlSelf->ALU_tb__DOT__ALU_op))) {
            ALU_tb__DOT__dut__DOT__unnamedblk1__DOT__mulu 
                = (((IData)(vlSelf->ALU_tb__DOT__A_in) 
                    * (IData)(vlSelf->ALU_tb__DOT__B_in)) 
                   >> 0x10U);
            ALU_tb__DOT__out = ALU_tb__DOT__dut__DOT__unnamedblk1__DOT__mulu;
            vlSelf->ALU_tb__DOT__FlagsNZCV = ((0xcU 
                                               & (IData)(vlSelf->ALU_tb__DOT__FlagsNZCV)) 
                                              | (((1U 
                                                   & ((IData)(vlSelf->ALU_tb__DOT__A_in) 
                                                      >> 0xfU)) 
                                                  != 
                                                  (1U 
                                                   & ((IData)(ALU_tb__DOT__out) 
                                                      >> 0xfU))) 
                                                 << 1U));
        } else {
            ALU_tb__DOT__out = (0xffffU & ((IData)(vlSelf->ALU_tb__DOT__A_in) 
                                           * (IData)(vlSelf->ALU_tb__DOT__B_in)));
            vlSelf->ALU_tb__DOT__FlagsNZCV = ((0xcU 
                                               & (IData)(vlSelf->ALU_tb__DOT__FlagsNZCV)) 
                                              | (((1U 
                                                   & ((IData)(vlSelf->ALU_tb__DOT__A_in) 
                                                      >> 0xfU)) 
                                                  != 
                                                  (1U 
                                                   & ((IData)(ALU_tb__DOT__out) 
                                                      >> 0xfU))) 
                                                 << 1U));
        }
    } else if ((1U & (IData)(vlSelf->ALU_tb__DOT__ALU_op))) {
        ALU_tb__DOT__dut__DOT__unnamedblk1__DOT__cout 
            = (1U & ((((IData)(vlSelf->ALU_tb__DOT__A_in) 
                       - (IData)(vlSelf->ALU_tb__DOT__B_in)) 
                      - (IData)(vlSelf->ALU_tb__DOT__AddSubCBin)) 
                     >> 0x10U));
        ALU_tb__DOT__out = (0xffffU & (((IData)(vlSelf->ALU_tb__DOT__A_in) 
                                        - (IData)(vlSelf->ALU_tb__DOT__B_in)) 
                                       - (IData)(vlSelf->ALU_tb__DOT__AddSubCBin)));
        vlSelf->ALU_tb__DOT__FlagsNZCV = ((0xdU & (IData)(vlSelf->ALU_tb__DOT__FlagsNZCV)) 
                                          | ((IData)(ALU_tb__DOT__dut__DOT__unnamedblk1__DOT__cout) 
                                             << 1U));
        vlSelf->ALU_tb__DOT__FlagsNZCV = ((0xeU & (IData)(vlSelf->ALU_tb__DOT__FlagsNZCV)) 
                                          | (((1U & 
                                               ((IData)(ALU_tb__DOT__out) 
                                                >> 0xfU)) 
                                              != (1U 
                                                  & ((IData)(vlSelf->ALU_tb__DOT__A_in) 
                                                     >> 0xfU))) 
                                             & ((1U 
                                                 & ((IData)(ALU_tb__DOT__out) 
                                                    >> 0xfU)) 
                                                != 
                                                (1U 
                                                 & ((IData)(vlSelf->ALU_tb__DOT__B_in) 
                                                    >> 0xfU)))));
    } else {
        ALU_tb__DOT__dut__DOT__unnamedblk1__DOT__cout 
            = (1U & ((((IData)(vlSelf->ALU_tb__DOT__A_in) 
                       + (IData)(vlSelf->ALU_tb__DOT__B_in)) 
                      + (IData)(vlSelf->ALU_tb__DOT__AddSubCBin)) 
                     >> 0x10U));
        ALU_tb__DOT__out = (0xffffU & (((IData)(vlSelf->ALU_tb__DOT__A_in) 
                                        + (IData)(vlSelf->ALU_tb__DOT__B_in)) 
                                       + (IData)(vlSelf->ALU_tb__DOT__AddSubCBin)));
        vlSelf->ALU_tb__DOT__FlagsNZCV = ((0xdU & (IData)(vlSelf->ALU_tb__DOT__FlagsNZCV)) 
                                          | ((IData)(ALU_tb__DOT__dut__DOT__unnamedblk1__DOT__cout) 
                                             << 1U));
        vlSelf->ALU_tb__DOT__FlagsNZCV = ((0xeU & (IData)(vlSelf->ALU_tb__DOT__FlagsNZCV)) 
                                          | (((1U & 
                                               ((IData)(ALU_tb__DOT__out) 
                                                >> 0xfU)) 
                                              != (1U 
                                                  & ((IData)(vlSelf->ALU_tb__DOT__A_in) 
                                                     >> 0xfU))) 
                                             & ((1U 
                                                 & ((IData)(ALU_tb__DOT__out) 
                                                    >> 0xfU)) 
                                                != 
                                                (1U 
                                                 & ((IData)(vlSelf->ALU_tb__DOT__B_in) 
                                                    >> 0xfU)))));
    }
    vlSelf->ALU_tb__DOT__FlagsNZCV = ((0xbU & (IData)(vlSelf->ALU_tb__DOT__FlagsNZCV)) 
                                      | ((((0U == (IData)(ALU_tb__DOT__out)) 
                                           & (0xfU 
                                              != (IData)(vlSelf->ALU_tb__DOT__ALU_op))) 
                                          | ((0xfU 
                                              == (IData)(vlSelf->ALU_tb__DOT__ALU_op)) 
                                             & (0U 
                                                == 
                                                ((IData)(vlSelf->ALU_tb__DOT__A_in) 
                                                 - (IData)(vlSelf->ALU_tb__DOT__B_in))))) 
                                         << 2U));
    vlSelf->ALU_tb__DOT__FlagsNZCV = ((7U & (IData)(vlSelf->ALU_tb__DOT__FlagsNZCV)) 
                                      | (8U & ((0xffff8U 
                                                & ((IData)(ALU_tb__DOT__out) 
                                                   >> 0xcU)) 
                                               | (((0xfU 
                                                    == (IData)(vlSelf->ALU_tb__DOT__ALU_op)) 
                                                   & ((0xffffU 
                                                       & ((IData)(vlSelf->ALU_tb__DOT__A_in) 
                                                          - (IData)(vlSelf->ALU_tb__DOT__B_in))) 
                                                      > 
                                                      (0xffffU 
                                                       & ((IData)(vlSelf->ALU_tb__DOT__B_in) 
                                                          - (IData)(vlSelf->ALU_tb__DOT__A_in))))) 
                                                  << 3U))));
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("A_upper=%5#, B_upper=%5# ALU_op=%b%b%b%b, out=%5#, FlagsNZCV=%b%b%b%b\n",
                  16,vlSelf->ALU_tb__DOT__A_in,16,(IData)(vlSelf->ALU_tb__DOT__B_in),
                  1,(1U & ((IData)(vlSelf->ALU_tb__DOT__ALU_op) 
                           >> 3U)),1,(1U & ((IData)(vlSelf->ALU_tb__DOT__ALU_op) 
                                            >> 2U)),
                  1,(1U & ((IData)(vlSelf->ALU_tb__DOT__ALU_op) 
                           >> 1U)),1,(1U & (IData)(vlSelf->ALU_tb__DOT__ALU_op)),
                  16,(IData)(ALU_tb__DOT__out),1,(1U 
                                                  & ((IData)(vlSelf->ALU_tb__DOT__FlagsNZCV) 
                                                     >> 3U)),
                  1,(1U & ((IData)(vlSelf->ALU_tb__DOT__FlagsNZCV) 
                           >> 2U)),1,(1U & ((IData)(vlSelf->ALU_tb__DOT__FlagsNZCV) 
                                            >> 1U)),
                  1,(1U & (IData)(vlSelf->ALU_tb__DOT__FlagsNZCV)));
    }
}
