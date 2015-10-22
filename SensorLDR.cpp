/*
 * SensorLDR
 * Version 0.1.0 Oct, 2015 - Created.
 * Copyright 2015 Diego de los Reyes
 *
 * Gets the amount of ambient light.
 */

#include "SensorLDR.h"

   
/** CONSTRUCTORES **/

/**
 * Construct.
 */
SensorLDR::SensorLDR()
{
}

/** PUBLIC METHODS **/

/**
 * Attach the given pin.
 * @param pin: pin where the LDR sensor is connected.
 */
void SensorLDR::attach(int pin)
{
	pinSensor = pin;
	pinMode(pinSensor, INPUT);
	this->turnOff();
}

/**
 * Gets the amount of ambient light.
 */
int SensorLDR::getLight()
{
	int light = -1;

	if(this->isActive()){
		light = analogRead(pinSensor);
	}

	return light;
}

/**
 * Turns on the sensor.
 */
void SensorLDR::turnOn()
{
	this->active = true;
}

/**
 * Turns off the sensor.
 */
void SensorLDR::turnOff()
{
	this->active = false;
}

/**
 * Returns true if the sensor is active and false in other case.
 */
bool SensorLDR::isActive()
{
	return this->active;
}
