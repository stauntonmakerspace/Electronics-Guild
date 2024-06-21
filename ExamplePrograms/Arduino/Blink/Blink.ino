// Blink - Blink.ino
// An Arduino sketch that blinks the on-board LED.

void setup() {
   pinMode(LED_BUILTIN, OUTPUT);  // set LED_BUILTIN pin as an output
}

void loop() {
   digitalWrite(LED_BUILTIN, HIGH);  // turn on LED
   delay(1000);                      // wait a second
   digitalWrite(LED_BUILTIN, LOW);   // turn off LED
   delay(1000);                      // wait a second
}
