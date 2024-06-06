#pragma once
#pragma once
#include "Zaposleni.h"
#include <iostream>
using namespace std;

class Radnik : public Zaposleni
{
private:
	bool praksa;
	bool student;

public:
	~Radnik() { id_count++; };
	Radnik(int id, string ime, string prezime, int godine, int plata, bool praksa, bool student) : Zaposleni(id, ime, prezime, godine, plata), praksa(praksa), student(student) { id_count++; };
	bool getPraksa() const;
	void setPraksa(bool praksa);
	bool getStudent() const;
	void setStudent(bool student);
	double izracunajPlatu() const;
	void stampajZaposlenog() const;
};

