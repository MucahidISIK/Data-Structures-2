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
#include "KovaKontrol.h"
#include "Top.h"
#include <iostream>
#include <ctime>

using namespace std;
HANDLE renkDegistir = GetStdHandle(STD_OUTPUT_HANDLE);

int main()
{
	srand(time(NULL));
	
	int	kovaSayisi;
	
	cout << "Kova Sayisi Giriniz : ";
	cin >> kovaSayisi;

	Kova **Kovalar = new Kova*[kovaSayisi];
	Kova *Khelper;

	Top **Toplar = new Top*[kovaSayisi];
	Top *Thelper;

	
	for (int i = 0; i < kovaSayisi; i++)
	{
		Khelper =new Kova;
		Kovalar[i] = Khelper;

	}

	for (int i = 0; i < kovaSayisi; i++)
	{
		Thelper = new Top;
		Toplar[i] = Thelper;
	}

	for (int i = 0; i < kovaSayisi; i++)
	{
		cout << "KOVA " << i + 1 << endl;
		Kovalar[i]->kovaCiz();
		cout << "Kova Adresi : " << Kovalar[i] << endl;
		cout << "Top Adresi : " << "NULL" << endl;

		cout << endl;
		SetConsoleTextAttribute(renkDegistir, 15);
	}

	int Secenek;
	
	do
	{

		SetConsoleTextAttribute(renkDegistir, 15);
		cout << "[1] Toplari Yerlestir" << endl;
		cout << "[2] Toplari Yoket" << endl;
		cout << "[3] Kova Degistir" << endl;
		cout << "[4] Top Degistir" << endl;
		cout << "[5] Kovalari Tersten Yerlestir" << endl;
		cout << "[6] Toplari Tersten Yerlestir" << endl;
		cout << "[7] Cikis" << endl;
		cout << "Lutfen Seciminizi Giriniz : ";
		cin >> Secenek;

		if (Secenek == 1)
		{
			system("cls");
			for (int i = 0; i < kovaSayisi; i++)
			{

				cout << "KOVA " << i + 1 << endl;
				Kovalar[i]->kovaCizz();
				cout << "Kova Adresi : " << Kovalar[i] << endl;
				cout << "Top Adresi : " << Toplar[i] << endl;

				cout << endl;
				SetConsoleTextAttribute(renkDegistir, 15);
			}
		}
		else if (Secenek == 2)
		{
			system("cls");
			for (int i = 0; i < kovaSayisi; i++)
			{

				cout << "KOVA " << i + 1 << endl;
				Kovalar[i]->kovaCiz();
				cout << "Kova Adresi : " << Kovalar[i] << endl;
				cout << "Top Adresi : " << "NULL" << endl;

				cout << endl;
				SetConsoleTextAttribute(renkDegistir, 15);
			}
		}
		else if (Secenek == 3)
		{
			string tutucu1, tutucu2;
			int KovaBir;
			int KovaIki;
			cout << "Hangi Kova : "; cin >> KovaBir;
			cout << endl << "Hangi Kovayla : "; cin >> KovaIki;

			KovaKontrol KovaDegistirici;
			KovaDegistirici.KovaDegistir(KovaBir, KovaIki, Kovalar);
			system("cls");

			for (int i = 0; i < kovaSayisi; i++)
			{
				cout << "KOVA " << i + 1 << endl;
				Kovalar[i]->kovaCizz();
				cout << "Kova Adresi : " << Kovalar[i] << endl;
				cout << "Top Adresi : " << Toplar[i] << endl;

				cout << endl;
				SetConsoleTextAttribute(renkDegistir, 15);
			}
		}
		else if (Secenek == 4)
		{
			int top1,top2;
			cout << "1. Topu giriniz : " << endl;
			cin >> top1;
			cout << "2. Topu giriniz : " << endl;
			cin >> top2;
			
			system("cls");
			for (int i = 0; i < kovaSayisi; i++)
			{
				cout << "KOVA " << i + 1 << endl;
				Kovalar[i]->kovaCizz();
				cout << "Kova Adresi : " << Kovalar[i] << endl;
				cout << "Top Adresi : " << Toplar[i] << endl;

				cout << endl;
				SetConsoleTextAttribute(renkDegistir, 15);
			}
		}
		else if (Secenek == 5)
		{
			system("cls");
			KovaKontrol TersDizici;
			TersDizici.KovalariTerstenYerlestir(kovaSayisi, Kovalar);

			for (int i = 0; i < kovaSayisi; i++)
			{
				cout << "KOVA " << i + 1 << endl;
				Kovalar[i]->kovaCiz();
				cout << "Kova Adresi : " << Kovalar[i] << endl;
				cout << "Top Adresi : " << Toplar[i] << endl;

				cout << endl;
				SetConsoleTextAttribute(renkDegistir, 15);
			}
		}
		else if (Secenek == 6)
		{
			system("cls");
			for (int i = 0; i < kovaSayisi; i++)
			{
				cout << "KOVA " << i + 1 << endl;
				Kovalar[i]->kovaCizz();
				cout << "Kova Adresi : " << Kovalar[i] << endl;
				cout << "Top Adresi : " << Toplar[i] << endl;

				cout << endl;
				SetConsoleTextAttribute(renkDegistir, 15);
			}
		}
		else
		{
			if (Secenek != 7)
			{
				cout << "Lutfen 1 ila 7 arasinda bir rakam giriniz ! " << endl;
			}
		}

	} while (Secenek!=7);

	
	delete Kovalar, Khelper, Toplar, Thelper;
	system("cls");
	return 0;

}
