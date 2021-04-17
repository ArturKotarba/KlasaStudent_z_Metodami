#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(int nrTelefonu, string imie, string nazwisko, int nrIndeksu) : nrIndeksu(nrIndeksu), nrTelefonu(nrTelefonu), imie(imie), nazwisko(nazwisko) {}

Student::~Student() {}

void Student::wyswietlDaneUcznia(Student* St, int liczebnoscKlas) {
	cout << "Prosze wprowadzic nr indeksu: ";
	int tempNrIndeksu = 0;
	do
	{
		cin >> tempNrIndeksu;
		if (tempNrIndeksu > liczebnoscKlas || tempNrIndeksu < 0) {
			cout << "Prosze wprowadzic prawidlowy nr indeksu ( od 0 do " << liczebnoscKlas << ") : ";
		}

	} while (tempNrIndeksu > liczebnoscKlas || tempNrIndeksu < 0);
	if (St[tempNrIndeksu].nrIndeksu == -1) {
		cout << "Nie ma cie w bazie danych\n";
	}
	else
	{
		cout << "nr indeksu = " << St[tempNrIndeksu].nrIndeksu << " imie = " << St[tempNrIndeksu].imie << " nazwisko = " << St[tempNrIndeksu].nazwisko << " nr telefonu = " << St[tempNrIndeksu].nrTelefonu << endl;
	}
}
void Student::usunDaneUcznia(Student* St, int liczebnoscKlas) {
	cout << "Prosze wprowadzic nr indeksu: ";
	int tempNrIndeksu = 0;
	do
	{
		cin >> tempNrIndeksu;
		if (tempNrIndeksu > liczebnoscKlas || tempNrIndeksu < 0) {
			cout << "Prosze wprowadzic prawidlowy nr indeksu ( od 0 do " << liczebnoscKlas << ") : ";
		}
	} while (tempNrIndeksu > liczebnoscKlas || tempNrIndeksu < 0);

	if (St[tempNrIndeksu].nrIndeksu == -1) {
		cout << "Nie ma cie w bazie danych\n";
	}
	else {
		cout << "Czy napewno chcesz usunac dane? : ";
		string odp;
		cin >> odp;
		if (odp == "tak" || odp == "Tak") {
			cout << "Usuwanie danych, moze to zajac ponad minutke :)\n";
			St[tempNrIndeksu].nrIndeksu = -1;
			St[tempNrIndeksu].nrTelefonu = 0;
			St[tempNrIndeksu].imie = " ";
			St[tempNrIndeksu].nazwisko = " ";
		}
		else {
			cout << "Uff!! A bylo tak blisko\n";
		}

	}

}
