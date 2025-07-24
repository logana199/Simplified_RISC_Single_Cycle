// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfetch_unit_tb__pch.h"

//============================================================
// Constructors

Vfetch_unit_tb::Vfetch_unit_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfetch_unit_tb__Syms(contextp(), _vcname__, this)}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfetch_unit_tb::Vfetch_unit_tb(const char* _vcname__)
    : Vfetch_unit_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfetch_unit_tb::~Vfetch_unit_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfetch_unit_tb___024root___eval_debug_assertions(Vfetch_unit_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vfetch_unit_tb___024root___eval_static(Vfetch_unit_tb___024root* vlSelf);
void Vfetch_unit_tb___024root___eval_initial(Vfetch_unit_tb___024root* vlSelf);
void Vfetch_unit_tb___024root___eval_settle(Vfetch_unit_tb___024root* vlSelf);
void Vfetch_unit_tb___024root___eval(Vfetch_unit_tb___024root* vlSelf);

void Vfetch_unit_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfetch_unit_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfetch_unit_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfetch_unit_tb___024root___eval_static(&(vlSymsp->TOP));
        Vfetch_unit_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vfetch_unit_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfetch_unit_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfetch_unit_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vfetch_unit_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vfetch_unit_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfetch_unit_tb___024root___eval_final(Vfetch_unit_tb___024root* vlSelf);

VL_ATTR_COLD void Vfetch_unit_tb::final() {
    Vfetch_unit_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfetch_unit_tb::hierName() const { return vlSymsp->name(); }
const char* Vfetch_unit_tb::modelName() const { return "Vfetch_unit_tb"; }
unsigned Vfetch_unit_tb::threads() const { return 1; }
void Vfetch_unit_tb::prepareClone() const { contextp()->prepareClone(); }
void Vfetch_unit_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vfetch_unit_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfetch_unit_tb::trace()' called on model that was Verilated without --trace option");
}
