// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfetch_unit_tb.h for the primary calling header

#include "Vfetch_unit_tb__pch.h"
#include "Vfetch_unit_tb___024root.h"

VL_ATTR_COLD void Vfetch_unit_tb___024root___eval_static(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vfetch_unit_tb___024root___eval_final(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfetch_unit_tb___024root___dump_triggers__stl(Vfetch_unit_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfetch_unit_tb___024root___eval_phase__stl(Vfetch_unit_tb___024root* vlSelf);

VL_ATTR_COLD void Vfetch_unit_tb___024root___eval_settle(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vfetch_unit_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("fetch_unit_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vfetch_unit_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfetch_unit_tb___024root___dump_triggers__stl(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vfetch_unit_tb___024root___act_sequent__TOP__0(Vfetch_unit_tb___024root* vlSelf);

VL_ATTR_COLD void Vfetch_unit_tb___024root___eval_stl(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vfetch_unit_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vfetch_unit_tb___024root___eval_triggers__stl(Vfetch_unit_tb___024root* vlSelf);

VL_ATTR_COLD bool Vfetch_unit_tb___024root___eval_phase__stl(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfetch_unit_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vfetch_unit_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfetch_unit_tb___024root___dump_triggers__act(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge fetch_tb.clk or posedge fetch_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfetch_unit_tb___024root___dump_triggers__nba(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge fetch_tb.clk or posedge fetch_tb.reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfetch_unit_tb___024root___ctor_var_reset(Vfetch_unit_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfetch_unit_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->fetch_tb__DOT__jmp = VL_RAND_RESET_I(1);
    vlSelf->fetch_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->fetch_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->fetch_tb__DOT__WBBus = VL_RAND_RESET_I(16);
    vlSelf->fetch_tb__DOT__DUT__DOT__PC_in = VL_RAND_RESET_I(16);
    vlSelf->fetch_tb__DOT__DUT__DOT__PC_out = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__fetch_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__fetch_tb__DOT__reset__0 = VL_RAND_RESET_I(1);
}
