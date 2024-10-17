#pragma once
#include "./Waveform.h"

class SineWave : public Waveform 
{
public:
    SineWave(float frequency, float amplitude, float phase);
    float generate(float time) const override;
};

