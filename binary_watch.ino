#include <Arduino.h>
#include <stdint.h>
#include "Time.h"

int MIN_1 = 10;
int MIN_2 = 11;
int MIN_4 = 2;
int MIN_8 = 3;
int MIN_16 = 4;
int MIN_32 = 5;

int HOUR_1 = 6;
int HOUR_2 = 7;
int HOUR_4 = 8;
int HOUR_8 = 9;

int minute_digits[6] = {MIN_1, MIN_2, MIN_4, MIN_8, MIN_16, MIN_32};
int hour_digits[4] = {HOUR_1, HOUR_2, HOUR_4, HOUR_8};

time_t current_time;

void setup(){

    pinMode(MIN_1, OUTPUT);
    pinMode(MIN_2, OUTPUT);
    pinMode(MIN_4, OUTPUT);
    pinMode(MIN_8, OUTPUT);
    pinMode(MIN_16, OUTPUT);
    pinMode(MIN_32, OUTPUT);

    pinMode(HOUR_1, OUTPUT);
    pinMode(HOUR_2, OUTPUT);
    pinMode(HOUR_4, OUTPUT);
    pinMode(HOUR_8, OUTPUT);

    //hour, min, second, day, month, year
    setTime (1, 1, 1, 1, 1, 2015);

}

void loop(){

    current_time = now();

    showTime(&current_time);

    delay(1000);

    Serial.print(minute(current_time));
    Serial.print(" ");
    Serial.print(hour(current_time));
    Serial.println();

}

void showTime(time_t * t){

    showMinutes(minute(*t));
    showHours(hour(*t));

}

void showMinutes(int m){

    for(int i = 0; i < 6; i++){

        if(m % 2 == 0){
            digitalWrite(minute_digits[i], LOW);
        }else{
            digitalWrite(minute_digits[i], HIGH);
        }

        m = m/2;

    }

}

void showHours(int h){

    for(int i = 0; i < 4; i++){

        if(h % 2 == 0){
            digitalWrite(hour_digits[i], LOW);
        }else{
            digitalWrite(hour_digits[i], HIGH);
        }

        h = h/2;

    }
}