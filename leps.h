/*
 * Little Eagle Protocol (S is useless) library header file
 * by Centrix14 at 29.09.2022
 * Released into the public domain
 */

#ifndef LEPS_H
#define LEPS_H

#include "Arduino.h"

#define LEPS_HELLO 1

class Leps
{
 public:
	Leps();
	void init();
	void addData(unsigned char lenght, unsigned char data[]);
	void Leps::printData();
	unsigned char* Leps::extractData();

 private:
	unsigned char buffer[34];
};

#endif
