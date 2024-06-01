#include "person.h"
#include <string>
#include <iostream>
#include"fstream"
using namespace std;
person::person() {
	nome = "no name";
	morada = "no morada";
	data = Data_ok();
}
person::person(string n, string m, Data_ok d) {
	nome = n;
	morada = m;
	data = d;

}
person::~person() {
	//destrutor
}

void person::showPerson() const
{
	cout << getNome() << getMorada() << getData() << endl;

}



