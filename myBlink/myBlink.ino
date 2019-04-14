/*
  myBlink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman
  modified 16Jan18
  by Lee Macri
  
  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board

int GREEN = 7;
int AMBER = 8;
int RED = 13;

void setup() {
  // initialize digital pin GREEN as an output.
  pinMode(GREEN, OUTPUT);

  // initialise digital pin AMBER and RED as outputs.

  
}

// the loop function runs over and over again forever
void loop() {
  // Code for Green LED
  digitalWrite(GREEN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(GREEN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  // Code for Amber LED
  // Amber turns on for 1 second
  // Amber turns off for a half second

  // Code for Red LED
  // Red turns on for 5 second
  // Red turns off for a half second
  
}
