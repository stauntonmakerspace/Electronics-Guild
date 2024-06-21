// BetterBlink - BetterBlink.ino
// An Arduino sketch that blinks the on-board LED without using the delay()
// function.

const unsigned long BlinkPeriod = 2000;  // blinking period in milliseconds

void setup() {
   pinMode(LED_BUILTIN, OUTPUT);  // set LED_BUILTIN pin as an output
}

void loop() {
   static unsigned long previousBlinkTime = 0;               // capture initial previous time
   unsigned long currentTime = millis();                     // capture current time
   if (currentTime - previousBlinkTime >= BlinkPeriod/2) {   // run every half blinking period (1 s)
      digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));  // toggle on/off LED
      previousBlinkTime = currentTime;                       // save previous time
   }
}
