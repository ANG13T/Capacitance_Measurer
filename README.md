# Capacitance Measurer

This projects allows you to calculate the capacitance of a capacitor using a couple of resistors, a LCD, and an Arduino Uno.

## Materials

- Breadboard
- 1 220ohm resistor
- 1 10k ohm resistor
- I2C LCD display
- Around 10 jumper wires
- Arduino Uno

## Schematic (excluding LCD)

![design image](https://github.com/angelina-tsuboi/Capacitance_Measurer/blob/main/images/design.png)

The CAD I was using didn't have the LCD (I2C). Wiring the LCD should be pretty simple as long as you look over the source code.

## How It Works

The functionality for each component are listed below:

### Capacitor Functionality

The purpose of a capacitor is to store an electric charge. A capacitor is able to store charge in an electric field between two conductive plates. The non-conducite material sandwiched between the conductive plates is called a *dielectric*. Dielectrics alter the capacitance of a capacitor.

Equation for the capacitance of a parallel plate capacitor:

C = (εA) / d

where

- C = capacitance
- ε = dielectric
- A = surface area where the plates overlap
- d = distance between the plates

For this project, we will record the amount of time it takes to charge an unknown capacitor with a known resistance until it reaches 63.2% of its total voltage. Based on the time we will be able to calculate the capacitance of the capacitor using the equation: C = τ / R

### Resistor Functionality

For this project we are using a 220Ω Resistor as well as a 10KΩ Resistor in order to discharge the capacitor. The voltage across the capacitor will be measured using an analog input.


### LCD Display Functionality

A Liquid Crystal Display or LCD for short is a flat panel display usually uses millions of tiny pixels which can either be red, blue or green that can be turned on and off very quickly in order to produce rapid/moving images (ie. TV, computers, phones, etc). In this case, we are controlling a very compact LCD (16 x 2) with only which only uses the color black. The LCD contains liquid crystal sandwiched between glass that reacts with the current applied to display specific characters. In this tutorial, I used a I2C LCD in order to make the wiring and programming easier. For this project, the functionality of the LCD is to display the capacitance of the current capacitor either in nano farads (nF) or micro farads (mF).

### Code Functionality

When the sketch runs, it will begin by charging the capacitor and starting the timer. When the unknown capacitor reaches about 63.2% of its total voltage, it will detirmine how much time it took for the capcitor to reach that voltage and calculates the capacitance with the equation C = τ / R. Then it will determine whether the capacitance should displayed on the LCD as nF or uF and print it onto the LCD. Finally, the sketch discharges the capacitor until it reaches a capacitance of 0.


## Completed Project

![project photo](https://github.com/angelina-tsuboi/Capacitance_Measurer/blob/main/images/final.jpg)


## Sources

[Instructables Tutorial](https://www.instructables.com/Measure-Capacitance-with-Arduino/)
[Electronics Hub Tutorial](https://www.electronicshub.org/arduino-capacitance-meter/)