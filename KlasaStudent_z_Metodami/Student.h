#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <iostream>
using namespace std;

class Student
{
	friend void dodajeUcznia(Student* St, int liczebnoscKlas); // zaprzyjazniona funkcja dodawani uczniow w klasie 
	friend void dodajeUcznia2(Student** St);
	int nrIndeksu, nrTelefonu;
	string imie, nazwisko;
public:
	Student(int nrTelefonu = 0, string imie = " ", string nazwisko = " ", int nrIndeksu = -1);
	~Student();
	void wyswietlDaneUcznia(Student* St, int liczebnoscKlas);
	void usunDaneUcznia(Student* St, int liczebnoscKlas);
};

#endif // !_STUDENT_H_
