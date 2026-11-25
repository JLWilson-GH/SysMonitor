#include <cstdint>

struct RawCpuMetrics{
    uint64_t idleTime {};
    uint64_t kernelTime {};
    uint64_t userTime {};
};