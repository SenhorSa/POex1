#pragma once
#include "Data_ok.h"
#include <string>
class person :
    public Data_ok
{
private:
    string nome;
    string morada;
    Data_ok data;
public:
    person();
    person(string a, string b, Data_ok c);
    ~person();
    string getNome(void)const {
        return nome;
    }
    string getMorada(void)const {
        return morada;
    }
    const Data_ok& getData(void) const {
        return data;
    }
    void setNome(string a) {
        nome = a;
    }
    void setMorada(string b) {
        morada = b;
    }
    void setData(Data_ok a) {
        data = a;
    }
    void showPerson()const;
};

