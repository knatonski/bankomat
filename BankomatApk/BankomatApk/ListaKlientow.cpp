#include "ListaKlientow.h"
#include "Klient.h"
#include <iostream>


ListaKlientow::ListaKlientow()
{
	this->Poczatek = nullptr;
	this->LiczbaKlientow = 0;

	Klient k1("Krystian", "Natonski", 0, 150000.89, 1234);
	Klient k2("Monika", "Szydlo", 0, 6985.72, 1234);
	Klient k3("Piotr", "Mormol", 0, 23540.00, 1234);

	this->Dodaj(k1);
	this->Dodaj(k2);
	this->Dodaj(k3);
}


ListaKlientow::~ListaKlientow()
{
}

void ListaKlientow::Dodaj(Klient&k)
{
	Klient* nowy = new Klient;
	nowy->setImie(k.getImie());
	nowy->setNazwisko(k.getNazwisko());
	nowy->setPIN(k.getPIN());
	nowy->setSaldo(k.getSaldo());
	nowy->setNr_Konta(LiczbaKlientow);

	Klient *temp = Poczatek;

	if (temp == nullptr) {
		Poczatek = nowy;
		LiczbaKlientow++;
		return;
	}

	Klient* start = nullptr;
	Klient* end = nullptr;

	while (temp != nullptr)
	{
		start = temp;
		end = temp->Nastepny;

		int PorownanieStart = nowy->porownaj(*start);
		if (PorownanieStart == 0)
		{
			cout << "Nie mozna, bo istnieje";
			return;
		}
		else
		{
			if (PorownanieStart == -1)
			{
				Klient* nastepny = temp;
				nowy->Nastepny = nastepny;
				Poczatek = nowy;
				LiczbaKlientow++;
				return;
			}
			else
			{
				if (end != nullptr)
				{
					int PorownanieEnd = nowy->porownaj(*end);
					if (PorownanieEnd == 0)
					{
						cout << "Nie mozna dodac, bo istnieje";
						return;
					}
					else
					{
						if (PorownanieStart == 1 && PorownanieEnd == -1)
						{
							nowy->Nastepny = end;
							temp->Nastepny = nowy;
							LiczbaKlientow++;
							return;
						}
					}
				}
				else
				{
					temp->Nastepny = nowy;
					LiczbaKlientow++;
					return;
				}
			}
		}
		temp = temp->Nastepny;
	}
}
Klient* ListaKlientow::Szukaj(int const nrkonta, int const PIN)
{
	Klient* szukany;
	szukany = nullptr;

	Klient* temp = Poczatek;
	while (temp)
	{
		if (nrkonta == temp->Nr_Konta && PIN == temp->PIN)
		{
			szukany = temp;
			break;
		}

		temp = temp->Nastepny;
	}
	return szukany;
}

void ListaKlientow::WypiszKlientow()
{
	Klient* temp = Poczatek;

	while (temp)
	{
		cout << *temp << endl;
		temp = temp->Nastepny;
	}
}