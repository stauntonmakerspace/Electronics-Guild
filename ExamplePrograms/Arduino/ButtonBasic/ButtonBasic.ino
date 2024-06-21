// ButtonBasic - ButtonBasic.ino
//
// Description:
// An Arduino sketch that turns on an LED when a button is pressed.
//
// Circuit:
// - A momentary push button (normally open) is connected to pin D3.
// - An LED is connected to pin D2 via a 330 Ω resistor.


// Pin Mapping
const uint8_t Button = 3;  // refer to pin D3 as Button
const uint8_t RedLED = 2;  // refer to pin D2 as RedLED


// Functions
void setup() {
   // Serial Monitor
   Serial.begin(9600);  // initialize serial bus
   while (!Serial);     // wait for serial connection

   // Pin configuration
   pinMode(Button, INPUT_PULLUP);  // set Button pin as an input and enable the microcontroller's internal pull-up resistor
   pinMode(RedLED, OUTPUT);        // set LED pin as an output
   digitalWrite(RedLED, LOW);      // initialize LED in off state
}


void loop() {
   readButton();  // read and act on change in button state
}


void readButton() {
   static uint8_t previousButtonState = HIGH;  // static used to retain last value
   uint8_t currentButtonState = digitalRead(Button);
   static unsigned long previousTimeButtonChanged = 0;  // static used to retain last value
   unsigned long currentTime = millis();
   if (currentTime - previousTimeButtonChanged > 10  // debounce time of 10 ms
      && currentButtonState != previousButtonState) {
      if (currentButtonState == LOW) {
         Serial.println("Button pressed.");
         digitalWrite(RedLED, HIGH);  // turn on LED
      } else {
         Serial.println("Button released.");
         digitalWrite(RedLED, LOW);  // turn off LED
      }
      previousTimeButtonChanged = currentTime;
      previousButtonState = currentButtonState;
   }
}
