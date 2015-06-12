/*
  Blink
  The basic Energia example.
  Turns on an LED on for one second, then off for one second, repeatedly.
  Change the LED define to blink other LEDs.
  
  Hardware Required:
  * LaunchPad with an LED
  
  This example code is in the public domain.
*/

// most launchpads have a red LED
#define LED RED_LED
#define LED1 8
#define LED2 9
#define LED3 10
#define LED4 11
#define LED5 12
int i=0;
//see pins_energia.h for more LED definitions
//#define LED GREEN_LED
  
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED, OUTPUT);
    pinMode(LED1, OUTPUT);
      pinMode(LED2, OUTPUT);
        pinMode(LED3, OUTPUT);
          pinMode(LED4, OUTPUT);
            pinMode(LED5, OUTPUT);
  
  
}

// the loop routine runs over and over again forever:
void loop() {
  
  digitalWrite(LED1, HIGH);  // turn the LED on (HIGH is the voltage level)
   delay(500);
   digitalWrite(LED2, HIGH); 
   delay(500);
   digitalWrite(LED3, HIGH);
   delay(500);  
     digitalWrite(LED4, HIGH);  
       delay(500);
       digitalWrite(LED5, HIGH);  
          
  delay(500);   // wait for a second
  
  digitalWrite(LED1, LOW);  // turn the LED off by making the voltage LOW
  digitalWrite(LED2, LOW);  
  digitalWrite(LED3, LOW);  
  digitalWrite(LED4, LOW);  
  digitalWrite(LED5, LOW);  
  delay(1000);  // wait for a second
  
 digitalWrite(LED1, HIGH);
  digitalWrite(LED3, HIGH);
   digitalWrite(LED5, HIGH);
   delay(500);
 digitalWrite(LED1, LOW); 
 digitalWrite(LED3, LOW);   
 digitalWrite(LED5 , LOW);
 digitalWrite(LED2, HIGH);
 digitalWrite(LED4, HIGH);
 delay(500);
  digitalWrite(LED2, LOW);
   digitalWrite(LED4, LOW);
 delay(2000);
 }
