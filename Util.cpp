#include "Util.h"

// Metoda koja pokrece meni sa izborom 
// U meniju svaki broj predstavlja jednu metodu koja radi sa prodavnicom
void startCode(Prodavnica* prodavnica) {
	int izbor = 0;
	printConsole();
	cout << "Odaberite sta zelite: ";
	cin >> izbor;
	system("cls");
	while (izbor != 0) {
		cout << endl;
		switch (izbor) {
		case 0:
			exit(1);
		case 1:
			jedan(prodavnica);
			break;
		case 2:
			dva(prodavnica);
			break;
		case 3:
			tri(prodavnica);
			break;
		case 4:
			cetiri(prodavnica);
			break;
		case 5:
			pet(prodavnica);
			break;
		case 6:
			sest(prodavnica);
			break;
		case 7:
			sedam(prodavnica);
			break;
		default:
			cout << "Niste lepo uneli broj!" << endl;
		}
		cout << endl;
		printConsole();
		cout << "Odaberite sta zelite: ";
		cin >> izbor;
		system("cls");
	}


}

// Metoda koja printuje meni sa izborima
void printConsole() {
	cout << "1 - vidite sve podatke o prodavnici" << endl;
	cout << "2 - vidite spisak svih ploca dostupnih u prodavnici" << endl;
	cout << "3 - vidite spisak svih zaposlenih u prodavnici" << endl;
	cout << "4 - dodajte novog zaposlenih" << endl;
	cout << "5 - obrisite zaposlenog" << endl;
	cout << "6 - dodajte novu plocu" << endl;
	cout << "7 - obrisite plocu" << endl;
	cout << "0 - zatvori aplikaciju" << endl;
}

// Metoda koja vraca ime prodavnice, broj telefona kao i adresu prodavnice
void jedan(Prodavnica* prodavnica) {
	cout << "Ime prodavnice: " << prodavnica->getImeProdavnice() << endl;
	cout << "Broj telefona: " << prodavnica->getBrojTelefona() << endl;
	cout << "Adresa prodavnice: " << prodavnica->getAdresaProdavnice() << endl;
}

// Metoda koja stampa sve ploce u prodavnici
void dva(Prodavnica* prodavnica) {
	vector<Ploca*> ploce = prodavnica->getPloceSpisak();
	cout << "Ploca u prodavnici su: " << endl;
	int count = 0;
	for (vector<Ploca*>::iterator ploceIterator = ploce.begin(); ploceIterator != ploce.end(); ++ploceIterator) {
		Ploca* p1 = *ploceIterator;
		cout << "Ploca " << p1->getId() << " - Ime: " << p1->getIme() << ", izvodjac: " << p1->getIzvodjac() << ", cena: " << p1->getCena() << endl;
	}
}

// Metoda koja stampa sve zaposlene u prodavnici
void tri(Prodavnica* prodavnica) {
	vector<Zaposleni*> zaposleni = prodavnica->getZaposleniSpisak();
	cout << "Svi zaposleni u prodavnici su: " << endl;
	for (vector<Zaposleni*>::iterator zaposleniIterator = zaposleni.begin(); zaposleniIterator != zaposleni.end(); ++zaposleniIterator) {
		Zaposleni* z1 = *zaposleniIterator;
		z1->stampajZaposlenog();
	}
}

// Metoda za unos dodatnog zaposlenog u prodavnicu
void cetiri(Prodavnica* prodavnica) {
	int unos = 0;
	string ime, prezime;
	int godine, plata, godineStaza;
	bool student, praksa;
	cout << "Unesite 1 za menadzera a 2 za radnika" << endl;
	cin >> unos;
	if (unos == 1) {
		cout << "Unesite ime i prezime: " << endl;
		cin >> ime;
		cin >> prezime;
		cout << "Unesite godine zaposlenog" << endl;
		cin >> godine;
		cout << "Unesite platu zaposlenog" << endl;
		cin >> plata;
		cout << "Unesite godine staza menadzera" << endl;
		cin >> godineStaza;
		Zaposleni* menadzer = new Menadzer((Zaposleni::getCount()), ime, prezime, godine, plata, godineStaza);
		prodavnica->dodajZaposlenog(*menadzer);
		cout << "Uspesno ste napravili menadzera" << endl;
	}
	else if (unos == 2) {
		cout << "Unesite ime i prezime: " << endl;
		cin >> ime;
		cin >> prezime;
		cout << "Unesite godine zaposlenog" << endl;
		cin >> godine;
		cout << "Unesite platu zaposlenog" << endl;
		cin >> plata;
		cout << "Unesite da li je radnik na praksi" << endl;
		cin >> praksa;
		cout << "Unesite da li je radnik student" << endl;
		cin >> student;
		Zaposleni* radnik = new Radnik((Zaposleni::getCount()), ime, prezime, godine, plata, praksa, student);
		prodavnica->dodajZaposlenog(*radnik);
		cout << "Uspesno ste napravili radnika" << endl;
	}
	else {
		cout << "Los unos!" << endl;
	}
}


// Metoda za brisanje zaposlenog iz prodavnice
void pet(Prodavnica* prodavnica) {
	tri(prodavnica);
	int unos = 0;
	cout << "Odaberite zaposlenog koga zelite da obrisete: " << endl;
	cin >> unos;
	int count = 0, obrisano = 0;
	vector<Zaposleni*> zaposleni = prodavnica->getZaposleniSpisak();
	auto it = zaposleni.begin();
	while (it != zaposleni.end()) {
		Zaposleni* z1 = *it;
		if (unos == z1->getId()) {
			it = zaposleni.erase(it);
			obrisano = 1;
		}
		else {
			++it;
		}
	}
	if (obrisano == 1) {
		prodavnica->setZaposleniSpisak(zaposleni);
		cout << "Uspesno ste obrisali zaposlenog!" << endl;
	}
	else {
		cout << "Zaposleni sa tim indexom je postoji" << endl;
	}
}

// Metoda za unos nove ploce u prodavnicu
void sest(Prodavnica* prodavnica) {
	string ime, izvodjac;
	int godina, cena, unos;
	zanr zanr;
	bool provera = false;
	cout << "Unesite ime ploce: " << endl;
	cin.ignore();
	getline(cin, ime);
	cout << "Unesite izvodjaca ploce: " << endl;
	getline(cin, izvodjac);
	cout << "Unesite godine izdanja: " << endl;
	cin >> godina;
	cout << "Unesite cenu ploce: " << endl;
	cin >> cena;
	cout << "Odaberite zanr unosom broja" << endl;
	cout << " 1 - HipHop \n 2 - Rok \n 3 - Pop \n 4 - Dzez\n 5 - Pank \n 6 - Elektronska" << endl;
	cin >> unos;
	while (!provera) {
		switch (unos) {
		case 1:
			zanr = HipHop;
			provera = true;
			break;
		case 2:
			zanr = Rok;
			provera = true;
			break;
		case 3:
			zanr = Pop;
			provera = true;
			break;
		case 4:
			zanr = Dzez;
			provera = true;
			break;
		case 5:
			zanr = Pank;
			provera = true;
			break;
		case 6:
			zanr = Elektronska;
			provera = true;
			break;
		default:
			cout << "Unos nije validan unesite opet!" << endl;
			cin >> unos;
			break;
		}
	}
	Ploca* p1 = new Ploca(ime, zanr, izvodjac, cena, godina);
	prodavnica->dodajPlocu(*p1);
	upisiPlocu(*p1);
	cout << "Uspesno ste dodali plocu u prodavnicu!" << endl;
}

// Metoda za brisanje odabrane ploce iz prodavnice
void sedam(Prodavnica* prodavnica) {
	dva(prodavnica);
	int unos = 0;
	cout << "Odaberite plocu koju zelite da obrisete: " << endl;
	cin >> unos;
	int count = 0, obrisano = 0;
	vector<Ploca*> ploce = prodavnica->getPloceSpisak();
	auto it = ploce.begin();
	while (it != ploce.end()) {
		Ploca* p1 = *it;
		if (unos == p1->getId()) {
			it = ploce.erase(it);
			obrisano = 1;
		}
		else {
			++it;
		}
	}
	if (obrisano == 1) {
		prodavnica->setPloceSpisak(ploce);

		cout << "Uspesno ste obrisali plocu!" << endl;
		vector<Ploca*> ploce = prodavnica->getPloceSpisak();
		ofstream file("ploce.txt", ios::out | ios::trunc);
		for (vector<Ploca*>::iterator ploceIterator = ploce.begin(); ploceIterator != ploce.end(); ++ploceIterator) {
			Ploca* p1 = *ploceIterator;
			upisiPlocu(*p1);
		}
	}
	else {
		cout << "Ploca sa tim indexom ne postoji!" << endl;
	}
}

// Metoda za upis ploce u file "ploce.txt"
void upisiPlocu(Ploca& ploca) {
	ofstream file("ploce.txt", ios::app);
	if (file.is_open()) {
		file << ploca.getIme() << "~";
		file << ploca.getZanr() << "~";
		file << ploca.getIzvodjac() << "~";
		file << ploca.getCena() << "~";
		file << ploca.getGodina() << "\n";
		file.close();
	}
}

// Metoda za citanje svih ploca iz fajla "ploce.txt"
vector<Ploca*> citajPloce() {
	vector<Ploca*> ploce;
	ifstream file("ploce.txt");
	if (file.is_open()) {
		string line;
		while (getline(file, line)) {
			stringstream ss(line);
			string  ime, zanrStr, izvodjac;
			string cena, godina;

			getline(ss, ime, '~');
			getline(ss, zanrStr, '~');
			getline(ss, izvodjac, '~');
			getline(ss, cena, '~');
			getline(ss, godina, '~');
			ss.ignore();

			zanr plocaZanr;
			if (zanrStr == "0") {
				plocaZanr = HipHop;
			}
			else if (zanrStr == "1") {
				plocaZanr = Rok;
			}
			else if (zanrStr == "2") {
				plocaZanr = Pop;
			}
			else if (zanrStr == "3") {
				plocaZanr = Dzez;
			}
			else if (zanrStr == "4") {
				plocaZanr = Pank;
			}
			else if (zanrStr == "5") {
				plocaZanr = Elektronska;
			}
			else {
				continue;
			}
			Ploca* ploca = new Ploca(ime, plocaZanr, izvodjac, stoi(cena), stoi(godina));
			ploce.push_back(ploca);
		}
		file.close();
	}
	return ploce;
}

