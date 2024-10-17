# Waveform Generator Project(dynasas_asg_part2_cpp)

This project is a **Waveform Generator** that supports both **Sine Waves** and **Square Waves**. Users can input parameters such as frequency, amplitude, and phase shift to generate and save waveforms in CSV format. The generated waveform can be visualized using **Gnuplot**.

## **Table of Contents**
- [Features](#features)
- [Requirements](#requirements)
- [Setup](#setup)
- [Usage](#usage)
- [Example Run](#example-run)
- [Screenshots](#screenshots)

---

## **Features**
- Generate **Sine Wave** or **Square Wave** data.
- Save waveform data as a CSV file.
- Plot the generated waveform using **Gnuplot**.
- Works on both **Windows** and **Linux** operating systems.

---

## **Requirements**
### **Windows:**
1. **MinGW** or any compatible GCC compiler for C++.
2. **Gnuplot for Windows** (Download from [Gnuplot official site](http://www.gnuplot.info)).
3. Ensure `Gnuplot` is added to the system's `PATH`.

### **Linux:**
1. **GCC or Clang** (usually pre-installed).
2. **Gnuplot** (Install via package manager: `sudo apt-get install gnuplot`).

---

## **Setup**

### **Windows:**

1. **Install MinGW**:
   - Download from [MinGW](https://sourceforge.net/projects/mingw/).
   - During installation, ensure **G++** and **make** are selected.
   - Add the MinGW `bin` folder (e.g., `C:\MinGW\bin`) to the **system's PATH**.

2. **Install Gnuplot**:
   - Download and install Gnuplot for Windows.
   - Add Gnuplot's `bin` folder to the **system's PATH**.

3. **Verify Installation**:
     ``` gnuplot --version ```
     ``` g++ --version ```

4. **Compile the Program**:
   Open a terminal (PowerShell or Command Prompt) in the project directory:
   ```bash
   g++ main.cpp -I include -L lib -lwaves -o waveform_generator.exe

### **Linux:**

1. **Install GCC and Gnuplot**:
   ```bash
    sudo apt update
    sudo apt install g++ gnuplot

2. **Verify Installation**:
     ``` gnuplot --version ```
      ``` g++ --version ```
        
3. **Compile the Program**:
   Open a terminal in the project directory
   ```bash
   g++ main.cpp -I include -L lib -lwaves -o waveform_generator.exe

## **Usage**
  ### Windows:
1. Open a terminal (Command Prompt or PowerShell) and navigate to the project directory:
   ```bash
   cd path\to\dynasas_asg_part2_cpp
2. Run the program:
   ```bash
   waveform_generator.exe
3. Follow the prompts to select a waveform type and input parameters
4. The generated waveform will be saved to waveform_output.csv & Gnuplot will automatically open to display the plot.

  ### Linux:
1. Open a terminal (Command Prompt or PowerShell) and navigate to the project directory:
   ```bash
   cd path\to\dynasas_asg_part2_cpp
2. Run the program:
   ```bash
   ./waveform_generator.out
3. Follow the prompts to select a waveform type and input parameters
4. The generated waveform will be saved to waveform_output.csv & Gnuplot will automatically open to display the plot.


## **Example Run**
  ```
  Enter waveform type (sine/square): sine
  Enter frequency (Hz): 5
  Enter amplitude: 2
  Enter phase shift (radians, optional - default 0): 0.5
  Waveform saved to waveform_output.csv


  Enter waveform type (sine/square): square
  Enter frequency (Hz): 2
  Enter amplitude: 2
  Enter phase shift (radians, optional - default 0): 0.1
  Waveform saved to waveform_output.csv
```
## Screenshots
<p align="center">
  <img src="https://github.com/user-attachments/assets/f4462191-07f2-442e-84c8-ba394ec91f83" width="400" height="300"/>
  <img src="https://github.com/user-attachments/assets/24b87f0d-f37d-4c34-89e2-bb16a65b5aea" width="400" height="300"/>
</p>

