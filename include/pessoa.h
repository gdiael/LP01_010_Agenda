#ifndef _H_PESSOA_
#define _H_PESSOA_

#include <algorithm>
#include <iostream>
#include <iomanip>

using namespace std;

class Pessoa{
public:
    /* Construtor parametrizado */
    Pessoa(string nome, int idade, double altura);
    /* Destrutor */
    ~Pessoa();
    string getNome();
    void setNome(string valor);
    int getIdade();
    void setIdade(int valor);
    double getAltura();
    void setAltura(double valor);
    bool operator==(Pessoa &other);
    friend ostream &operator<<(std::ostream &os, Pessoa &pess);
    
private:
    string m_nome;
    int m_idade;
    double m_altura;
};

string str_toupper(string s);

#endif