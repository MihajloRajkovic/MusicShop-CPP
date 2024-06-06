#include "Ploca.h"
#include "Radnik.h"
#include "Menadzer.h"
#include "Zaposleni.h"
#include "Prodavnica.h"
#include "Util.h"
#include <vector>
#include <iostream>
using namespace std;

int main() {
	try {
		Zaposleni* z1 = new Radnik(0, "Pera", "Peric", 25, 85000, false, false);
		Zaposleni* z2 = new Radnik(1, "Laza", "Lazic", 22, 45000, true, true);
		Zaposleni* z3 = new Menadzer(2, "Masa", "Masic", 28, 120000, 4);
		vector<Ploca*> ploce;
		ploce = citajPloce();
		vector<Zaposleni*> zaposleni;
		zaposleni.push_back(z1);
		zaposleni.push_back(z2);
		zaposleni.push_back(z3);
		Prodavnica* prod = new Prodavnica("MusicHouse", "Stanoja Bunusevca 5", "0235424312", zaposleni, ploce);
		startCode(prod);
	}
	catch (const exception& e) {
		cout << "Desila se greska" << e.what() << endl;
	}

	return 0;
}