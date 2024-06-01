#include <iostream>
#include "data_ok.h"
#include "person.h"
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
		/*printf("sao iguais\n");*/
		cout << "sao iguais" << endl;
	}
	else {
		/*printf("nao sao\n");*/
		cout << "nao sao" << endl;
	}
	if (Nuno == Jota)
	{
		cout<<"hehehiha"<<endl;
	}
	else { cout<<"nuhuhuh"<<endl; }
	Data_ok soma = Nuno + Jota;
	soma.showData();
	if (Nuno != soma) {
		cout << "sao diferentes" << endl;
	}
	else {
		cout << "SAO IGUAIS" << endl;
	}
	ofstream os;
	ifstream is;
	Data_ok bola(4,2,1234);	
	Data_ok bolas;
	/*os.open("datas.txt");
	if (!os) {
		cout << "no open" << endl;
		exit(1);
	}
	bola.saveFile(os);
	os.close();
	cout << endl << " 'dc' salvo no ficheiro" << endl;


	is.open("datas.txt");
	if (!is) {
		cout << "ERRO: não é possível abrir o ficheiro datas.txt" << endl;
		exit(1);
	}
	bolas.readFile(is);
	os.close();

	cout << endl << " data lida do ficheiro (em 'da'): " << bolas << endl;
	bolas.showData();*/


}