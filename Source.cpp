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
	Nuno.showData();
	Jota.showData();
	Jota.update(6,1,2005);
	Jota.showData();
	if (Nuno.igual(Jota)) {
		printf("sao iguais");
	}
	else {
		printf("nao sao");
	}
}