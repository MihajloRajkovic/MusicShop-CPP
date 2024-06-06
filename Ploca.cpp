#include "Ploca.h"

int Ploca::id_count_ploca = 0;


int const Ploca::getId()
{
    return this->id;
}

void Ploca::setId(int id)
{
    this->id = id;
}

string const Ploca::getIme()
{
    return this->ime;
}

void Ploca::setIme(string ime)
{
    this->ime = ime;
}

zanr const Ploca::getZanr()
{
    return this->zanr;
}

void Ploca::setZanr(enum zanr zanr)
{
    this->zanr = zanr;
}

string const Ploca::getIzvodjac()
{
    return this->izvodjac;
}

void Ploca::setIzvodjac(string izvodjac)
{
    this->izvodjac = izvodjac;
}

int const Ploca::getCena()
{
    return this->cena;
}

void Ploca::setCena(int cena)
{
    if (cena > 0) {
        this->cena = cena;
    }
    else {
        throw invalid_argument("Cena ne sme biti negativna!");
    }
}

int const Ploca::getGodina()
{
    return this->godinaIzdanja;
}

void Ploca::setGodina(int godina)
{
    if (godina > 0) {
        this->godinaIzdanja = godina;
    }
    else {
        throw invalid_argument("Godina ne sme biti negativan broj!");
    }
}

int Ploca::getCount()
{
    return id_count_ploca;
}
