#pragma once
class Waveform 
{
protected:
    float frequency;
    float amplitude;
    float phase;

public:
    Waveform(float frequency, float amplitude, float phase);
    virtual ~Waveform() = default;
    
    virtual float generate(float time) const = 0;
    virtual void setFrequency(float frequency);
    virtual void setAmplitude(float amplitude);
    virtual void setPhase(float phase);
};