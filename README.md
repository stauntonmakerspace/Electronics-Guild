# Electronics Guild Resources
This repository contains example programs and resources for the Electronics Guild of the [Staunton Makerspace](https://www.stauntonmakerspace.org).

## Example Programs

### Arduino Sketches

#### [BareMinimum](ExamplePrograms/Arduino/BareMinimum/)
A bare minimum Arduino sketch that resets all GPIO pins back to their default states.  Run this sketch once you are finished with a project to ensure that no GPIO pins are being driven when starting the next project.

#### [Blink](ExamplePrograms/Arduino/Blink/)
An Arduino sketch that blinks the on-board LED.

#### [BetterBlink](ExamplePrograms/Arduino/BetterBlink/)
An Arduino sketch that blinks the on-board LED without using the delay() function.

#### [ButtonBasic](ExamplePrograms/Arduino/ButtonBasic/)
An Arduino sketch sketch that turns on an LED when a button is pressed.

### CircuitPython Programs

#### [bare_minimum.py](ExamplePrograms/CircuitPython/bare_minimum.py)
A bare minimum CircuitPython program that resets all GPIO pins back to their default states.  Replace the contents of *code.py* with this program once you are finished with a project to ensure that no GPIO pins are being driven when starting the next project.

#### [blink.py](ExamplePrograms/CircuitPython/blink.py)
A CircuitPython program that blinks the on-board LED.

#### [hello.py](ExamplePrograms/CircuitPython/hello.py)
A CircuitPython program that prints a hello message to the serial console.

#### [wifi_basic.py](ExamplePrograms/CircuitPython/wifi_basic.py)
A CircuitPython program that connects a WiFi capable board to the WiFi network and pings Google.

#### [wifi_quotes.py](ExamplePrograms/CircuitPython/wifi_quotes.py)
A CircuitPython program that connects a WiFi capable board to the WiFi network and retrieves quotes from Adafruit.
