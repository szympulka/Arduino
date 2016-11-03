#include "ClassHelper.h"

Led Red(4);
Led Green(3);
UltrasonicSensor Sensor(12,11); //trig,echo


void setup()
{
	Green.Begin();
	Red.Begin();
	Sensor.EchoBegin();
	Sensor.TrigBegin();


}

void loop()
{
	if (Sensor.Download_Value() <5)
	{
		Red.Turn_Off();
		Green.Turn_Off();
	}
	else if (Sensor.Download_Value() >5)
	{
		Red.Turn_On();
		Green.Turn_On();
	}
}
