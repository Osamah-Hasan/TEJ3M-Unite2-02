/*
 Blink with variable

 Turn an LED on for one milesecond, then off for one milesecond , repeatedly.
 But the interval increases each time by 2 more milesecond.

 created on Feb 2025
 by Osamah Hasan
 */
 int blinkTime = 100; //set  variable to 100

 void setup() {
   //initialize digital pin LED_BUILTIN as an output.
   pinMode(LED_BUILTIN, OUTPUT);
 }
 
 void loop() {
   digitalWrite(LED_BUILTIN, HIGH); //turn the LED on(High is the voltage level)
   delay(blinkTime);               // wait for the length of the variable blinkTime
   digitalWrite(LED_BUILTIN, LOW); //turn the LED off(High is the voltage level)
   delay(blinkTime);               // wait for the length of the variable blinkTime
 
   blinkTime = blinkTime + 200;    //add 200 milesecond to the variable blinkTime
 }