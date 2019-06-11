#pragma once
#include<iostream>
using namespace std;
class Napis
{
private:
	char* m_pszNapis;
	int m_nDl;
public:
	Napis(const char* nap = "");
	~Napis();
	Napis(const Napis & wzor); //konstruktor kopiuj¹cy

public:
	const char* Zwroc() const;
	void Ustaw(const char* nowy_napis);
	void Wypisz() const;
	void Wpisz();
	int SprawdzNapis(const char* por_napis) const;
	Napis & operator = (const Napis& wzor);

	bool operator == (const Napis& wzor);

	friend ostream& operator << (ostream & wy, const Napis & p);
	friend istream& operator >> (istream & we, Napis & p);
};




