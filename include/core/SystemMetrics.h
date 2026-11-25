#include "CpuMetrics.h";
#include "MemoryMetrics.h";

struct SystemMetrics
{
    CpuMetrics cpuMetrics{};
    MemoryMetrics memoryMetrics{};
}