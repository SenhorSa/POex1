#include <iostream>
#include "data_ok.h"
using namespace std;
//instanciar(criar) um objeto da classe data_ok
int main(){   
	Data_ok Data_lindinha;
	Data_lindinha.setDia(6);
	Data_lindinha.setMes(1);
	Data_lindinha.setAno(2005);
	/*Data_lindinha.getDia();
	Data_lindinha.getMes();
	Data_lindinha.getAno();*/
	cout << Data_lindinha.getDia() << "/" << Data_lindinha.getMes() << "/" << Data_lindinha.getAno() << endl;
	//primeiro metodo é o construtor

}