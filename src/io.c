#include "../include/io.h"





void init_pins() {

    //set led pins to output
    LED1_DDR |= _BV(LED1_PIN);
    LED2_DDR |= _BV(LED2_PIN);

    RELAY_DDR |= _BV(RELAY_PIN);
}


void set_led1() {

    LED1_PORT |= _BV(LED1_PIN);
}

void clear_led1() {

    LED1_PORT &= ~_BV(LED1_PIN);
}


void set_led2() {

    LED2_PORT |= _BV(LED2_PIN);
}

void clear_led2() {

    LED2_PORT |= _BV(LED2_PIN);
}