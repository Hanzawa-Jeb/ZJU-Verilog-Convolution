// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestbench.h for the primary calling header

#include "VTestbench__pch.h"
#include "VTestbench___024root.h"

VL_ATTR_COLD void VTestbench___024root___eval_initial__TOP(VTestbench___024root* vlSelf);
VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf);
VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__1(VTestbench___024root* vlSelf);

void VTestbench___024root___eval_initial(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VTestbench___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    VTestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    VTestbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__clk__0 
        = vlSelfRef.Testbench__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__rst__0 
        = vlSelfRef.Testbench__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__Testbench__DOT__out_valid__0 
        = vlSelfRef.Testbench__DOT__out_valid;
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__0(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__clk = 0U;
    vlSelfRef.Testbench__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                         23);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                         25);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__rst = 0U;
    vlSelfRef.Testbench__DOT__in_valid = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                         28);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 1U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 2U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 3U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 4U;
    vlSelfRef.Testbench__DOT__in_data = (((QData)((IData)(
                                                          VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__in_valid = 1U;
    if (vlSelfRef.Testbench__DOT__in_ready) {
        vlSelfRef.Testbench__DOT__in_valid = 0U;
    }
    co_await vlSelfRef.__VtrigSched_hcbe6592c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.out_valid)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__in_valid = 0U;
    vlSelfRef.Testbench__DOT__i = 1U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 1U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 2U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 3U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 4U;
    vlSelfRef.Testbench__DOT__in_data = (((QData)((IData)(
                                                          VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__in_valid = 1U;
    if (vlSelfRef.Testbench__DOT__in_ready) {
        vlSelfRef.Testbench__DOT__in_valid = 0U;
    }
    co_await vlSelfRef.__VtrigSched_hcbe6592c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.out_valid)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__in_valid = 0U;
    vlSelfRef.Testbench__DOT__i = 2U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 1U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 2U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 3U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 4U;
    vlSelfRef.Testbench__DOT__in_data = (((QData)((IData)(
                                                          VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__in_valid = 1U;
    if (vlSelfRef.Testbench__DOT__in_ready) {
        vlSelfRef.Testbench__DOT__in_valid = 0U;
    }
    co_await vlSelfRef.__VtrigSched_hcbe6592c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.out_valid)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__in_valid = 0U;
    vlSelfRef.Testbench__DOT__i = 3U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 1U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 2U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 3U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 4U;
    vlSelfRef.Testbench__DOT__in_data = (((QData)((IData)(
                                                          VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__in_valid = 1U;
    if (vlSelfRef.Testbench__DOT__in_ready) {
        vlSelfRef.Testbench__DOT__in_valid = 0U;
    }
    co_await vlSelfRef.__VtrigSched_hcbe6592c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.out_valid)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__in_valid = 0U;
    vlSelfRef.Testbench__DOT__i = 4U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 1U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 2U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 3U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 4U;
    vlSelfRef.Testbench__DOT__in_data = (((QData)((IData)(
                                                          VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__in_valid = 1U;
    if (vlSelfRef.Testbench__DOT__in_ready) {
        vlSelfRef.Testbench__DOT__in_valid = 0U;
    }
    co_await vlSelfRef.__VtrigSched_hcbe6592c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.out_valid)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__in_valid = 0U;
    vlSelfRef.Testbench__DOT__i = 5U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 1U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 2U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 3U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 4U;
    vlSelfRef.Testbench__DOT__in_data = (((QData)((IData)(
                                                          VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__in_valid = 1U;
    if (vlSelfRef.Testbench__DOT__in_ready) {
        vlSelfRef.Testbench__DOT__in_valid = 0U;
    }
    co_await vlSelfRef.__VtrigSched_hcbe6592c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.out_valid)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__in_valid = 0U;
    vlSelfRef.Testbench__DOT__i = 6U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 1U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 2U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 3U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 4U;
    vlSelfRef.Testbench__DOT__in_data = (((QData)((IData)(
                                                          VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__in_valid = 1U;
    if (vlSelfRef.Testbench__DOT__in_ready) {
        vlSelfRef.Testbench__DOT__in_valid = 0U;
    }
    co_await vlSelfRef.__VtrigSched_hcbe6592c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.out_valid)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__in_valid = 0U;
    vlSelfRef.Testbench__DOT__i = 7U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 1U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 2U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 3U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 4U;
    vlSelfRef.Testbench__DOT__in_data = (((QData)((IData)(
                                                          VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__in_valid = 1U;
    if (vlSelfRef.Testbench__DOT__in_ready) {
        vlSelfRef.Testbench__DOT__in_valid = 0U;
    }
    co_await vlSelfRef.__VtrigSched_hcbe6592c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.out_valid)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__in_valid = 0U;
    vlSelfRef.Testbench__DOT__i = 8U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 1U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 2U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 3U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 4U;
    vlSelfRef.Testbench__DOT__in_data = (((QData)((IData)(
                                                          VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__in_valid = 1U;
    if (vlSelfRef.Testbench__DOT__in_ready) {
        vlSelfRef.Testbench__DOT__in_valid = 0U;
    }
    co_await vlSelfRef.__VtrigSched_hcbe6592c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.out_valid)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__in_valid = 0U;
    vlSelfRef.Testbench__DOT__i = 9U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 1U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 2U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 3U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 4U;
    vlSelfRef.Testbench__DOT__in_data = (((QData)((IData)(
                                                          VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__in_valid = 1U;
    if (vlSelfRef.Testbench__DOT__in_ready) {
        vlSelfRef.Testbench__DOT__in_valid = 0U;
    }
    co_await vlSelfRef.__VtrigSched_hcbe6592c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.out_valid)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__in_valid = 0U;
    vlSelfRef.Testbench__DOT__i = 0xaU;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 1U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 2U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 3U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 4U;
    vlSelfRef.Testbench__DOT__in_data = (((QData)((IData)(
                                                          VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__in_valid = 1U;
    if (vlSelfRef.Testbench__DOT__in_ready) {
        vlSelfRef.Testbench__DOT__in_valid = 0U;
    }
    co_await vlSelfRef.__VtrigSched_hcbe6592c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.out_valid)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__in_valid = 0U;
    vlSelfRef.Testbench__DOT__i = 0xbU;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 1U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 2U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 3U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 4U;
    vlSelfRef.Testbench__DOT__in_data = (((QData)((IData)(
                                                          VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__in_valid = 1U;
    if (vlSelfRef.Testbench__DOT__in_ready) {
        vlSelfRef.Testbench__DOT__in_valid = 0U;
    }
    co_await vlSelfRef.__VtrigSched_hcbe6592c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.out_valid)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__in_valid = 0U;
    vlSelfRef.Testbench__DOT__i = 0xcU;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 1U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 2U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 3U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 4U;
    vlSelfRef.Testbench__DOT__in_data = (((QData)((IData)(
                                                          VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__in_valid = 1U;
    if (vlSelfRef.Testbench__DOT__in_ready) {
        vlSelfRef.Testbench__DOT__in_valid = 0U;
    }
    co_await vlSelfRef.__VtrigSched_hcbe6592c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.out_valid)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__in_valid = 0U;
    vlSelfRef.Testbench__DOT__i = 0xdU;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 1U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 2U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 3U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 4U;
    vlSelfRef.Testbench__DOT__in_data = (((QData)((IData)(
                                                          VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__in_valid = 1U;
    if (vlSelfRef.Testbench__DOT__in_ready) {
        vlSelfRef.Testbench__DOT__in_valid = 0U;
    }
    co_await vlSelfRef.__VtrigSched_hcbe6592c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.out_valid)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__in_valid = 0U;
    vlSelfRef.Testbench__DOT__i = 0xeU;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 1U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 2U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 3U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 4U;
    vlSelfRef.Testbench__DOT__in_data = (((QData)((IData)(
                                                          VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__in_valid = 1U;
    if (vlSelfRef.Testbench__DOT__in_ready) {
        vlSelfRef.Testbench__DOT__in_valid = 0U;
    }
    co_await vlSelfRef.__VtrigSched_hcbe6592c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.out_valid)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__in_valid = 0U;
    vlSelfRef.Testbench__DOT__i = 0xfU;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[0U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 1U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[1U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 2U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[2U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 3U;
    vlSelfRef.Testbench__DOT__kernel.__PVT__data[3U] 
        = (((QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
            << 0x20U) | (QData)((IData)(VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__j = 4U;
    vlSelfRef.Testbench__DOT__in_data = (((QData)((IData)(
                                                          VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           VL_RANDOM_SEEDED_II(vlSelfRef.Testbench__DOT__seed))));
    vlSelfRef.Testbench__DOT__in_valid = 1U;
    if (vlSelfRef.Testbench__DOT__in_ready) {
        vlSelfRef.Testbench__DOT__in_valid = 0U;
    }
    co_await vlSelfRef.__VtrigSched_hcbe6592c__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge Testbench.out_valid)", 
                                                         "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                                         36);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.Testbench__DOT__in_valid = 0U;
    vlSelfRef.Testbench__DOT__i = 0x10U;
    VL_WRITEF_NX("success!!!\n",0);
    VL_FINISH_MT("/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 40, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine VTestbench___024root___eval_initial__TOP__Vtiming__1(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                             nullptr, 
                                             "/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 
                                             44);
        vlSelfRef.Testbench__DOT__clk = (1U & (~ (IData)(vlSelfRef.Testbench__DOT__clk)));
    }
}

void VTestbench___024root___eval_act(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_act\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VTestbench___024root___nba_sequent__TOP__0(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__1(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__2(VTestbench___024root* vlSelf);
void VTestbench___024root___nba_sequent__TOP__3(VTestbench___024root* vlSelf);

void VTestbench___024root___eval_nba(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_nba\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__2(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VTestbench___024root___nba_sequent__TOP__3(vlSelf);
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__0(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__0\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.Testbench__DOT__error))) {
        VL_WRITEF_NX("fail!!!\n",0);
        VL_FINISH_MT("/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 88, "");
    }
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__1(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__1\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    VlWide<4>/*127:0*/ __Vtemp_8;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_10;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_12;
    VlWide<4>/*127:0*/ __Vtemp_13;
    VlWide<4>/*127:0*/ __Vtemp_14;
    VlWide<4>/*127:0*/ __Vtemp_15;
    VlWide<4>/*127:0*/ __Vtemp_16;
    VlWide<4>/*127:0*/ __Vtemp_28;
    VlWide<4>/*127:0*/ __Vtemp_40;
    VlWide<4>/*127:0*/ __Vtemp_52;
    VlWide<3>/*95:0*/ __Vtemp_65;
    VlWide<3>/*95:0*/ __Vtemp_66;
    VlWide<3>/*95:0*/ __Vtemp_67;
    VlWide<3>/*95:0*/ __Vtemp_69;
    VlWide<3>/*95:0*/ __Vtemp_70;
    VlWide<3>/*95:0*/ __Vtemp_71;
    VlWide<3>/*95:0*/ __Vtemp_73;
    VlWide<3>/*95:0*/ __Vtemp_74;
    VlWide<3>/*95:0*/ __Vtemp_75;
    VlWide<3>/*95:0*/ __Vtemp_77;
    VlWide<3>/*95:0*/ __Vtemp_78;
    VlWide<3>/*95:0*/ __Vtemp_79;
    // Body
    vlSelfRef.__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__work_cnt 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__work_cnt;
    vlSelfRef.__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__work_cnt 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__work_cnt;
    vlSelfRef.__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__work_cnt 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__work_cnt;
    vlSelfRef.__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__work_cnt 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__work_cnt;
    if (vlSelfRef.Testbench__DOT__judge__DOT__request) {
        __Vtemp_1[0U] = (IData)(vlSelfRef.Testbench__DOT__judge__DOT__dataQueue.at(0U));
        __Vtemp_1[1U] = (IData)((vlSelfRef.Testbench__DOT__judge__DOT__dataQueue.at(0U) 
                                 >> 0x20U));
        __Vtemp_1[2U] = 0U;
        __Vtemp_1[3U] = 0U;
        __Vtemp_2[0U] = (IData)(vlSelfRef.Testbench__DOT__kernel
                                .__PVT__data[0U]);
        __Vtemp_2[1U] = (IData)((vlSelfRef.Testbench__DOT__kernel
                                 .__PVT__data[0U] >> 0x20U));
        __Vtemp_2[2U] = 0U;
        __Vtemp_2[3U] = 0U;
        VL_MUL_W(4, __Vtemp_3, __Vtemp_1, __Vtemp_2);
        vlSelfRef.Testbench__DOT__judge__DOT__mid[0U][0U] 
            = __Vtemp_3[0U];
        vlSelfRef.Testbench__DOT__judge__DOT__mid[0U][1U] 
            = __Vtemp_3[1U];
        vlSelfRef.Testbench__DOT__judge__DOT__mid[0U][2U] 
            = __Vtemp_3[2U];
        vlSelfRef.Testbench__DOT__judge__DOT__mid[0U][3U] 
            = __Vtemp_3[3U];
        vlSelfRef.Testbench__DOT__judge__DOT__i = 4U;
        __Vtemp_4[0U] = (IData)(vlSelfRef.Testbench__DOT__judge__DOT__dataQueue.at(1U));
        __Vtemp_4[1U] = (IData)((vlSelfRef.Testbench__DOT__judge__DOT__dataQueue.at(1U) 
                                 >> 0x20U));
        __Vtemp_4[2U] = 0U;
        __Vtemp_4[3U] = 0U;
        __Vtemp_5[0U] = (IData)(vlSelfRef.Testbench__DOT__kernel
                                .__PVT__data[1U]);
        __Vtemp_5[1U] = (IData)((vlSelfRef.Testbench__DOT__kernel
                                 .__PVT__data[1U] >> 0x20U));
        __Vtemp_5[2U] = 0U;
        __Vtemp_5[3U] = 0U;
        VL_MUL_W(4, __Vtemp_6, __Vtemp_4, __Vtemp_5);
        vlSelfRef.Testbench__DOT__judge__DOT__mid[1U][0U] 
            = __Vtemp_6[0U];
        vlSelfRef.Testbench__DOT__judge__DOT__mid[1U][1U] 
            = __Vtemp_6[1U];
        vlSelfRef.Testbench__DOT__judge__DOT__mid[1U][2U] 
            = __Vtemp_6[2U];
        vlSelfRef.Testbench__DOT__judge__DOT__mid[1U][3U] 
            = __Vtemp_6[3U];
        __Vtemp_7[0U] = (IData)(vlSelfRef.Testbench__DOT__judge__DOT__dataQueue.at(2U));
        __Vtemp_7[1U] = (IData)((vlSelfRef.Testbench__DOT__judge__DOT__dataQueue.at(2U) 
                                 >> 0x20U));
        __Vtemp_7[2U] = 0U;
        __Vtemp_7[3U] = 0U;
        __Vtemp_8[0U] = (IData)(vlSelfRef.Testbench__DOT__kernel
                                .__PVT__data[2U]);
        __Vtemp_8[1U] = (IData)((vlSelfRef.Testbench__DOT__kernel
                                 .__PVT__data[2U] >> 0x20U));
        __Vtemp_8[2U] = 0U;
        __Vtemp_8[3U] = 0U;
        VL_MUL_W(4, __Vtemp_9, __Vtemp_7, __Vtemp_8);
        vlSelfRef.Testbench__DOT__judge__DOT__mid[2U][0U] 
            = __Vtemp_9[0U];
        vlSelfRef.Testbench__DOT__judge__DOT__mid[2U][1U] 
            = __Vtemp_9[1U];
        vlSelfRef.Testbench__DOT__judge__DOT__mid[2U][2U] 
            = __Vtemp_9[2U];
        vlSelfRef.Testbench__DOT__judge__DOT__mid[2U][3U] 
            = __Vtemp_9[3U];
        __Vtemp_10[0U] = (IData)(vlSelfRef.Testbench__DOT__judge__DOT__dataQueue.at(3U));
        __Vtemp_10[1U] = (IData)((vlSelfRef.Testbench__DOT__judge__DOT__dataQueue.at(3U) 
                                  >> 0x20U));
        __Vtemp_10[2U] = 0U;
        __Vtemp_10[3U] = 0U;
        __Vtemp_11[0U] = (IData)(vlSelfRef.Testbench__DOT__kernel
                                 .__PVT__data[3U]);
        __Vtemp_11[1U] = (IData)((vlSelfRef.Testbench__DOT__kernel
                                  .__PVT__data[3U] 
                                  >> 0x20U));
        __Vtemp_11[2U] = 0U;
        __Vtemp_11[3U] = 0U;
        VL_MUL_W(4, __Vtemp_12, __Vtemp_10, __Vtemp_11);
        vlSelfRef.Testbench__DOT__judge__DOT__mid[3U][0U] 
            = __Vtemp_12[0U];
        vlSelfRef.Testbench__DOT__judge__DOT__mid[3U][1U] 
            = __Vtemp_12[1U];
        vlSelfRef.Testbench__DOT__judge__DOT__mid[3U][2U] 
            = __Vtemp_12[2U];
        vlSelfRef.Testbench__DOT__judge__DOT__mid[3U][3U] 
            = __Vtemp_12[3U];
        vlSelfRef.Testbench__DOT__judge__DOT__sum[0U] 
            = vlSelfRef.Testbench__DOT__judge__DOT__mid
            [0U][0U];
        vlSelfRef.Testbench__DOT__judge__DOT__sum[1U] 
            = vlSelfRef.Testbench__DOT__judge__DOT__mid
            [0U][1U];
        vlSelfRef.Testbench__DOT__judge__DOT__sum[2U] 
            = vlSelfRef.Testbench__DOT__judge__DOT__mid
            [0U][2U];
        vlSelfRef.Testbench__DOT__judge__DOT__sum[3U] 
            = vlSelfRef.Testbench__DOT__judge__DOT__mid
            [0U][3U];
        VL_ADD_W(4, __Vtemp_13, vlSelfRef.Testbench__DOT__judge__DOT__sum, 
                 vlSelfRef.Testbench__DOT__judge__DOT__mid
                 [1U]);
        vlSelfRef.Testbench__DOT__judge__DOT__sum[0U] 
            = __Vtemp_13[0U];
        vlSelfRef.Testbench__DOT__judge__DOT__sum[1U] 
            = __Vtemp_13[1U];
        vlSelfRef.Testbench__DOT__judge__DOT__sum[2U] 
            = __Vtemp_13[2U];
        vlSelfRef.Testbench__DOT__judge__DOT__sum[3U] 
            = __Vtemp_13[3U];
        VL_ADD_W(4, __Vtemp_14, vlSelfRef.Testbench__DOT__judge__DOT__sum, 
                 vlSelfRef.Testbench__DOT__judge__DOT__mid
                 [2U]);
        vlSelfRef.Testbench__DOT__judge__DOT__sum[0U] 
            = __Vtemp_14[0U];
        vlSelfRef.Testbench__DOT__judge__DOT__sum[1U] 
            = __Vtemp_14[1U];
        vlSelfRef.Testbench__DOT__judge__DOT__sum[2U] 
            = __Vtemp_14[2U];
        vlSelfRef.Testbench__DOT__judge__DOT__sum[3U] 
            = __Vtemp_14[3U];
        VL_ADD_W(4, __Vtemp_15, vlSelfRef.Testbench__DOT__judge__DOT__sum, 
                 vlSelfRef.Testbench__DOT__judge__DOT__mid
                 [3U]);
        vlSelfRef.Testbench__DOT__judge__DOT__sum[0U] 
            = __Vtemp_15[0U];
        vlSelfRef.Testbench__DOT__judge__DOT__sum[1U] 
            = __Vtemp_15[1U];
        vlSelfRef.Testbench__DOT__judge__DOT__sum[2U] 
            = __Vtemp_15[2U];
        vlSelfRef.Testbench__DOT__judge__DOT__sum[3U] 
            = __Vtemp_15[3U];
        vlSelfRef.Testbench__DOT__judge__DOT__resultQueue.push_back(
                                                                    VL_CVT_W_A(vlSelfRef.Testbench__DOT__judge__DOT__sum, vlSelfRef.Testbench__DOT__judge__DOT__resultQueue
                                                                               .atDefault()));
    } else if (vlSelfRef.Testbench__DOT__out_valid) {
        VL_ASSIGN_W(128,vlSelfRef.Testbench__DOT__judge__DOT__simulate_result, vlSelfRef.Testbench__DOT__judge__DOT__resultQueue.pop_front());
        if ((0U == ((((vlSelfRef.Testbench__DOT__judge__DOT__simulate_result[0U] 
                       ^ vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage2
                       .__PVT__data[0U]) | (vlSelfRef.Testbench__DOT__judge__DOT__simulate_result[1U] 
                                            ^ vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage2
                                            .__PVT__data[1U])) 
                     | (vlSelfRef.Testbench__DOT__judge__DOT__simulate_result[2U] 
                        ^ vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage2
                        .__PVT__data[2U])) | (vlSelfRef.Testbench__DOT__judge__DOT__simulate_result[3U] 
                                              ^ vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage2
                                              .__PVT__data[3U])))) {
            VL_WRITEF_NX("simulate result: %x\n",0,
                         128,vlSelfRef.Testbench__DOT__judge__DOT__simulate_result.data());
            vlSelfRef.Testbench__DOT__error = 0U;
        } else {
            vlSelfRef.Testbench__DOT__error = 1U;
            VL_WRITEF_NX("*************error**************\nsimulate result: %x\nhardware result: %x\n",0,
                         128,vlSelfRef.Testbench__DOT__judge__DOT__simulate_result.data(),
                         128,vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage2
                         .__PVT__data.data());
        }
    }
    if ((0U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg))) {
        vlSelfRef.__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__work_cnt = 0x3fU;
        __Vtemp_16[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                                  .__PVT__data[0U] 
                                  >> 0x20U));
        __Vtemp_16[2U] = 0U;
        __Vtemp_16[3U] = 0U;
        vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[0U] 
            = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                      .__PVT__data[0U]);
        vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__multiplicand_reg 
            = vlSelfRef.Testbench__DOT__kernel.__PVT__data
            [0U];
        vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__finish_reg = 0U;
    } else {
        if ((1U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg))) {
            vlSelfRef.__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__work_cnt 
                = (0x3fU & ((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__work_cnt) 
                            - (IData)(1U)));
            if ((1U & vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[0U])) {
                __Vtemp_16[1U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__add_result[0U] 
                                   << 0x1fU) | (IData)(
                                                       ((0x7fffffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[1U])) 
                                                             << 0x1fU) 
                                                            | ((QData)((IData)(
                                                                               vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[0U])) 
                                                               >> 1U))) 
                                                        >> 0x20U)));
                __Vtemp_16[2U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__add_result[0U] 
                                   >> 1U) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__add_result[1U] 
                                             << 0x1fU));
                __Vtemp_16[3U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__add_result[1U] 
                                   >> 1U) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__add_result[2U] 
                                             << 0x1fU));
            } else {
                __Vtemp_16[1U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[2U] 
                                   << 0x1fU) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[1U] 
                                                >> 1U));
                __Vtemp_16[2U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[3U] 
                                   << 0x1fU) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[2U] 
                                                >> 1U));
                __Vtemp_16[3U] = (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[3U] 
                                  >> 1U);
            }
            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[0U] 
                = ((1U & vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[0U])
                    ? (IData)((0x7fffffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[1U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[0U])) 
                                                >> 1U))))
                    : ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[1U] 
                        << 0x1fU) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[0U] 
                                     >> 1U)));
        } else {
            __Vtemp_16[1U] = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[1U];
            __Vtemp_16[2U] = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[2U];
            __Vtemp_16[3U] = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[3U];
            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[0U] 
                = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[0U];
        }
        if ((1U != (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg))) {
            if ((2U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg))) {
                vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__finish_reg = 1U;
            }
        }
    }
    if ((0U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg))) {
        vlSelfRef.__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__work_cnt = 0x3fU;
        __Vtemp_28[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                                  .__PVT__data[1U] 
                                  >> 0x20U));
        __Vtemp_28[2U] = 0U;
        __Vtemp_28[3U] = 0U;
        vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[0U] 
            = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                      .__PVT__data[1U]);
        vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__multiplicand_reg 
            = vlSelfRef.Testbench__DOT__kernel.__PVT__data
            [1U];
        vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__finish_reg = 0U;
    } else {
        if ((1U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg))) {
            vlSelfRef.__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__work_cnt 
                = (0x3fU & ((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__work_cnt) 
                            - (IData)(1U)));
            if ((1U & vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[0U])) {
                __Vtemp_28[1U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__add_result[0U] 
                                   << 0x1fU) | (IData)(
                                                       ((0x7fffffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[1U])) 
                                                             << 0x1fU) 
                                                            | ((QData)((IData)(
                                                                               vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[0U])) 
                                                               >> 1U))) 
                                                        >> 0x20U)));
                __Vtemp_28[2U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__add_result[0U] 
                                   >> 1U) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__add_result[1U] 
                                             << 0x1fU));
                __Vtemp_28[3U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__add_result[1U] 
                                   >> 1U) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__add_result[2U] 
                                             << 0x1fU));
            } else {
                __Vtemp_28[1U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[2U] 
                                   << 0x1fU) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[1U] 
                                                >> 1U));
                __Vtemp_28[2U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[3U] 
                                   << 0x1fU) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[2U] 
                                                >> 1U));
                __Vtemp_28[3U] = (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[3U] 
                                  >> 1U);
            }
            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[0U] 
                = ((1U & vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[0U])
                    ? (IData)((0x7fffffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[1U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[0U])) 
                                                >> 1U))))
                    : ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[1U] 
                        << 0x1fU) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[0U] 
                                     >> 1U)));
        } else {
            __Vtemp_28[1U] = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[1U];
            __Vtemp_28[2U] = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[2U];
            __Vtemp_28[3U] = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[3U];
            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[0U] 
                = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[0U];
        }
        if ((1U != (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg))) {
            if ((2U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg))) {
                vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__finish_reg = 1U;
            }
        }
    }
    if ((0U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg))) {
        vlSelfRef.__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__work_cnt = 0x3fU;
        __Vtemp_40[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                                  .__PVT__data[2U] 
                                  >> 0x20U));
        __Vtemp_40[2U] = 0U;
        __Vtemp_40[3U] = 0U;
        vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[0U] 
            = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                      .__PVT__data[2U]);
        vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__multiplicand_reg 
            = vlSelfRef.Testbench__DOT__kernel.__PVT__data
            [2U];
        vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__finish_reg = 0U;
    } else {
        if ((1U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg))) {
            vlSelfRef.__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__work_cnt 
                = (0x3fU & ((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__work_cnt) 
                            - (IData)(1U)));
            if ((1U & vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[0U])) {
                __Vtemp_40[1U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__add_result[0U] 
                                   << 0x1fU) | (IData)(
                                                       ((0x7fffffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[1U])) 
                                                             << 0x1fU) 
                                                            | ((QData)((IData)(
                                                                               vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[0U])) 
                                                               >> 1U))) 
                                                        >> 0x20U)));
                __Vtemp_40[2U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__add_result[0U] 
                                   >> 1U) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__add_result[1U] 
                                             << 0x1fU));
                __Vtemp_40[3U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__add_result[1U] 
                                   >> 1U) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__add_result[2U] 
                                             << 0x1fU));
            } else {
                __Vtemp_40[1U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[2U] 
                                   << 0x1fU) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[1U] 
                                                >> 1U));
                __Vtemp_40[2U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[3U] 
                                   << 0x1fU) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[2U] 
                                                >> 1U));
                __Vtemp_40[3U] = (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[3U] 
                                  >> 1U);
            }
            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[0U] 
                = ((1U & vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[0U])
                    ? (IData)((0x7fffffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[1U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[0U])) 
                                                >> 1U))))
                    : ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[1U] 
                        << 0x1fU) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[0U] 
                                     >> 1U)));
        } else {
            __Vtemp_40[1U] = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[1U];
            __Vtemp_40[2U] = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[2U];
            __Vtemp_40[3U] = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[3U];
            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[0U] 
                = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[0U];
        }
        if ((1U != (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg))) {
            if ((2U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg))) {
                vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__finish_reg = 1U;
            }
        }
    }
    if ((0U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg))) {
        vlSelfRef.__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__work_cnt = 0x3fU;
        __Vtemp_52[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                                  .__PVT__data[3U] 
                                  >> 0x20U));
        __Vtemp_52[2U] = 0U;
        __Vtemp_52[3U] = 0U;
        vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[0U] 
            = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                      .__PVT__data[3U]);
        vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__multiplicand_reg 
            = vlSelfRef.Testbench__DOT__kernel.__PVT__data
            [3U];
        vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__finish_reg = 0U;
    } else {
        if ((1U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg))) {
            vlSelfRef.__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__work_cnt 
                = (0x3fU & ((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__work_cnt) 
                            - (IData)(1U)));
            if ((1U & vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[0U])) {
                __Vtemp_52[1U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__add_result[0U] 
                                   << 0x1fU) | (IData)(
                                                       ((0x7fffffffffffffffULL 
                                                         & (((QData)((IData)(
                                                                             vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[1U])) 
                                                             << 0x1fU) 
                                                            | ((QData)((IData)(
                                                                               vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[0U])) 
                                                               >> 1U))) 
                                                        >> 0x20U)));
                __Vtemp_52[2U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__add_result[0U] 
                                   >> 1U) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__add_result[1U] 
                                             << 0x1fU));
                __Vtemp_52[3U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__add_result[1U] 
                                   >> 1U) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__add_result[2U] 
                                             << 0x1fU));
            } else {
                __Vtemp_52[1U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[2U] 
                                   << 0x1fU) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[1U] 
                                                >> 1U));
                __Vtemp_52[2U] = ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[3U] 
                                   << 0x1fU) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[2U] 
                                                >> 1U));
                __Vtemp_52[3U] = (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[3U] 
                                  >> 1U);
            }
            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[0U] 
                = ((1U & vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[0U])
                    ? (IData)((0x7fffffffffffffffULL 
                               & (((QData)((IData)(
                                                   vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[1U])) 
                                   << 0x1fU) | ((QData)((IData)(
                                                                vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[0U])) 
                                                >> 1U))))
                    : ((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[1U] 
                        << 0x1fU) | (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[0U] 
                                     >> 1U)));
        } else {
            __Vtemp_52[1U] = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[1U];
            __Vtemp_52[2U] = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[2U];
            __Vtemp_52[3U] = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[3U];
            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[0U] 
                = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[0U];
        }
        if ((1U != (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg))) {
            if ((2U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg))) {
                vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__finish_reg = 1U;
            }
        }
    }
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[1U] 
        = __Vtemp_16[1U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[2U] 
        = __Vtemp_16[2U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[3U] 
        = __Vtemp_16[3U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[1U] 
        = __Vtemp_28[1U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[2U] 
        = __Vtemp_28[2U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[3U] 
        = __Vtemp_28[3U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[1U] 
        = __Vtemp_40[1U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[2U] 
        = __Vtemp_40[2U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[3U] 
        = __Vtemp_40[3U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[1U] 
        = __Vtemp_52[1U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[2U] 
        = __Vtemp_52[2U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[3U] 
        = __Vtemp_52[3U];
    if (((IData)(vlSelfRef.Testbench__DOT__in_valid) 
         & (IData)(vlSelfRef.Testbench__DOT__in_ready))) {
        vlSelfRef.Testbench__DOT__judge__DOT__dataQueue.push_back(vlSelfRef.Testbench__DOT__in_data);
        vlSelfRef.Testbench__DOT__judge__DOT__request = 1U;
        vlSelfRef.Testbench__DOT__judge__DOT__dataQueue.pop_front();
    } else {
        vlSelfRef.Testbench__DOT__judge__DOT__request = 0U;
    }
    __Vtemp_65[0U] = (IData)((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[2U]))));
    __Vtemp_65[1U] = (IData)(((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg[2U]))) 
                              >> 0x20U));
    __Vtemp_65[2U] = 0U;
    __Vtemp_66[0U] = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__multiplicand_reg);
    __Vtemp_66[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__multiplicand_reg 
                              >> 0x20U));
    __Vtemp_66[2U] = 0U;
    VL_ADD_W(3, __Vtemp_67, __Vtemp_65, __Vtemp_66);
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__add_result[0U] 
        = __Vtemp_67[0U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__add_result[1U] 
        = __Vtemp_67[1U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__add_result[2U] 
        = (1U & __Vtemp_67[2U]);
    __Vtemp_69[0U] = (IData)((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[2U]))));
    __Vtemp_69[1U] = (IData)(((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg[2U]))) 
                              >> 0x20U));
    __Vtemp_69[2U] = 0U;
    __Vtemp_70[0U] = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__multiplicand_reg);
    __Vtemp_70[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__multiplicand_reg 
                              >> 0x20U));
    __Vtemp_70[2U] = 0U;
    VL_ADD_W(3, __Vtemp_71, __Vtemp_69, __Vtemp_70);
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__add_result[0U] 
        = __Vtemp_71[0U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__add_result[1U] 
        = __Vtemp_71[1U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__add_result[2U] 
        = (1U & __Vtemp_71[2U]);
    __Vtemp_73[0U] = (IData)((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[2U]))));
    __Vtemp_73[1U] = (IData)(((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg[2U]))) 
                              >> 0x20U));
    __Vtemp_73[2U] = 0U;
    __Vtemp_74[0U] = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__multiplicand_reg);
    __Vtemp_74[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__multiplicand_reg 
                              >> 0x20U));
    __Vtemp_74[2U] = 0U;
    VL_ADD_W(3, __Vtemp_75, __Vtemp_73, __Vtemp_74);
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__add_result[0U] 
        = __Vtemp_75[0U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__add_result[1U] 
        = __Vtemp_75[1U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__add_result[2U] 
        = (1U & __Vtemp_75[2U]);
    __Vtemp_77[0U] = (IData)((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[2U]))));
    __Vtemp_77[1U] = (IData)(((((QData)((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg[2U]))) 
                              >> 0x20U));
    __Vtemp_77[2U] = 0U;
    __Vtemp_78[0U] = (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__multiplicand_reg);
    __Vtemp_78[1U] = (IData)((vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__multiplicand_reg 
                              >> 0x20U));
    __Vtemp_78[2U] = 0U;
    VL_ADD_W(3, __Vtemp_79, __Vtemp_77, __Vtemp_78);
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__add_result[0U] 
        = __Vtemp_79[0U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__add_result[1U] 
        = __Vtemp_79[1U];
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__add_result[2U] 
        = (1U & __Vtemp_79[2U]);
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__2(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__2\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__Vfuncout;
    VL_ZERO_W(128, __Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__a;
    VL_ZERO_W(128, __Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__a);
    VlWide<4>/*127:0*/ __Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__b;
    VL_ZERO_W(128, __Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__b);
    VlWide<4>/*127:0*/ __Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__c;
    VL_ZERO_W(128, __Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__c);
    VlWide<4>/*127:0*/ __Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__d;
    VL_ZERO_W(128, __Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__d);
    CData/*0:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__shift__DOT__state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__shift__DOT__state_reg = 0;
    CData/*0:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__temp_valid;
    __Vdly__Testbench__DOT__conv_unit__DOT__temp_valid = 0;
    VTestbench_data_vector__struct__0 __Vdly__Testbench__DOT__conv_unit__DOT__shifted_data;
    for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
        __Vdly__Testbench__DOT__conv_unit__DOT__shifted_data.__PVT__data[__Vi1] = 0;
    }
    CData/*1:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg = 0;
    VlUnpacked<VTestbench_Testbench__DOT__conv_unit__DOT__conv__DOT__mid_vector__struct__0, 4> __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        VL_ZERO_W(128, __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[__Vi0].__PVT__data);
        __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[__Vi0].__PVT__valid = 0;
    }
    CData/*1:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg = 0;
    CData/*1:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg = 0;
    CData/*1:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg = 0;
    CData/*1:0*/ __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg = 0;
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_4;
    VlWide<4>/*127:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_7;
    // Body
    __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__shift__DOT__state_reg 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__shift__DOT__state_reg;
    __Vdly__Testbench__DOT__conv_unit__DOT__temp_valid 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__temp_valid;
    __Vdly__Testbench__DOT__conv_unit__DOT__shifted_data 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data;
    if (vlSelfRef.Testbench__DOT__rst) {
        vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__unnamedblk1__DOT__j = 3U;
        __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg = 0U;
        __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg = 0U;
        __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg = 0U;
        __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg = 0U;
        __Vdly__Testbench__DOT__conv_unit__DOT__shift__DOT__state_reg = 1U;
        __Vdly__Testbench__DOT__conv_unit__DOT__temp_valid = 0U;
        vlSelfRef.Testbench__DOT__in_ready = 0U;
        __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg = 0U;
        vlSelfRef.Testbench__DOT__conv_unit__DOT__temp_ready = 1U;
        vlSelfRef.Testbench__DOT__out_valid = 0U;
        vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_start = 0U;
        __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[0U].__PVT__valid = 0U;
        vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage2.__PVT__valid = 0U;
        __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[1U].__PVT__valid = 0U;
        __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[2U].__PVT__valid = 0U;
    } else {
        if ((0U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg))) {
            __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg 
                = ((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg))) {
            if ((0U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__work_cnt))) {
                __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg = 2U;
            }
        } else {
            __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg = 0U;
        }
        if ((0U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg))) {
            __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg 
                = ((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg))) {
            if ((0U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__work_cnt))) {
                __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg = 2U;
            }
        } else {
            __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg = 0U;
        }
        if ((0U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg))) {
            __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg 
                = ((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg))) {
            if ((0U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__work_cnt))) {
                __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg = 2U;
            }
        } else {
            __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg = 0U;
        }
        if ((0U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg))) {
            __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg 
                = ((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_start)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg))) {
            if ((0U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__work_cnt))) {
                __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg = 2U;
            }
        } else {
            __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg = 0U;
        }
        if (vlSelfRef.Testbench__DOT__conv_unit__DOT__shift__DOT__state_reg) {
            if (vlSelfRef.Testbench__DOT__conv_unit__DOT__shift__DOT__state_reg) {
                if (((IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__temp_ready) 
                     & (IData)(vlSelfRef.Testbench__DOT__in_valid))) {
                    __Vdly__Testbench__DOT__conv_unit__DOT__shift__DOT__state_reg = 0U;
                    vlSelfRef.Testbench__DOT__in_ready = 1U;
                    __Vdly__Testbench__DOT__conv_unit__DOT__temp_valid = 1U;
                } else {
                    __Vdly__Testbench__DOT__conv_unit__DOT__shift__DOT__state_reg = 1U;
                }
            } else {
                __Vdly__Testbench__DOT__conv_unit__DOT__shift__DOT__state_reg = 1U;
            }
        } else if (vlSelfRef.Testbench__DOT__in_valid) {
            __Vdly__Testbench__DOT__conv_unit__DOT__shifted_data.__PVT__data[0U] 
                = vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                .__PVT__data[1U];
            vlSelfRef.Testbench__DOT__conv_unit__DOT__shift__DOT__i = 3U;
            __Vdly__Testbench__DOT__conv_unit__DOT__temp_valid = 0U;
            vlSelfRef.Testbench__DOT__in_ready = 0U;
            __Vdly__Testbench__DOT__conv_unit__DOT__shift__DOT__state_reg = 1U;
            __Vdly__Testbench__DOT__conv_unit__DOT__shifted_data.__PVT__data[1U] 
                = vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                .__PVT__data[2U];
            __Vdly__Testbench__DOT__conv_unit__DOT__shifted_data.__PVT__data[2U] 
                = vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data
                .__PVT__data[3U];
            __Vdly__Testbench__DOT__conv_unit__DOT__shifted_data.__PVT__data[3U] 
                = vlSelfRef.Testbench__DOT__in_data;
        } else {
            __Vdly__Testbench__DOT__conv_unit__DOT__shift__DOT__state_reg = 0U;
            __Vdly__Testbench__DOT__conv_unit__DOT__temp_valid = 0U;
        }
        if ((0U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg))) {
            if (vlSelfRef.Testbench__DOT__conv_unit__DOT__temp_valid) {
                vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__unnamedblk2__DOT__m = 4U;
                vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_start = 1U;
                vlSelfRef.Testbench__DOT__conv_unit__DOT__temp_ready = 0U;
                vlSelfRef.Testbench__DOT__out_valid = 0U;
                __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[0U].__PVT__valid = 0U;
                __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg = 1U;
                __Vtemp_1[0U] = 0U;
                __Vtemp_1[1U] = 0U;
                __Vtemp_1[2U] = 0U;
                __Vtemp_1[3U] = 0U;
                VL_ASSIGN_W(128,__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                            [0U].__PVT__data, __Vtemp_1);
                __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[1U].__PVT__valid = 0U;
                __Vtemp_2[0U] = 0U;
                __Vtemp_2[1U] = 0U;
                __Vtemp_2[2U] = 0U;
                __Vtemp_2[3U] = 0U;
                VL_ASSIGN_W(128,__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                            [1U].__PVT__data, __Vtemp_2);
                __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[2U].__PVT__valid = 0U;
                __Vtemp_3[0U] = 0U;
                __Vtemp_3[1U] = 0U;
                __Vtemp_3[2U] = 0U;
                __Vtemp_3[3U] = 0U;
                VL_ASSIGN_W(128,__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                            [2U].__PVT__data, __Vtemp_3);
                __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[3U].__PVT__valid = 0U;
                __Vtemp_4[0U] = 0U;
                __Vtemp_4[1U] = 0U;
                __Vtemp_4[2U] = 0U;
                __Vtemp_4[3U] = 0U;
                VL_ASSIGN_W(128,__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                            [3U].__PVT__data, __Vtemp_4);
            } else {
                vlSelfRef.Testbench__DOT__conv_unit__DOT__temp_ready = 1U;
                vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_start = 0U;
                vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage2.__PVT__valid = 0U;
                __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg = 0U;
                __Vtemp_5[0U] = 0U;
                __Vtemp_5[1U] = 0U;
                __Vtemp_5[2U] = 0U;
                __Vtemp_5[3U] = 0U;
                VL_ASSIGN_W(128,vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage2
                            .__PVT__data, __Vtemp_5);
            }
        } else if ((1U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg))) {
            if (vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                [0U].__PVT__valid) {
                vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage2.__PVT__valid = 1U;
                __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg = 2U;
                vlSelfRef.Testbench__DOT__out_valid = 1U;
                vlSelfRef.Testbench__DOT__conv_unit__DOT__temp_ready = 0U;
                vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_start = 0U;
                VL_ASSIGN_W(128,__Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__d, 
                            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                            [3U].__PVT__data);
                VL_ASSIGN_W(128,__Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__c, 
                            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                            [2U].__PVT__data);
                VL_ASSIGN_W(128,__Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__b, 
                            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                            [1U].__PVT__data);
                VL_ASSIGN_W(128,__Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__a, 
                            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                            [0U].__PVT__data);
                VL_ADD_W(4, __Vtemp_6, __Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__a, __Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__b);
                VL_ADD_W(4, __Vtemp_7, __Vtemp_6, __Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__c);
                VL_ADD_W(4, __Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__Vfuncout, __Vtemp_7, __Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__d);
                VL_ASSIGN_W(128,vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage2
                            .__PVT__data, __Vfunc_Testbench__DOT__conv_unit__DOT__conv__DOT__add128__0__Vfuncout);
            } else {
                vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_start = 0U;
                vlSelfRef.Testbench__DOT__out_valid = 0U;
                vlSelfRef.Testbench__DOT__conv_unit__DOT__temp_ready = 0U;
                __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg = 1U;
            }
        } else if ((2U == (IData)(vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg))) {
            __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg = 0U;
            vlSelfRef.Testbench__DOT__out_valid = 0U;
            vlSelfRef.Testbench__DOT__conv_unit__DOT__temp_ready = 1U;
            vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_start = 0U;
        } else {
            __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg = 0U;
        }
    }
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg 
        = __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__fsm_state_reg;
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg 
        = __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__fsm_state_reg;
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg 
        = __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__fsm_state_reg;
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg 
        = __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__fsm_state_reg;
    vlSelfRef.Testbench__DOT__conv_unit__DOT__shift__DOT__state_reg 
        = __Vdly__Testbench__DOT__conv_unit__DOT__shift__DOT__state_reg;
    vlSelfRef.Testbench__DOT__conv_unit__DOT__shifted_data 
        = __Vdly__Testbench__DOT__conv_unit__DOT__shifted_data;
    vlSelfRef.Testbench__DOT__conv_unit__DOT__temp_valid 
        = __Vdly__Testbench__DOT__conv_unit__DOT__temp_valid;
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg 
        = __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__state_reg;
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1 
        = __Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1;
}

VL_INLINE_OPT void VTestbench___024root___nba_sequent__TOP__3(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___nba_sequent__TOP__3\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__work_cnt 
        = vlSelfRef.__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__work_cnt;
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__work_cnt 
        = vlSelfRef.__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__work_cnt;
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__work_cnt 
        = vlSelfRef.__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__work_cnt;
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__work_cnt 
        = vlSelfRef.__Vdly__Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__work_cnt;
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[0U].__PVT__valid 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__finish_reg;
    VL_ASSIGN_W(128,vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                [0U].__PVT__data, vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__0__KET____DOT__mul__DOT__product_reg);
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[1U].__PVT__valid 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__finish_reg;
    VL_ASSIGN_W(128,vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                [1U].__PVT__data, vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__1__KET____DOT__mul__DOT__product_reg);
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[2U].__PVT__valid 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__finish_reg;
    VL_ASSIGN_W(128,vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                [2U].__PVT__data, vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__2__KET____DOT__mul__DOT__product_reg);
    vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1[3U].__PVT__valid 
        = vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__finish_reg;
    VL_ASSIGN_W(128,vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__vector_stage1
                [3U].__PVT__data, vlSelfRef.Testbench__DOT__conv_unit__DOT__conv__DOT__mul_gen__BRA__3__KET____DOT__mul__DOT__product_reg);
}

void VTestbench___024root___timing_resume(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___timing_resume\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hcbe6592c__0.resume(
                                                   "@(posedge Testbench.out_valid)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void VTestbench___024root___timing_commit(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___timing_commit\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hcbe6592c__0.commit(
                                                   "@(posedge Testbench.out_valid)");
    }
}

void VTestbench___024root___eval_triggers__act(VTestbench___024root* vlSelf);

bool VTestbench___024root___eval_phase__act(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__act\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VTestbench___024root___eval_triggers__act(vlSelf);
    VTestbench___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VTestbench___024root___timing_resume(vlSelf);
        VTestbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VTestbench___024root___eval_phase__nba(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_phase__nba\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VTestbench___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__nba(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTestbench___024root___dump_triggers__act(VTestbench___024root* vlSelf);
#endif  // VL_DEBUG

void VTestbench___024root___eval(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VTestbench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VTestbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/mnt/d/sysI/sys1-sp25/src/lab4-1/sim/testbench.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VTestbench___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VTestbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VTestbench___024root___eval_debug_assertions(VTestbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root___eval_debug_assertions\n"); );
    VTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG

std::string VL_TO_STRING(const VTestbench_Testbench__DOT__conv_unit__DOT__conv__DOT__mid_vector__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestbench___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{data:" + VL_TO_STRING_W(4, obj.__PVT__data);
        out += ", valid:" + VL_TO_STRING(obj.__PVT__valid);
        out += "}";
    return out;
}
