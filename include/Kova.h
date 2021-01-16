
#ifndef KOVA_H
#define KOVA_H

#include "pch.h"
#include <cstdlib>
#include <Windows.h>
#include <string>
#include <iostream>
#include <ctime>
#include <locale.h>

class Kova
{
private:
	int renk = 0;
public:
	HANDLE renkDondur = GetStdHandle(STD_OUTPUT_HANDLE);
	Kova();
	void kovaCiz();
	void kovaCizz();
};

#endif
