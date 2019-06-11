#include "Bankomat.h"


Bankomat::Bankomat()
{
	this->zalogowany = nullptr;
	banknot200 = 1;
	banknot100 = 200;
	banknot50 = 400;
	banknot20 = 400;
	banknot10 = 400;

	kasa = (200 * banknot200) + (100 * banknot100) + (50 * banknot50) + (20 * banknot20) + (10 * banknot10);
}


Bankomat::~Bankomat()
{
	this->zalogowany = nullptr;
}

bool Bankomat::zaloguj(const int nr_konta, const int pin) {
	Klient* temp = lista.Szukaj(nr_konta, pin);
	if (temp != nullptr) {
		this->zalogowany = temp;
		return true;
	}
	else
		return false;
}

Klient* Bankomat::getZalogowany() {
	return this->zalogowany;
}

void Bankomat::wyloguj() {
	this->zalogowany = nullptr;
}

double Bankomat::saldo() {
	if (this->zalogowany == nullptr) {
		return 0;
	}
	else {
		return this->zalogowany->getSaldo();
	}
}
int* Bankomat::wyplac(double const kwota) {
	double wydaj = kwota;

	if (((int)wydaj) % 10 != 0) {
		cout << "Nie mozna wydawac monet" << endl;
		return new int{ 0 };
	}

	if (kwota > 4000) {
		cout << "Wyplata nie moze przekrczyc 4 tys." << endl;
		return new int{ 0 };
	}


	int* temp = new int[401];
	int i = 0;
	while (wydaj > 0) {
		if (wydaj >= 200 && banknot200>0)
		{
			temp[i++] = 200;
			wydaj -= 200;
			banknot200--;
			continue;
		}
		if (wydaj >= 100 && banknot100>0)
		{
			temp[i++] = 100;
			wydaj -= 100;
			banknot100--;
			continue;
		}
		if (wydaj >= 50 && banknot50>0)
		{
			temp[i++] = 50;
			wydaj -= 50;
			banknot50--;
			continue;
		}
		if (wydaj >= 20 && banknot20>0)
		{
			temp[i++] = 20;
			wydaj -= 20;
			banknot20--;
			continue;
		}
		if (wydaj >= 10 && banknot10>0)
		{
			temp[i++] = 10;
			wydaj -= 10;
			banknot10--;
			continue;
		}
	}
	temp[i++] = 0;

	if (i > 0) {
		this->zalogowany->setSaldo(this->zalogowany->getSaldo() - kwota);
	}

	return temp;
}
void Bankomat::zmienPIN(int const pin1, int const pin2) {
	if (pin1 == pin2) {
		this->zalogowany->setPIN(pin1);
		cout << endl << "Pin zmieniony" << endl;
	}

}


void Bankomat::doladujBankomat() {
	banknot200 += 100;
	banknot100 += 200;
	banknot50 += 400;
	banknot20 += 400;
	banknot10 += 400;
	kasa += (200 * banknot200) + (100 * banknot100) + (50 * banknot50) + (20 * banknot20) + (10 * banknot10);
}