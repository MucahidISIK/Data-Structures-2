/**
* @file b181210111_1A_Odev1
* @description Kovaları ve kovaların içinde oluşturulan topların kontrolünün yapılması.
* @course 1. Öğretim A Grubu
* @assignment 1. Ödev
* @date 03.11.2019
* @author Mücahid IŞIK mucahid.isik@ogr.sakarya.edu.tr , Hüseyin HIRA huseyin.hira@ogr.sakarya.edu.tr 
*/
#include "pch.h"
#include "Kova.h"
#include "Top.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <cstdlib>
#include <Windows.h>
#include <ctime>
#include <locale.h>

using namespace std;
Top toplar;

Kova::Kova()
{
	this->renk = rand() % 13 + 1;
}
void Kova::kovaCiz()
{
	
	SetConsoleTextAttribute(renkDondur, renk);
	cout << "  .|.  " << endl;
	cout << " .   . " << endl;
	cout << ".     ." << endl;
	cout << "#     #" << endl;
	toplar.topCiz();
	cout << "#     #" << endl;
	cout << "#######" << endl;
		
}
void Kova::kovaCizz()
{
	SetConsoleTextAttribute(renkDondur, renk);
	cout << "  .|.  " << endl;
	cout << " .   . " << endl;
	cout << ".     ." << endl;
	cout << "#     #" << endl;
	toplar.topCizz();
	cout << "#     #" << endl;
	cout << "#######" << endl;
}