#pragma once

#include <string>

struct CpuInfo{
    std::string cpuManufacturer {};
    std::string cpuModel {};
    int physicalCoreCount {};
    int logicalProcessorCount {};
};