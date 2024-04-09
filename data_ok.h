#pragma once
#include <iostream>
#include <fstream>

using namespace std;
class Data_ok
{//construtor
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
        int getDia() const;
        int getMes() const;
        int getAno() const;

        void showData() const;

        void update(int d, int m, int a);
        
        bool igual(const Data_ok data) const;
};


