#include "Napis.h"
#include<iostream>
#include<string.h>
using namespace std;


Napis::Napis(const char* nap)
{

	if (nap != NULL || nap != "")
	{
		m_nDl = strlen(nap) + 1;
		m_pszNapis = new char[m_nDl];
		strcpy(m_pszNapis, nap);
	}
	//cout << "\nKonstuktor domyslny\n";
}


Napis::~Napis()
{
	if (m_pszNapis != NULL || m_pszNapis != "") {
		m_pszNapis = NULL;
		delete[] m_pszNapis;
	}

}

//Konstruktor kopiuj¹cy - kopiowanie g³êbokie
Napis::Napis(const Napis& wzor) {
	if (wzor.m_pszNapis != NULL || wzor.m_pszNapis != "")
	{
		m_nDl = strlen(wzor.m_pszNapis) + 1;
		m_pszNapis = new char[m_nDl];
		strcpy(m_pszNapis, wzor.m_pszNapis);
	}
	else {
		m_pszNapis = "";
		m_nDl = 0;
	}
	//cout << "\nKonstuktor kopiujacy\n";
}


const char* Napis::Zwroc() const
{
	return this->m_pszNapis;
}


void Napis::Ustaw(const char* nowy_napis)
{
	if (m_pszNapis != NULL) {
		m_pszNapis = NULL;
		delete[] m_pszNapis;
	}
	m_nDl = strlen(nowy_napis) + 1;
	m_pszNapis = new char[m_nDl];
	strcpy(m_pszNapis, nowy_napis);
}


void Napis::Wypisz() const
{
	cout << m_pszNapis;
}


void Napis::Wpisz()
{
	cin >> m_pszNapis;
}


int Napis::SprawdzNapis(const char* por_napis) const
{
	string str1 = m_pszNapis;
	string str2 = por_napis;
	return str1.compare(str2);
}

// Kopiuj¹cy operator przypisania.
Napis& Napis::operator = (const Napis& wzor)
{
	if ((this != &wzor) && (wzor.m_pszNapis != NULL))
	{
		if (m_pszNapis != NULL)
		{
			m_pszNapis = NULL;
			delete[] m_pszNapis;
		}

		m_nDl = strlen(wzor.m_pszNapis + 1);
		m_pszNapis = new char[m_nDl];
		strcpy(m_pszNapis, wzor.m_pszNapis);
	}
	return *this;
}

bool Napis::operator == (const Napis& wzor) {
	string str1 = m_pszNapis;
	string str2 = wzor.m_pszNapis;
	int comp = str1.compare(str2);

	return comp == 0;

}

ostream& operator << (ostream & wy, const Napis & p) {

	return wy << p.m_pszNapis;
}
istream& operator >> (istream & we, Napis & p) {

	if (p.m_pszNapis != NULL || p.m_pszNapis != "")
	{
		p.m_pszNapis = NULL;
		delete[] p.m_pszNapis;
		p.m_nDl = 0;
	}
	//cout << "\nWprowadzam\n";
	p.m_pszNapis = new char;
	we >> p.m_pszNapis;
	p.m_nDl = strlen(p.m_pszNapis) + 1;

	return we;
}

