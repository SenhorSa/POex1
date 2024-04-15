#include "data_ok.h"
#include <iostream>
#include <fstream>
using namespace std;
Data_ok::~Data_ok()
{
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
int Data_ok::getDia() const
{
	return dia;
}
int Data_ok::getMes() const
{
	return mes;
}
int Data_ok::getAno() const
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
	if (data.ano != ano || data.mes != mes || data.dia != dia) {
		return false;
	}
	else {
		return true;
	}
}


