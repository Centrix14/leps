/*
 * Little Eagle Protocol (S is useless) library header file
 * by Centrix14 at 29.09.2022
 * Released into the public domain
 */

#include "Arduino.h"
#include "leps.h"

Leps::Leps()
{
	init();
}

void Leps::init()
{
	for (int i = 0; i < 34; i++)
		buffer[i] = 0;
}

void Leps::addData(unsigned char lenght, unsigned char data[])
{
	buffer[0] = LEPS_HELLO;
	buffer[1] = lenght;
	
	for (int i = 0; i < lenght; i++)
		buffer[i + 2] = data[i];
}

void Leps::printData()
{
	for (int i = 2; i < buffer[1] + 2; i++)
		Serial.print(buffer[i]);
	Serial.println("");
}

unsigned char* Leps::extractData()
{
	return &buffer[2];
}
