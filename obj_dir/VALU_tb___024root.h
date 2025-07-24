// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VALU_tb.h for the primary calling header

#ifndef VERILATED_VALU_TB___024ROOT_H_
#define VERILATED_VALU_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class VALU_tb___024unit;


class VALU_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) VALU_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    VALU_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ ALU_tb__DOT__ALU_op;
    CData/*0:0*/ ALU_tb__DOT__AddSubCBin;
    CData/*3:0*/ ALU_tb__DOT__FlagsNZCV;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ ALU_tb__DOT__A_in;
    SData/*15:0*/ ALU_tb__DOT__B_in;
    SData/*15:0*/ ALU_tb__DOT__out;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VALU_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    VALU_tb___024root(VALU_tb__Syms* symsp, const char* v__name);
    ~VALU_tb___024root();
    VL_UNCOPYABLE(VALU_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
