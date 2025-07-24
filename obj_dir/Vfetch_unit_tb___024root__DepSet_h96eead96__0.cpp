// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfetch_unit_tb.h for the primary calling header

#include "Vfetch_unit_tb__pch.h"
#include "Vfetch_unit_tb___024root.h"

VlCoroutine Vfetch_unit_tb___024root___eval_initial__TOP__Vtiming__0(Vfetch_unit_tb___024root* vlSelf);
VlCoroutine Vfetch_unit_tb___024root___eval_initial__TOP__Vtiming__1(Vfetch_unit_tb___024root* vlSelf);

void Vfetch_unit_tb___024root___eval_initial(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___eval_initial\n"); );
    // Body
    Vfetch_unit_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfetch_unit_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__fetch_tb__DOT__clk__0 
        = vlSelf->fetch_tb__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__fetch_tb__DOT__reset__0 
        = vlSelf->fetch_tb__DOT__reset;
}

VL_INLINE_OPT VlCoroutine Vfetch_unit_tb___024root___eval_initial__TOP__Vtiming__1(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(4ULL, nullptr, 
                                           "fetch_unit_tb.sv", 
                                           19);
        vlSelf->fetch_tb__DOT__clk = (1U & (~ (IData)(vlSelf->fetch_tb__DOT__clk)));
    }
}

void Vfetch_unit_tb___024root___act_sequent__TOP__0(Vfetch_unit_tb___024root* vlSelf);

void Vfetch_unit_tb___024root___eval_act(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___eval_act\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        Vfetch_unit_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vfetch_unit_tb___024root___nba_sequent__TOP__0(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->fetch_tb__DOT__DUT__DOT__PC_out = ((IData)(vlSelf->fetch_tb__DOT__reset)
                                                ? 0U
                                                : (IData)(vlSelf->fetch_tb__DOT__DUT__DOT__PC_in));
}

void Vfetch_unit_tb___024root___eval_nba(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfetch_unit_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vfetch_unit_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

void Vfetch_unit_tb___024root___timing_resume(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vfetch_unit_tb___024root___eval_triggers__act(Vfetch_unit_tb___024root* vlSelf);

bool Vfetch_unit_tb___024root___eval_phase__act(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfetch_unit_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vfetch_unit_tb___024root___timing_resume(vlSelf);
        Vfetch_unit_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfetch_unit_tb___024root___eval_phase__nba(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfetch_unit_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfetch_unit_tb___024root___dump_triggers__nba(Vfetch_unit_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfetch_unit_tb___024root___dump_triggers__act(Vfetch_unit_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfetch_unit_tb___024root___eval(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vfetch_unit_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("fetch_unit_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vfetch_unit_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("fetch_unit_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vfetch_unit_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vfetch_unit_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfetch_unit_tb___024root___eval_debug_assertions(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
