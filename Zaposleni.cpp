#include "Zaposleni.h"

int Zaposleni::id_count = 0;

int  Zaposleni::getId() const
{
    return this->id;
}

void Zaposleni::setId(int id)
{
    this->id = id;
}

string  Zaposleni::getIme() const
{
    return this->ime;
}

void Zaposleni::setIme(string ime)
{
    this->ime = ime;
}

string  Zaposleni::getPrezime() const
{
    return this->prezime;
}

void Zaposleni::setPrezime(string prezime)
{
    this->prezime = prezime;
}

int  Zaposleni::getGodine() const
{
    return this->godine;
}

void Zaposleni::setGodine(int godine)
{
    this->godine = godine;
}

int  Zaposleni::getPlata() const
{
    return this->plata;
}

void Zaposleni::setPlata(int plata)
{
    if (plata > 0) {
        this->plata = plata;
    }
    else {
        throw invalid_argument("Plata ne sme biti manja od 0");
    }
}

int Zaposleni::getCount()
{
    return id_count;
}
