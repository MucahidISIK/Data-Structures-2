/**
* @file b181210111_1A_Odev1
* @description Kovaları ve kovaların içinde oluşturulan topların kontrolünün yapılması.
* @course 1. Öğretim A Grubu
* @assignment 1. Ödev
* @date 03.11.2019
* @author Mücahid IŞIK mucahid.isik@ogr.sakarya.edu.tr , Hüseyin HIRA huseyin.hira@ogr.sakarya.edu.tr 
*/
#ifndef KOVAKONTROL_H
#define KOVAKONTROL_H
#include "Kova.h"

class KovaKontrol
{
	private:

	public:
		void KovaDegistir(int x , int y , Kova *Kovalar[]);
		void KovalariTerstenYerlestir(int KovaAdedi, Kova *Kovalar[]);
};

#endif