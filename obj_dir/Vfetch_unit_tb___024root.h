// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfetch_unit_tb.h for the primary calling header

#ifndef VERILATED_VFETCH_UNIT_TB___024ROOT_H_
#define VERILATED_VFETCH_UNIT_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vfetch_unit_tb___024unit;


class Vfetch_unit_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfetch_unit_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vfetch_unit_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ fetch_tb__DOT__clk;
    CData/*0:0*/ fetch_tb__DOT__reset;
    CData/*0:0*/ fetch_tb__DOT__jmp;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fetch_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fetch_tb__DOT__reset__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ fetch_tb__DOT__WBBus;
    SData/*15:0*/ fetch_tb__DOT__DUT__DOT__PC_in;
    SData/*15:0*/ fetch_tb__DOT__DUT__DOT__PC_out;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfetch_unit_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfetch_unit_tb___024root(Vfetch_unit_tb__Syms* symsp, const char* v__name);
    ~Vfetch_unit_tb___024root();
    VL_UNCOPYABLE(Vfetch_unit_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
