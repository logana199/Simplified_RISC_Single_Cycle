// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfetch_unit_tb.h for the primary calling header

#include "Vfetch_unit_tb__pch.h"
#include "Vfetch_unit_tb__Syms.h"
#include "Vfetch_unit_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vfetch_unit_tb___024root___eval_initial__TOP__Vtiming__0(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    vlSelf->fetch_tb__DOT__clk = 0U;
    vlSelf->fetch_tb__DOT__WBBus = 0U;
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    co_await vlSelf->__VdlySched.delay(0x18ULL, nullptr, 
                                       "fetch_unit_tb.sv", 
                                       26);
    vlSelf->fetch_tb__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(8ULL, nullptr, 
                                       "fetch_unit_tb.sv", 
                                       28);
    vlSelf->fetch_tb__DOT__reset = 1U;
    co_await vlSelf->__VdlySched.delay(8ULL, nullptr, 
                                       "fetch_unit_tb.sv", 
                                       30);
    vlSelf->fetch_tb__DOT__reset = 0U;
    vlSelf->fetch_tb__DOT__WBBus = 0xdU;
    vlSelf->fetch_tb__DOT__jmp = 1U;
    co_await vlSelf->__VdlySched.delay(8ULL, nullptr, 
                                       "fetch_unit_tb.sv", 
                                       34);
    vlSelf->fetch_tb__DOT__jmp = 0U;
    co_await vlSelf->__VdlySched.delay(0x10ULL, nullptr, 
                                       "fetch_unit_tb.sv", 
                                       36);
    VL_FINISH_MT("fetch_unit_tb.sv", 36, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfetch_unit_tb___024root___dump_triggers__act(Vfetch_unit_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfetch_unit_tb___024root___eval_triggers__act(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->fetch_tb__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__fetch_tb__DOT__clk__0))) 
                                     | ((IData)(vlSelf->fetch_tb__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__fetch_tb__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__fetch_tb__DOT__clk__0 
        = vlSelf->fetch_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__fetch_tb__DOT__reset__0 
        = vlSelf->fetch_tb__DOT__reset;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfetch_unit_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vfetch_unit_tb___024root___act_sequent__TOP__0(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSelf->fetch_tb__DOT__DUT__DOT__PC_in = (0xffffU 
                                              & ((IData)(vlSelf->fetch_tb__DOT__jmp)
                                                  ? (IData)(vlSelf->fetch_tb__DOT__WBBus)
                                                  : 
                                                 ((IData)(1U) 
                                                  + (IData)(vlSelf->fetch_tb__DOT__DUT__DOT__PC_out))));
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF("time=%0t, clk=%b, jmp=%b, reset=%b, bottom_4_curr_add=%b%b%b%b\n",
                  64,VL_TIME_UNITED_Q(1),-12,1,(IData)(vlSelf->fetch_tb__DOT__clk),
                  1,vlSelf->fetch_tb__DOT__jmp,1,(IData)(vlSelf->fetch_tb__DOT__reset),
                  1,(1U & ((IData)(vlSelf->fetch_tb__DOT__DUT__DOT__PC_out) 
                           >> 3U)),1,(1U & ((IData)(vlSelf->fetch_tb__DOT__DUT__DOT__PC_out) 
                                            >> 2U)),
                  1,(1U & ((IData)(vlSelf->fetch_tb__DOT__DUT__DOT__PC_out) 
                           >> 1U)),1,(1U & (IData)(vlSelf->fetch_tb__DOT__DUT__DOT__PC_out)));
    }
}
