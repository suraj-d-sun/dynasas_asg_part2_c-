#pragma once
#include "./Waveform.h"

class SquareWave : public Waveform 
{
public:
    SquareWave(float frequency, float amplitude, float phase);
    float generate(float time) const override;
};

