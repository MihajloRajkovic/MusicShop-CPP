#pragma once
#pragma once
#include "Zaposleni.h"
#include <iostream>
using namespace std;

class Menadzer : public Zaposleni
{
private:
	int godineRada;
public:
	~Menadzer() { id_count++; };
	Menadzer(int id, string ime, string prezime, int godine, int plata, int godineRada) : Zaposleni(id, ime, prezime, godine, plata), godineRada(godineRada) { id_count++; };
	void setGodineRada(int godineRada);
	int getGodineRada() const;
	double izracunajPlatu() const;
	void stampajZaposlenog() const;
};

