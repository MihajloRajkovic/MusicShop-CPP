#include "Prodavnica.h"

void Prodavnica::setImeProdavnice(string imeProdavnice)
{
    this->imeProdavnice = imeProdavnice;
}

string const Prodavnica::getImeProdavnice()
{
    return this->imeProdavnice;
}

void Prodavnica::setAdresaProdavnice(string adresaProdavnice)
{
    this->adresaProdavnice = adresaProdavnice;
}

string const Prodavnica::getAdresaProdavnice()
{
    return this->adresaProdavnice;
}

void Prodavnica::setBrojTelefona(string brojTelefona)
{
    this->brojTelefona = brojTelefona;
}

string const Prodavnica::getBrojTelefona()
{
    return this->brojTelefona;
}

void Prodavnica::setZaposleniSpisak(vector<Zaposleni*> zaposleniSpisak)
{
    this->zaposleniSpisak = zaposleniSpisak;
}

vector<Zaposleni*> const Prodavnica::getZaposleniSpisak()
{
    return this->zaposleniSpisak;
}

void Prodavnica::setPloceSpisak(vector<Ploca*> ploceSpisak)
{
    this->ploceSpisak = ploceSpisak;
}

vector<Ploca*> const Prodavnica::getPloceSpisak()
{
    return this->ploceSpisak;
}

void Prodavnica::dodajZaposlenog(Zaposleni& zaposleni)
{
    this->zaposleniSpisak.push_back(&zaposleni);
}

void Prodavnica::dodajPlocu(Ploca& ploca)
{
    this->ploceSpisak.push_back(&ploca);
}
