#include "SquareWave.h"
#include <cmath>

SquareWave::SquareWave(float frequency, float amplitude, float phase) : Waveform(frequency, amplitude, phase) {}

float SquareWave::generate(float time) const 
{
    return this->amplitude * (std::sin(2 * M_PI * this->frequency * time + this->phase) >= 0 ? 1 : -1);
}

