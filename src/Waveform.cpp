#include "../include/Waveform.h"

Waveform::Waveform(float frequency, float amplitude, float phase)
{
    this->frequency = frequency;
    this->amplitude = amplitude;
    this->phase = phase;
}
void Waveform::setFrequency(float frequency)
{
    this->frequency = frequency;
}
void Waveform::setAmplitude(float amplitude)
{
    this->amplitude = amplitude;
}
void Waveform::setPhase(float phase)
{
    this->phase = phase;
}