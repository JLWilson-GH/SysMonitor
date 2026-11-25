#pragma once

#include "CpuInfo.h";
#include "CpuLiveMetrics.h"

class ICpuCollector {
public:
    CpuInfo collectCpuInfo(){
        
    }

    CpuLiveMetrics collectCpuLiveMetrics(){

    }

    virtual ~ICpuCollector() = default;



};