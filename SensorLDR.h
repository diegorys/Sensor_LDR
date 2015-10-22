/*
 * SensorLDR
 * Version 0.1.0 Oct, 2015 - Created.
 * Copyright 2015 Diego de los Reyes
 *
 * Gets the amount of ambient light.
 */

#ifndef SensorLDR_h
#define SensorLDR_h
#define LIBRARY_VERSION	 0.1

#include "Arduino.h"

// Class SensorLDR
class SensorLDR {
 
	/** Public elements. **/
	public:
	
		/**
		 * Construct.
		 */
		SensorLDR();

		/**
		 * Attach the given pin.
		 * @param pin: pin where the LDR sensor is connected.
		 */
		void attach(int pin);
	
		/**
		 * Gets the amount of ambient light.
		 */
		int getLight();

		/**
		 * Turns on the sensor.
		 */
		void turnOn();

		/**
		 * Turns off the sensor.
		 */
		void turnOff();

		/**
		 * Returns true if the sensor is active and false in other case.
		 */
		bool isActive();

	private:

		/** Attributes **/

		//Attached pin.
		int pinSensor;

		//Active
		bool active;
};

#endif