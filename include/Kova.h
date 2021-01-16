/**
* @file b181210111_1A_Odev1
* @description Kovaları ve kovaların içinde oluşturulan topların kontrolünün yapılması.
* @course 1. Öğretim A Grubu
* @assignment 1. Ödev
* @date 03.11.2019
* @author Mücahid IŞIK mucahid.isik@ogr.sakarya.edu.tr , Hüseyin HIRA huseyin.hira@ogr.sakarya.edu.tr 
*/
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