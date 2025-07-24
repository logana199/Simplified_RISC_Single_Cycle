// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfetch_unit_tb.h for the primary calling header

#include "Vfetch_unit_tb__pch.h"
#include "Vfetch_unit_tb___024unit.h"

VL_ATTR_COLD void Vfetch_unit_tb___024unit___ctor_var_reset(Vfetch_unit_tb___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vfetch_unit_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vfetch_unit_tb___024unit___ctor_var_reset\n"); );
    // Body
    vlSelf->__VmonitorNum = VL_RAND_RESET_Q(64);
    vlSelf->__VmonitorOff = VL_RAND_RESET_I(1);
}
