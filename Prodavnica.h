#pragma once
#include <vector>
#include <string>
#include "Zaposleni.h"
#include "Menadzer.h"
#include "Radnik.h"
#include "Ploca.h"
using namespace std;
#pragma once


class Prodavnica
{
private:
	string imeProdavnice;
	string adresaProdavnice;
	string brojTelefona;
	vector<Zaposleni*> zaposleniSpisak;
	vector<Ploca*> ploceSpisak;

public:
	Prodavnica() {};
	~Prodavnica() {};
	Prodavnica(string imeProdavnice, string adresaProdavnice, string brojTelefona, vector<Zaposleni*> zaposleniSpisak, vector<Ploca*> ploceSpisak) : imeProdavnice(imeProdavnice),
		adresaProdavnice(adresaProdavnice), brojTelefona(brojTelefona), zaposleniSpisak(zaposleniSpisak), ploceSpisak(ploceSpisak) {};
	void setImeProdavnice(string imeProdavnice);
	string const getImeProdavnice();
	void setAdresaProdavnice(string adresaProdavnice);
	string const getAdresaProdavnice();
	void setBrojTelefona(string brojTelefona);
	string const getBrojTelefona();
	void setZaposleniSpisak(vector<Zaposleni*> zaposleniSpisak);
	vector<Zaposleni*> const getZaposleniSpisak();
	void setPloceSpisak(vector<Ploca*> ploceSpisak);
	vector<Ploca*> const getPloceSpisak();
	void dodajZaposlenog(Zaposleni& zaposleni);
	void dodajPlocu(Ploca& ploca);
};

