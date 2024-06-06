#include "Menadzer.h"

void Menadzer::setGodineRada(int godineRada)
{
	this->godineRada = godineRada;
}

int Menadzer::getGodineRada() const
{
	return this->godineRada;
}

double Menadzer::izracunajPlatu() const
{
	return this->getPlata() + (this->getPlata() * 0.10);
}

void Menadzer::stampajZaposlenog() const
{
	cout << this->getId() << ". Menadzer: " << this->getIme() << " " << this->getPrezime() << " " << this->getGodine() << " plata: " << this->getPlata() << " sa " << this->getGodineRada() << " godina radnog staza" << endl;
}



