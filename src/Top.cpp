
#include "pch.h"
#include "Top.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <cstdlib>
#include <Windows.h>
#include <ctime>
#include <locale.h>

using namespace std;

void Top::topCiz()
{
	cout << "#  " << "-" << "  #" << endl;
}
void Top::topCizz()
{
	TopAdi = 'A' + rand() % 26;
	cout << "#  " << TopAdi << "  #" << endl;
}
void Top::topAdiAta()
{
	cout << TopAdi;
}
