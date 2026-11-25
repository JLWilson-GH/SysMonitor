#pragma once

#include "CpuInfo.h";
#include "CpuLiveMetrics.h";
#include "MemoryMetrics.h";

struct SystemMetrics
{
    CpuInfo cpuInfo{};
    CpuLiveMetrics cpuMetrics{};
    MemoryMetrics memoryMetrics{};
};