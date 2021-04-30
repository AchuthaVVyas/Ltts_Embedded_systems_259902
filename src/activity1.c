#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

void init_pins()
{
    DDRB|=(1<<PB0);
    DDRD&=~(1<<PD0);
    PORTD|=(1<<PD0);
    DDRD&=~(1<<PD3);
    PORTD|=(1<<PD3);
}

void led_on ()
{
    PORTB|=(1<<PB0);
    _delay_ms(2000);
}

void led_off ()
{
     PORTB&=~(1<<PB0);
    _delay_ms(2000);
}
