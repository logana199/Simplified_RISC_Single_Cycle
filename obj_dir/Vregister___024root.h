// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vregister.h for the primary calling header

#ifndef VERILATED_VREGISTER___024ROOT_H_
#define VERILATED_VREGISTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vregister___024unit;


class Vregister__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vregister___024root final : public VerilatedModule {
  public:
    // CELLS
    Vregister___024unit* __PVT____024unit;

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
    Vregister__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vregister___024root(Vregister__Syms* symsp, const char* v__name);
    ~Vregister___024root();
    VL_UNCOPYABLE(Vregister___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
