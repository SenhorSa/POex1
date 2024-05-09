#pragma once
#include <iostream>
#include <fstream>

using namespace std;
class Data_ok
{
private:
	int dia;
	int mes;
	int ano;
	public:
        // Construtor padrão (sem parâmetros)
        Data_ok();

        // Construtor com parâmetros definidos pelo usuário
        Data_ok(int d, int m, int a);

        // Destrutor
        ~Data_ok();
 
        // Métodos Set
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);

        // Métodos Get
        inline int getDia() const;
        inline int getMes() const;
        inline int getAno() const;

        void showData() const;

        void update(int d, int m, int a);
        
        bool igual(const Data_ok data) const;

        bool operator==(const Data_ok data) const;
        bool operator!=(const Data_ok data) const;
        Data_ok operator+(const Data_ok data) const;	//	sobrecarga de operadores
        Data_ok operator-(const Data_ok data) const;	//	sobrecarga de operadores
        friend ostream& operator << (ostream& os, const Data_ok data);//	sobrecarga de operadores
        friend istream& operator >> (istream& is, Data_ok& data);		//	sobrecarga de operadores
};


