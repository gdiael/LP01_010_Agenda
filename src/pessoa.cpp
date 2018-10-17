#include "pessoa.h"

/* Construtor parametrizado */
Pessoa::Pessoa(string nome, int idade, double altura) : m_nome(nome), m_idade(idade), m_altura(altura)
{
}
/* Destrutor */
Pessoa::~Pessoa()
{
}

string Pessoa::getNome()
{
    return str_toupper(this->m_nome);
}

void Pessoa::setNome(string valor)
{
    this->m_nome = valor;
}

int Pessoa::getIdade()
{
    return this->m_idade;
}

void Pessoa::setIdade(int valor)
{
    this->m_idade = valor;
}

double Pessoa::getAltura()
{
    return this->m_altura;
}

void Pessoa::setAltura(double valor)
{
    this->m_altura = valor;
}

bool Pessoa::operator==(Pessoa &other)
{
    return (str_toupper(this->m_nome) == str_toupper(other.getNome()));
}

ostream &operator<<(ostream &os, Pessoa &pess)
{
    // aqui serão usados manipuladores para formatar a saída
    // o nome da pessoa será ajustado a esquerda, e terá um espaçamento de 18
    // caracteres antes da idade
    os << left << setw(18) << pess.getNome();
    // a idade será posicionada em seguinda
    os << " | " << right << setw(3) << pess.m_idade << "anos";
    // a altura será formatada com duas casas decimais
    os << " [altura: " << setprecision(2) << fixed;
    // será ajustada a direita com espaçamento de 6 caracteres
    os << right << setw(5) << pess.m_altura << "m]" << endl;
    return os;
}

string str_toupper(string s)
{
    transform(s.begin(), s.end(), s.begin(),
              [](unsigned char c) { return toupper(c); });
    return s;
}