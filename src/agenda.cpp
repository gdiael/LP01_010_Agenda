#include "agenda.h"

/* Construtor padrão */
Agenda::Agenda() : m_total_contatos(0)
{
}
/* Destrutor */
Agenda::~Agenda()
{
}
/* armazena um novo contato */
void Agenda::insereContato(string nome_, int idade_, float altura_)
{
    if (this->m_total_contatos == MAX_CONTATOS)
    {
        cerr << "A agenda esta cheia, delete algum contato para adicionar um novo!" << endl;
        return;
    };
    if (this->buscaContato(nome_) != -1)
    {
        cerr << "[" << nome_ << "] nao pode ser adicionado pois ja existe um contato com este nome!" << endl;
        return;
    };
    Pessoa* cont = new Pessoa(nome_, idade_, altura_);
    this->m_contatos[this->m_total_contatos++] = cont;
}
/* remove um contato pelo nome e reorganiza a agenda */
void Agenda::removeContato(string nome_) {
    int i = this->buscaContato(nome_);
    if(i == -1){
        cerr << "[" << nome_ << "] nao pode ser removido, pois nao esta presente na agenda!" << endl;
        return;
    };
    // coloca o ultimo contado na posição i, e decrementa a quantidade de contatos
    this->m_contatos[i] = this->m_contatos[--this->m_total_contatos];
}
/* retorna o indice para o contato ou -1 caso nao exista */
int Agenda::buscaContato(string nome_)
{
    for (int i = 0; i < this->m_total_contatos; i++)
    {
        Pessoa *cont = this->m_contatos[i];
        if (cont->getNome() == str_toupper(nome_))
        {
            return i;
        }
    };
    return -1;
}
/* lista todos os contatos ou apenas aqueles que iniciam por uma determinada letra */
void Agenda::listaContato(char letra) {
    letra = toupper(letra);
    for (int i = 0; i < this->m_total_contatos; i++)
    {
        Pessoa *cont = this->m_contatos[i];
        if (letra == ' ' || letra == cont->getNome().at(0))
        {
            cout << cont->getNome() << endl;
        };
    };
}
/* imprime os dados do contato armazenado na posicao i */
void Agenda::imprimeContato(int i) {
    if(i < 0 || i >= this->m_total_contatos ){
        cerr << "Indice invalido!" << endl;
        return;
    };
    cout << *this->m_contatos[i];
}