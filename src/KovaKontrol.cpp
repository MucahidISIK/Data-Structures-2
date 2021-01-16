
#include "pch.h"
#include "KovaKontrol.h"
#include "Kova.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <cstdlib>
#include <Windows.h>
#include <ctime>
#include <locale.h>

using namespace std;

void KovaKontrol::KovaDegistir(int x, int y, Kova *Kovalar[])
{
	Kova *tutucu;
	tutucu = Kovalar[x - 1];
	Kovalar[x - 1] = Kovalar[y - 1];
	Kovalar[y - 1] = tutucu;
}

void KovaKontrol::KovalariTerstenYerlestir(int KovaAdedi, Kova *Kovalar[])
{
	for (int i = 0; i < KovaAdedi; i++)
	{
		Kova *tutucu;
		tutucu = Kovalar[KovaAdedi - 1];
		Kovalar[KovaAdedi - 1] = Kovalar[i];
		Kovalar[i] = tutucu;
		KovaAdedi--;
	}
}

