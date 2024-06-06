#include "Radnik.h"

bool Radnik::getPraksa() const
{
    return this->praksa;
}

void Radnik::setPraksa(bool praksa)
{
    this->praksa = praksa;
}

bool Radnik::getStudent() const
{
    return this->student;
}

void Radnik::setStudent(bool student)
{
    this->student = student;
}

double Radnik::izracunajPlatu() const
{
    return this->getPlata() + (this->getPlata() * 0.25);
}

void Radnik::stampajZaposlenog() const
{
    cout << this->getId() << ". Radnik: " << this->getIme() << " " << this->getPrezime() << " " << this->getGodine() << " plata: " << this->getPlata() << " student - " << this->getStudent() << ", praksa - " << this->getPraksa() << endl;
}



