#ifndef LFR_H
#define LFR_H
#include <Arduino.h>
#include <Motor.h>
class DifferentialDriveCar
{

private:
    uint16_t position = 0;
    uint16_t PD_val = 0;
    uint16_t PD_val_prev = 0;

public:
    DifferentialDriveCar();
  
    Motor leftMotor = Motor(9,11,30,28);
    Motor rightMotor = Motor(5,7,48,50);
    

    uint8_t speed = (int) 255 ;

    void init();
    void right();
    void left();
    void forward();
    void stop();
    void uTurn();


    //getters
    uint8_t getSpeed();



    //setters
    void setSpeed(uint8_t speed);
   

};

#endif