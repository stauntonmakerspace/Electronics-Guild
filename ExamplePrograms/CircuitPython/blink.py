# blink.py
# A CircuitPython program that blinks the on-board LED.

from time import sleep
import board
from digitalio import DigitalInOut, Direction

led = DigitalInOut(board.LED)     # refer to built-in LED as led
led.direction = Direction.OUTPUT  # set led pin as an output

while True:
    led.value = True   # turn on LED
    sleep(1)           # wait a second
    led.value = False  # turn off LED
    sleep(1)           # wait a second
