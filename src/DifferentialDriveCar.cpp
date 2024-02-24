#include <Arduino.h>
#include "DifferentialDriveCar.h"

DifferentialDriveCar::DifferentialDriveCar(){
    Serial.println("DifferentialDriveCar Object Created");

}


void DifferentialDriveCar::init()
{
    Serial.println("Initializing DifferentialDriveCar");
    leftMotor.init();
    Serial.println("Left Motor Initialized");
    rightMotor.init();
    Serial.println("Right Motor Initialized");

}

void DifferentialDriveCar::right()
{
    leftMotor.setSpeed(speed);
    rightMotor.setSpeed(0);
}

void DifferentialDriveCar::left()
{
    leftMotor.setSpeed(0);
    rightMotor.setSpeed(speed);
}

void DifferentialDriveCar::forward()
{
    leftMotor.setSpeed(speed);
    rightMotor.setSpeed(speed);
}

void DifferentialDriveCar::uTurn()
{
    leftMotor.setSpeed(-128);
    rightMotor.setSpeed(128);
}

void DifferentialDriveCar::stop()
{
    leftMotor.setSpeed(0);
    rightMotor.setSpeed(0);
}





