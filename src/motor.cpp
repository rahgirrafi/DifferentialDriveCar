#include <Arduino.h>
#include "Motor.h"

//This code is for BTS7960 motor driver

Motor::Motor(uint8_t RPWM ,uint8_t LPWM ,uint8_t REN, uint8_t LEN)
{
    this->RPWM = RPWM; 
    this->LPWM = LPWM;
    this->REN = REN;
    this->LEN = LEN;
}

void Motor::init()
{
    pinMode(RPWM, OUTPUT);
    pinMode(LPWM, OUTPUT);
    pinMode(REN, OUTPUT);
    pinMode(LEN, OUTPUT);
    digitalWrite(REN,HIGH);
    digitalWrite(LEN,HIGH);
    delay(100);
}

void Motor::setSpeed(int speed) {
    if(speed>0){
        analogWrite(RPWM, 0);
        analogWrite(LPWM, speed);
    }
    else if(speed<0){
        Serial.println("Speed is negative");
        analogWrite(RPWM, abs(speed));
        analogWrite(LPWM, 0);
    }
    else{
        analogWrite(RPWM, 255);
        analogWrite(LPWM, 255);
    }
}

uint8_t Motor::getSpeed() {
    return speed;
}

uint8_t* Motor::getSpeedPointer() {
    return &speed;
}