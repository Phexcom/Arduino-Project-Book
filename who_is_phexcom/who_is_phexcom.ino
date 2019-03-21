#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;

String message[] = {"Programmer ", "Malware Analyst","Digital Marketer", "Rabbit", "Rat", "Spider", "Lizard"};


void setup() {
  lcd.begin(16, 2);
  pinMode(switchPin, INPUT);

}

void loop() {

   int i = 1;
  for (i = 0; i < 7 ; i = i + 1) {
     lcd.print("Phexcom is a: ");
     lcd.setCursor(0, 1);
//     
     lcd.print(message[i]);
     delay(2000);  
     lcd.clear();

      
    
  }

}
