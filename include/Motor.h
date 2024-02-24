#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>
class Motor {

private:
   
    uint8_t RPWM;
    uint8_t LPWM;
    uint8_t REN;
    uint8_t LEN;
    uint8_t speed = 0;


public:
    // constructor
    Motor(uint8_t RPWM ,uint8_t LPWM ,uint8_t REN, uint8_t LEN);
    void init();
    
    void setSpeed(int speed);
    uint8_t getSpeed();
    uint8_t* getSpeedPointer();

};

#endif

