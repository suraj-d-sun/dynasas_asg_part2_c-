#include "SineWave.h"
#include <cmath>
using namespace std;
SineWave::SineWave(float frequency, float amplitude, float phase) : Waveform(frequency, amplitude, phase) {}

float SineWave::generate(float time) const 
{
    return this->amplitude * sin(2 * M_PI * this->frequency * time + this->phase);
}