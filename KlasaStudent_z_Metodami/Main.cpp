#include <iostream>
#include "Student.h"

using namespace std;

enum Menu
{
	dodajUczniaE, wyswietlDaneUczniaE, usunDaneUczniaE, zakonczE
};

void dodajeUcznia(Student* St, int liczebnoscKlas);
void dodajeUcznia2(Student** St);
int menu();

int main()
{


	//cout << "ILe jest uczniow w klasie 3A? ";
	//int uczniowieW3A = 0;
	//cin >> uczniowieW3A;
	//Student* Klasa3A = new Student[uczniowieW3A];
	Student** Klasa4A = nullptr;

	bool zakoncz = true;
	do
	{
		switch (menu())
		{
		case dodajUczniaE:
			//dodajeUcznia(Klasa3A, uczniowieW3A);
			dodajeUcznia2(Klasa4A);
			break;
		case wyswietlDaneUczniaE:
			//Klasa3A->wyswietlDaneUcznia(Klasa3A, uczniowieW3A);
			break;
		case usunDaneUczniaE:
			//Klasa3A->usunDaneUcznia(Klasa3A, uczniowieW3A);
			break;
		case zakonczE:
			zakoncz = false;
			break;
		default:
			cout << "Wybrano niepoprawna liczbe, prosze sprobowac jeszcze raz";
			break;
		}

	} while (zakoncz);
}


int menu() {
	int wybor;
	cout << "0 - dodanie ucznia"
		<< "\n1 - wyswietlenie danych"
		<< "\n2 - usuniecie danych ucznia"
		<< "\n3 - zakoncz"
		<< "\n: ";
	cin >> wybor;
	return wybor;
}

void dodajeUcznia(Student* St, int liczebnoscKlas) {
	cout << "Wprowadz swoj nr indeksu: ";
	int tempNrIndeksu = 0;
	do
	{
		cin >> tempNrIndeksu;
		if (tempNrIndeksu > liczebnoscKlas || tempNrIndeksu < 0) {
			cout << "Prosze wprowadzic prawidlowy nr indeksu ( od 0 do " << liczebnoscKlas << ") : ";
		}

	} while (tempNrIndeksu > liczebnoscKlas || tempNrIndeksu < 0);
	if (St[tempNrIndeksu].nrIndeksu == -1) {
		St[tempNrIndeksu].nrIndeksu = tempNrIndeksu;
		cout << "Nie ma cie jeszcze w bazie danych."
			<< "\nProsze o wprowadzenie nowych danych: ";
		cout << "Wprowadz swoje imie: ";
		cin >> St[tempNrIndeksu].imie;
		cout << "Prosze wprowadzic swoje nazwisko: ";
		cin >> St[tempNrIndeksu].nazwisko;
		cout << "Prosze wprowadizc swoj nr telefonu: ";
		cin >> St[tempNrIndeksu].nrTelefonu;
	}
	else {
		enum wybor
		{
			imie, nazwisko, nr_telefonu, zakoncz
		};
		int wyborSwitch = 0;
		int tempWyborSwitch = -1;
		do
		{
			cout << "Co chcialbys zmienic?"
				<< "\n 0 - imie"
				<< "\n 1 - nazwisko"
				<< "\n 2 - nr telefonu"
				<< "\n 3 - zakoncz"
				<< "\n: ";
			cin >> wyborSwitch;
			if (wyborSwitch != 3)
				tempWyborSwitch = wyborSwitch;
			switch (wyborSwitch)
			{
			case imie:
				cout << "Wprowadz nowe imie: ";
				cin >> St[tempNrIndeksu].imie;
				break;
			case nazwisko:
				cout << "Wprowadz nowe nazwisko: ";
				cin >> St[tempNrIndeksu].nazwisko;
				break;
			case nr_telefonu:
				cout << "Wprpwadz nowy nr telefonu: ";
				cin >> St[tempNrIndeksu].nrTelefonu;
				break;
			case zakoncz:
				if (tempWyborSwitch == 0 || tempWyborSwitch == 1 || tempWyborSwitch == 2)
					cout << "Zmiany zostaly zapisane\n";
				else {
					cout << "Nie dokonano zadnych zmian\n";
				}
				wyborSwitch = 3;
				break;
			default:
				cout << "Wybrales niepoprawny nr, prosze sprobuj ponwnie\n";
				break;
			}
		} while (wyborSwitch != 3);
	}
}
void dodajeUcznia2(Student** St) {
	cout << "Ilu jest uczniow w klasie? ";
	int iloscUcznioweWKlasie{};
	cin >> iloscUcznioweWKlasie;
	St = new Student*[iloscUcznioweWKlasie];

	cout << "Wprowadz swoj nr indeksu: ";
	int tempNrIndeksu = 0;
	do
	{
		cin >> tempNrIndeksu;
		if (tempNrIndeksu > iloscUcznioweWKlasie || tempNrIndeksu < 0) {
			cout << "Prosze wprowadzic prawidlowy nr indeksu ( od 0 do " << iloscUcznioweWKlasie << ") : ";
		}

	} while (tempNrIndeksu > iloscUcznioweWKlasie || tempNrIndeksu < 0);
	if (St[tempNrIndeksu] == nullptr) { ///gfsdfsdgdfg
		St[tempNrIndeksu] == new Student;
		St[tempNrIndeksu]->nrIndeksu = tempNrIndeksu; 
		cout << "Nie ma cie jeszcze w bazie danych."
			<< "\nProsze o wprowadzenie nowych danych: ";
		cout << "Wprowadz swoje imie: ";
		cin >> St[tempNrIndeksu]->imie;
		cout << "Prosze wprowadzic swoje nazwisko: ";
		cin >> St[tempNrIndeksu]->nazwisko;
		cout << "Prosze wprowadizc swoj nr telefonu: ";
		cin >> St[tempNrIndeksu]->nrTelefonu;
	}
	else {
		enum wybor
		{
			imie, nazwisko, nr_telefonu, zakoncz
		};
		int wyborSwitch = 0;
		int tempWyborSwitch = -1;
		do
		{
			cout << "Co chcialbys zmienic?"
				<< "\n 0 - imie"
				<< "\n 1 - nazwisko"
				<< "\n 2 - nr telefonu"
				<< "\n 3 - zakoncz"
				<< "\n: ";
			cin >> wyborSwitch;
			if (wyborSwitch != 3)
				tempWyborSwitch = wyborSwitch;
			switch (wyborSwitch)
			{
			case imie:
				cout << "Wprowadz nowe imie: ";
				cin >> St[tempNrIndeksu]->imie;
				break;
			case nazwisko:
				cout << "Wprowadz nowe nazwisko: ";
				cin >> St[tempNrIndeksu]->nazwisko;
				break;
			case nr_telefonu:
				cout << "Wprpwadz nowy nr telefonu: ";
				cin >> St[tempNrIndeksu]->nrTelefonu;
				break;
			case zakoncz:
				if (tempWyborSwitch == 0 || tempWyborSwitch == 1 || tempWyborSwitch == 2)
					cout << "Zmiany zostaly zapisane\n";
				else {
					cout << "Nie dokonano zadnych zmian\n";
				}
				wyborSwitch = 3;
				break;
			default:
				cout << "Wybrales niepoprawny nr, prosze sprobuj ponwnie\n";
				break;
			}
		} while (wyborSwitch != 3);
	}
}