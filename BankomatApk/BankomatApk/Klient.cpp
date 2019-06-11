#include <iostream>
#include <string>
#include "Osoba.h"
#include "Klient.h"

using namespace std;

Klient::Klient(const char* im, const char* naz, int nr, double s, int p)
{
	this->Nastepny = nullptr;
	this->Imie = im;
	this->Nazwisko = naz;
	this->Nr_Konta = nr;
	this->Saldo = s;
	this->PIN = p;
}

Klient::Klient(const Klient&wzor)
{
	this->Imie = wzor.Imie;
	this->Nazwisko = wzor.Nazwisko;
	this->Nr_Konta = wzor.Nr_Konta;
	this->Saldo = wzor.Saldo;
	this->PIN = wzor.PIN;
	this->Nastepny = wzor.Nastepny;
}

const int Klient::getNr_Konta()
{
	return this->Nr_Konta;
}
const double Klient::getSaldo()
{
	return this->Saldo;
}
const int Klient::getPIN()
{
	return this->PIN;
}
void Klient::setNr_Konta(int const nr)
{
	Nr_Konta = nr;
}
void Klient::setSaldo(double const n)
{
	Saldo = n;
}
void Klient::setPIN(int const p)
{
	this->PIN = p;
}

int Klient::porownaj(const Klient&wzorzec) const
{
	Osoba* o1 = new Osoba(wzorzec.getImie(), wzorzec.getNazwisko());
	if (this->Osoba::Porownaj(*o1) == 0)
	{
		if (this->Nr_Konta == wzorzec.Nr_Konta)
		{
			return 0;
		}
		else if (this->Nr_Konta > wzorzec.Nr_Konta)
		{
			return -1;
		}
		else return 1;
	}
	else
	{
		return this->Osoba::Porownaj(*o1);
	}
}

ostream& operator << (ostream & wy, const Klient & p)
{

	wy << p.Imie << " ";
	wy << p.Nazwisko << " ";
	wy << p.Nr_Konta << " ";
	wy << p.Saldo;
	return wy;

}
istream& operator >> (istream & we, Klient & p) {
	return we;
}