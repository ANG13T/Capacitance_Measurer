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

![design image](https://github.com/angelina-tsuboi/LCD_Visual_Display/blob/main/images/base_design.png)

The CAD I was using didn't have the LCD (I2C). Wiring the LCD should be pretty simple as long as you look over the source code.

## How It Works

The functionality for each component are listed below:

### Resistor Functionality

### LCD Display Functionality

A Liquid Crystal Display or LCD for short is a flat panel display usually uses millions of tiny pixels which can either be red, blue or green that can be turned on and off very quickly in order to produce rapid/moving images (ie. TV, computers, phones, etc). In this case, we are controlling a very compact LCD (16 x 2) with only which only uses the color black. The LCD contains liquid crystal sandwiched between glass that reacts with the current applied to display specific characters. In this tutorial, I used a I2C LCD in order to make the wiring and programming easier. For this project, the functionality of the LCD is to display the capacitance of the current capacitor either in nano farads (nF) or micro farads (mF).

## Completed Project

![project photo](https://github.com/angelina-tsuboi/LCD_Visual_Display/blob/main/images/completed-project.jpg)