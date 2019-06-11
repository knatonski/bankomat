#pragma once
#include <iostream>
#include "Klient.h"

using namespace std;

class ListaKlientow
{
public:
	Klient * Poczatek;
	int LiczbaKlientow;
public:
	ListaKlientow();
	~ListaKlientow();
	void Dodaj(Klient&k);
	Klient* Szukaj(int const nrkonta, int const PIN);
	void WypiszKlientow();

};
