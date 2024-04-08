#include <iostream>
#include "data_ok.h"
using namespace std;
//instanciar(criar) um objeto da classe data_ok
int main(){   
	Data_ok Nuno;
	Nuno.setDia(6);
	Nuno.setMes(1);
	Nuno.setAno(2005);
	Data_ok Jota(7,8,1998);
	cout << Nuno.getDia() << "/" << Nuno.getMes() << "/" << Nuno.getAno() << endl;
	//primeiro metodo é o construtor
	cout << Jota.getDia() << "/" << Jota.getMes() << "/" << Jota.getAno() << endl;
	Nuno.showData();
	Jota.showData();
}