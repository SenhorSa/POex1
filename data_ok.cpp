#include "data_ok.h"
#include <iostream>
#include <fstream>
using namespace std;
Data_ok::~Data_ok()
{
	//cout << "destruido" << endl;
	//destrutor
}
Data_ok::Data_ok():dia(0),mes(0),ano(0)
{
	//construtor
}
Data_ok::Data_ok(int d, int m, int a):dia(d), mes(m), ano(a)
{
	//construtor
}
void Data_ok::setDia(int d)
{
	dia = d;
}
void Data_ok::setMes(int m)
{
	mes = m;
}
void Data_ok::setAno(int a)
{
	ano = a;
}
inline int Data_ok::getDia() const
{
	return dia;
}
inline int Data_ok::getMes() const
{
	return mes;
}
inline int Data_ok::getAno() const
{
	return ano;
}
void Data_ok::showData() const
{
	cout << getDia() << "/" << getMes() << "/" << getAno() << endl;
}
void Data_ok::update(int d, int m, int a)
{
	setDia(d);
	setMes(m);
	setAno(a);
}
//metodo que compare o dia de dois objetos da classe Data_ok
bool Data_ok::igual(const Data_ok data) const
{
	if (data.ano != ano || data.mes != mes || data.dia != dia) {
		return false;
	}
	else {
		return true;
	}
}
bool Data_ok::operator==(const Data_ok data)const
{
	return this->igual(data);
}
Data_ok Data_ok::operator+(const Data_ok data) const {
	Data_ok aux;
	aux.ano = this->getAno() + data.getAno();
	aux.mes = this->getMes() + data.getMes();
	aux.dia = this->getDia() + data.getDia();
	return aux;
}
Data_ok Data_ok::operator-(const Data_ok data) const {
	Data_ok aux;
	aux.ano = this->getAno() - data.getAno();
	aux.mes = this->getMes() - data.getMes();
	aux.dia = this->getDia() - data.getDia();
	return aux;
}
bool Data_ok::operator!=(const Data_ok data) const
{
	if (data.ano != ano || data.mes != mes || data.dia != dia) {
		return true;
	}
	else {
		return false;
	}
}
ostream& operator << (ostream& os, const Data_ok data) {
	os << "Data:" << data.getDia() << "/" << data.getMes() << "/" << data.getAno() << ";";
		
	return os;
}

istream& operator >> (istream& is, Data_ok& data) {
	//métodos friend têm acesso direto aos membros da classe

	cout << "Dia: ";
	is >> data.dia;		//acesso direto		
	cout << "Mes: ";
	is >> data.mes;		//acesso direto
	cout << "Ano: ";
	is >> data.ano;		//acesso direto

	return is;
}
void Data_ok::saveFile(ofstream& os) const {
	os << "Data:" <<  getDia() << "/" << getMes() << "/" << getAno() << ";";
}

void Data_ok::readFile(ifstream& is) {
	char aux[10];

	is.getline(aux, sizeof(aux), ':');	// lê até ':' e remove ':'

	is.getline(aux, sizeof(aux), '/');	// lê até '/' e remove '/'
	this->dia = atoi(aux);				//string para inteiro
	is.getline(aux, sizeof(aux), '/');	// lê até '/' e remove '/'
	this->mes = atoi(aux);				//string para inteiro
	is.getline(aux, sizeof(aux), ';');	// lê até ';' e remove ';'
	this->ano = atoi(aux);				//string para inteiro
}


