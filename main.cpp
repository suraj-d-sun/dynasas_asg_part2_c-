#include <iostream>
#include <vector>
#include <memory>
#include <fstream>
#include "../include/SineWave.h"
#include "../include/SquareWave.h"
using namespace std;

void generateWaveform(shared_ptr<Waveform> waveform, float duration, int sampleRate, vector<float>& values) 
{
    float timeStep = 1.0f / sampleRate;
    for (float t = 0; t < duration; t += timeStep) 
    {
        values.push_back(waveform->generate(t));
    }
}

void saveToCSV(const vector<float>& values, float duration, int sampleRate, const string& filename) 
{
    ofstream file(filename);
    float timeStep = 1.0f / sampleRate;
    float time = 0.0f;
    for (const auto& value : values) 
    {
        file << time << "," << value << "\n";
        time += timeStep;
    }
    file.close();
    cout << "Waveform saved to " << filename << endl;
}

void plotWithGnuplot(const std::string& filename) 
{
    string command = "gnuplot -p -e \"set datafile separator ','; plot '" + filename + "' using 1:2 with lines title 'Waveform'\"";
    system(command.c_str());
}


int main() 
{
    float frequency;
    float amplitude;
    float phase = 0.0f;
    int sampleRate = 1000;
    string waveformType;

    cout << "Enter waveform type (sine/square): ";
    cin >> waveformType;

    cout << "Enter frequency (Hz): ";
    cin >> frequency;

    cout << "Enter amplitude: ";
    cin >> amplitude;

    cout << "Enter phase shift (radians, optional - default 0): ";
    cin >> phase;

    vector<float> waveformValues;
    shared_ptr<Waveform> waveform;

    if (waveformType == "sine") 
    {
        waveform = make_shared<SineWave>(frequency, amplitude, phase);
    }
    else if (waveformType == "square") 
    {
        waveform = make_shared<SquareWave>(frequency, amplitude, phase);
    } 
    else 
    {
        cerr << "Invalid waveform type!" << endl;
        return -1;
    }

    generateWaveform(waveform, 1.0f, sampleRate, waveformValues);
    saveToCSV(waveformValues, 1.0f, sampleRate, "waveform_output.csv");
    plotWithGnuplot("waveform_output.csv");
    
    return 0;
}