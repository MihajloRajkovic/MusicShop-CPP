#pragma once
#include <string>
#include <stdexcept>
using namespace std;
#pragma once

enum zanr { HipHop, Rok, Pop, Dzez, Pank, Elektronska };

class Ploca
{
protected:
	int id;
	string ime;
	zanr zanr;
	string izvodjac;
	int cena;
	int godinaIzdanja;
	static int id_count_ploca;

public:
	Ploca() { id_count_ploca++; };
	Ploca(string ime, enum zanr zanr, string izvodjac, int cena, int godinaIzdanja) : id(id_count_ploca++), ime(ime),
		zanr(zanr), izvodjac(izvodjac) {
		setCena(cena);
		setGodina(godinaIzdanja);
	};
	~Ploca() {};
	int const getId();
	void setId(int id);
	string const getIme();
	void setIme(string ime);
	enum zanr const getZanr();
	void setZanr(enum zanr zanr);
	string const getIzvodjac();
	void setIzvodjac(string izvodjac);
	int const getCena();
	void setCena(int cena);
	int const getGodina();
	void setGodina(int godina);
	static int getCount();


};

