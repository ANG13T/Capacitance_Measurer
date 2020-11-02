#include <LiquidCrystal_I2C.h>

int analogPin = A0;
int chargePin = 12;
int dischargePin = 10; //speeds up discharging process, not necessary though

// Initialize Resistor
int resistorValue = 10000;

// timer variables
unsigned long startTime;
unsigned long elapsedTime;

// capacitance Variables
float microFarads;                
float nanoFarads;  

//set up ic2 lcd
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 20, 4);

void setup()
{
  pinMode(chargePin, OUTPUT);     
  digitalWrite(chargePin, LOW);  
  //LCD interface setup
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Capacitance:");
}

void loop()
{
  lcd.setCursor(0,1);
  digitalWrite(chargePin, HIGH); // starts to charge the capacitor
  startTime = millis(); // begins the timer
  
  while(analogRead(analogPin) < 648)
  {       
    // Does nothing until capacitor reaches 63.2% of total voltage
  }

  elapsedTime= millis() - startTime; // Determines how much time it took to charge capacitor
  microFarads = ((float)elapsedTime / resistorValue) * 1000; //calculates the capacitance       

  if (microFarads >= 1) // Determines if units should be micro or nano and prints accordingly
  {
    lcd.print((long)microFarads);
    lcd.print(" uF");         
  }else {
    nanoFarads = microFarads * 1000.0;          
    lcd.print((long)nanoFarads);
    lcd.print(" nF");        
    delay(500); 
  }

  digitalWrite(chargePin, LOW); // Stops charging capacitor
  pinMode(dischargePin, OUTPUT); 
  digitalWrite(dischargePin, LOW); // allows capacitor to discharge    
  while(analogRead(analogPin) > 0)
  {
    // Do nothing until capacitor is discharged      
  }

  pinMode(dischargePin, INPUT); // Prevents capacitor from discharging  
}
