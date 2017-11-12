//#define F_CPU 20000000    // AVR clock frequency in Hz, used by util/delay.h
#include <avr/io.h>
#include <util/delay.h>

int main() {
    DDRD |= (1<<1);        // set LED pin PD1 to output
    while (1) {
        PORTD |= (1<<1);   // drive PD1 high
        _delay_ms(100);    // delay 100 ms
        PORTD &= ~(1<<1);  // drive PD1 low
        _delay_ms(900);    // delay 900 ms
    }
}
