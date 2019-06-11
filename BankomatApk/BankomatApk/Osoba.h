#pragma once
#include <iostream>
#include "Napis.h"

using namespace std;
class Osoba
{
public:
	Napis Imie;
	Napis Nazwisko;

public:
	Osoba(const char* = "", const char* = "");
	~Osoba();
	Osoba(const Osoba&wzor);

	const char* getImie() const;
	const char* getNazwisko() const;
	void setImie(const char* napis);
	void setNazwisko(const char* napis);
	int Porownaj(const Osoba&wzorzec) const;

	friend ostream &operator<<(ostream &wy, const Osoba &o);
	friend istream &operator>>(istream &we, Osoba &o);

	Osoba & operator = (const Osoba & wzor);
	bool operator == (const Osoba & wzor) const;
};