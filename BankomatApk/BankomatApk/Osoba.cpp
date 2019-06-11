#include <iostream>
#include <string>
#include "Osoba.h"

using namespace std;

Osoba::Osoba(const char* im, const char* naz)
{
	Imie = im;
	Nazwisko = naz;
}

Osoba::~Osoba()
{

}

Osoba::Osoba(const Osoba&wzor)
{
	Imie = wzor.Imie;
	Nazwisko = wzor.Nazwisko;
}

const char* Osoba::getImie() const
{
	return Imie.Zwroc();
}
const char* Osoba::getNazwisko() const
{
	return Nazwisko.Zwroc();
}
void Osoba::setImie(const char* napis)
{
	Imie.Ustaw(napis);
}
void Osoba::setNazwisko(const char* napis)
{
	Nazwisko.Ustaw(napis);
}
int Osoba::Porownaj(const Osoba&wzorzec) const
{
	if (Nazwisko.SprawdzNapis(wzorzec.Nazwisko.Zwroc()) == 0)
	{
		return Imie.SprawdzNapis(wzorzec.Imie.Zwroc());
	}
	else if (Nazwisko.SprawdzNapis(wzorzec.Nazwisko.Zwroc()) == -1)
		return -1;
	else return 1;
}

ostream &operator<<(ostream &wy, const Osoba &o)
{
	return wy << o.Imie << " " << o.Nazwisko;
}
istream &operator>>(istream &we, Osoba &o)
{
	cout << "Podaj Imie: " << endl;
	we >> o.Imie;
	cout << "Podaj Naziwisko: " << endl;
	we >> o.Nazwisko;

	return we;
}

Osoba & Osoba::operator = (const Osoba & wzor)
{
	this->Imie = wzor.Imie;
	this->Nazwisko = wzor.Nazwisko;

	return *this;

}
bool Osoba::operator == (const Osoba & wzor) const
{
	if (this->Porownaj(wzor) == 0)
		return true;
	else
		return false;
}