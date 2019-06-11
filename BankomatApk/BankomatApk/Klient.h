#pragma once
#include <iostream>
#include "Osoba.h"

using namespace std;
class Klient : public Osoba
{
public:
	int Nr_Konta;
	double Saldo;
	int PIN;

public:
	Klient * Nastepny;

	Klient(const char* im = "", const char* naz = "", int = 0, double = 0.0, int = 0000);
	Klient(const Klient&wzor);
	const int  getNr_Konta();
	const double getSaldo();
	const int getPIN();
	void setSaldo(double const n);
	void setPIN(int const p);
	void setNr_Konta(int const nr);
	int porownaj(const Klient&wzorzec) const;

	friend ostream& operator << (ostream & wy, const Klient & p);
	friend istream& operator >> (istream & we, Klient & p);

};