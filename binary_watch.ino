#include <Arduino.h>
#include <HardwareSerial.h>
#include <stdint.h>

int MIN_1 = 1;
int MIN_2 = 0;
int MIN_4 = 2;
int MIN_8 = 3;
int MIN_16 = 4;
int MIN_32 = 5;

int HOUR_1 = 6;
int HOUR_2 = 7;
int HOUR_4 = 8;
int HOUR_8 = 9;

void setup(){

    pinMode(MIN_1, OUTPUT);
    pinMode(MIN_2, OUTPUT);
    pinMode(MIN_4, OUTPUT);
    pinMode(MIN_8, OUTPUT);
    pinMode(MIN_16, OUTPUT);
    pinMode(MIN_32, OUTPUT);

}

void loop(){

}