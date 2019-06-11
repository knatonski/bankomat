#pragma once
#include "Klient.h"
#include "ListaKlientow.h"

class Bankomat
{
private:
	ListaKlientow lista;
	Klient* zalogowany;
	unsigned int banknot10;
	unsigned int banknot20;
	unsigned int banknot50;
	unsigned int banknot100;
	unsigned int banknot200;
	unsigned int kasa;

public:
	Bankomat();
	~Bankomat();

	bool zaloguj(const int nr_konta, const int pin);
	Klient* getZalogowany();
	void wyloguj();

	double saldo();
	int* wyplac(double const kwota);
	void zmienPIN(int const pin1, int const pin2);

	void doladujBankomat();

};

