# avr-template
AVR template for Atmel projects

## atmega328p using Pololu AVR programmer v2.

This example uses fuses for 8MHz internal oscillator.

'''
DEVICE     = atmega328p
CLOCK      = 8000000
PROGRAMMER = -c stk500v2
OBJECTS    = main.o
FUSES      = -U lfuse:w:0xe2:m -U hfuse:w:0xda:m -U efuse:w:0x05:m
PORT       = $(shell pavr2cmd --prog-port)

...
AVRDUDE = avrdude $(PROGRAMMER) -P "$(PORT)" -p $(DEVICE)

'''

Check fuses http://www.engbedded.com/fusecalc/
This is important!!!




USBasp avrdude: error: could not find USB device with vid=0x16c0 pid=0x5dc
