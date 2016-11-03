#include "Arduino.h"
#include "ClassHelper.h"

Led::Led(int pin)
{
	_pin = pin;
}
void Led::Begin()
{
	pinMode(_pin, OUTPUT);
}

void Led::Turn_On()
{
	digitalWrite(_pin, HIGH);
}
void Led::Turn_Off()
{
	digitalWrite(_pin, LOW);
}
////////////////////////////////////////////////////////
UltrasonicSensor::UltrasonicSensor(int TrigPin, int EchoPin)
{
	_EchoPin = EchoPin;
	_TrigPin = TrigPin;
}
void UltrasonicSensor::EchoBegin()
{
	pinMode(_EchoPin, INPUT);
}
void UltrasonicSensor::TrigBegin()
{
	pinMode(_TrigPin, OUTPUT);
}



int UltrasonicSensor::Download_Value()
{
	long time, distance;

	digitalWrite(_TrigPin, LOW);
	delayMicroseconds(2);
	digitalWrite(_TrigPin, HIGH);
	delayMicroseconds(10);
	digitalWrite(_TrigPin, LOW);

	time = pulseIn(_EchoPin, HIGH);
	distance = time / 58;

	return distance;
}
////////////////////////////////////////////////////////////