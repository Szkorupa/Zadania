#include <iostream>
#include <math.h>
using namespace std;

class Medium {
public:
	virtual void wypozycz() = 0;
	virtual void dodaj() = 0;
};
class Ksiazki : public Medium {

public:
	string tablicaksiazki[3] = { "Maly ksiaze", "Kordian", "Minecraft"};
	void wypozycz() {
		cout << "Ksiazka zostala wypozyczona";
	}
	void dodaj() {
		cout << "dodano ksiazke ";
	}
};

class Filmy : public Medium {

public:
	string tablicafilmy[3] = { "MIB", "Pila 3D", "Na wspolnej" };
	void wypozycz() {
		cout << "Film zostal wypozyczony";
	}
	void dodaj() {
		cout << "dodano film ";
	}
};

class Muzyka : public Medium {

public:
	string tablicamuzyka[3] = { "Tryb samolotowy", "humble", "Tak to lecialo" };
	void wypozycz() {
		cout << "muzyka zostala wypozyczona";
	}
	void dodaj() {
		cout << "dodano muzyke ";
	}
};




int main()
{
	
	Medium* wskaznik;
	Ksiazki ksiazka;
	Filmy film;
	Muzyka muzyka;
	string bomba;
	int menu;
	int menu2;
	int menu3;
	cout << "1-ksiazka, 2-film, 3-muzyka "; cin >> menu;

	if (menu == 1) {
		cout << "1 - ksiazka wypozycz, 2 - ksiazka dodaj "; cin >> menu2;
		if (menu2 == 1) {
			cout << "1-Maly ksiaze, 2-Kordian, 3-Minecraft "; cin >> menu3;
			if (menu3 == 1) {
				cout << "wypozyczono Maly ksiaze - ";
				ksiazka.wypozycz();
			}
			if (menu3 == 2) {
				cout << "wypozyczono Kordian - ";
				ksiazka.wypozycz();
			}
			if (menu3 == 3) {
				cout << "wypozyczono Minecraft - ";
				ksiazka.wypozycz();
			}
		}
		else if (menu2 == 2){
			cout << "dodaj ksiazke: "; cin >> bomba;
			ksiazka.dodaj(); cout << bomba;
		}
	}
	else if (menu == 2) {
		cout << "1 - film wypozycz, 2 - film dodaj "; cin >> menu2;
		if (menu2 == 1) {
			cout << "1-MIB, 2-Pila 3D, 3-Na wspolnej "; cin >> menu3;
			if (menu3 == 1) {
				cout << "wypozyczono MIB - ";
				film.wypozycz();
			}
			if (menu3 == 2) {
				cout << "wypozyczono Pila 3D - ";
				film.wypozycz();
			}
			if (menu3 == 3) {
				cout << "wypozyczono Na wspolnej - ";
				film.wypozycz();
			}
		}
		else if (menu2 == 2) {
			cout << "dodaj film: "; cin >> bomba;
			film.dodaj(); cout << bomba;
		}

	}
	else if (menu == 3) {
		cout << "1 - muzyka wypozycz, 2 - muzyka dodaj "; cin >> menu2;
		if (menu2 == 1) {
			cout << "1-Tryb samolotowy, 2-humble, 3-Tak to lecialo "; cin >> menu3;
			if (menu3 == 1) {
				cout << "wypozyczono Tryb samolotowy - ";
				muzyka.wypozycz();
			}
			if (menu3 == 2) {
				cout << "wypozyczono humble - ";
				muzyka.wypozycz();
			}
			if (menu3 == 3) {
				cout << "wypozyczono Tak to lecialo - ";
				muzyka.wypozycz();
			}
		}
		else if (menu2 == 2) {
			cout << "dodaj muzyke: "; cin >> bomba;
			muzyka.dodaj(); cout << bomba;
		}
	}

	


	return EXIT_SUCCESS;
}
