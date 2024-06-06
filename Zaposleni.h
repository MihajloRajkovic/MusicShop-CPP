#pragma once
#include <string>
#include <stdexcept>
using namespace std;
#pragma once
class Zaposleni
{
protected:
	int id;
	string ime;
	string prezime;
	int godine;
	int plata;
	static int id_count;

public:
	Zaposleni() {};
	Zaposleni(int id, string ime, string prezime, int godine, int plata) : id(id), ime(ime), prezime(prezime), godine(godine) {
		setPlata(plata);
	};
	~Zaposleni() {};
	int getId() const;
	void setId(int id);
	string getIme() const;
	void setIme(string ime);
	string getPrezime() const;
	void setPrezime(string prezime);
	int getGodine() const;
	void setGodine(int godine);
	int  getPlata() const;
	void setPlata(int plata);
	static int getCount();
	virtual double izracunajPlatu() const = 0;
	virtual void stampajZaposlenog() const = 0;
};

