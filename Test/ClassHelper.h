#ifndef ClassHelper
#define ClassHelper

class Led
{
public:
	Led(int pin);

	void Begin();
	void Turn_On();
	void Turn_Off();
private:
	int _pin;

};

class UltrasonicSensor
{
	int _TrigPin;
	int _EchoPin;
public:
	UltrasonicSensor(int TrigPin, int EchoPin);
	void TrigBegin();
	void EchoBegin();
	int Download_Value();


};
#endif
