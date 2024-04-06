#pragma once
class Data_ok
{//construtor
private:
	int dia;
	int mes;
	int ano;
	public:
        // Construtor padr�o (sem par�metros)
        Data_ok();

        // Construtor com par�metros definidos pelo usu�rio
        Data_ok(int d, int m, int a);

        // Destrutor
        ~Data_ok();

        // M�todos Set
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);

        // M�todos Get
        int getDia() const;
        int getMes() const;
        int getAno() const;
};


