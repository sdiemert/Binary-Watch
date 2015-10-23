#include <Arduino.h>
#include <stdint.h>
#include "Time.h"

int MIN_1 = 11;
int MIN_2 = 2;
int MIN_4 = 3;
int MIN_8 = 4;
int MIN_16 = 5;
int MIN_32 = 6;
int HOUR_1 = 7;
int HOUR_2 = 8;
int HOUR_4 = 9;
int HOUR_8 = 10;

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
    
    // SET THE START TIME HERE!
    // hour, min, second, day, month, year
    setTime (1, 1, 1, 1, 1, 2015);
}

void loop(){
    current_time = now();
    showTime(&current_time);
    delay(1000);
}

void showTime(time_t * t){
    showHours(hour(*t));

    //-------------
    // MAKE IT SHOW MINUTES HERE
    //--------------
}

void showMinutes(int m){

    // YOUR CODE HERE!

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
