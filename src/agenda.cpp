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
        cerr << "A agenda está cheia, delete algum contato para adicionar um novo!" << endl;
        return;
    };
    if (this->buscaContato(nome_) != -1)
    {
        cerr << "Contato não pode ser adicionado pois já existe um contato com este nome!" << endl;
        return;
    };
    Pessoa* cont = new Pessoa(nome_, idade_, altura_);
    this->m_contatos[this->m_total_contatos++] = cont;
}
/* remove um contato pelo nome e reorganiza a agenda */
void Agenda::removeContato(string nome_) {}
/* retorna o indice para o contato ou -1 caso nao exista */
int Agenda::buscaContato(string nome_)
{
    for (int i = 0; i < this->m_total_contatos; i++)
    {
        Pessoa *cont = this->m_contatos[i];
        if (str_toupper(cont->getNome()) == str_toupper(nome_))
        {
            return i;
        }
    };
    return -1;
}
/* lista todos os contatos ou apenas aqueles que iniciam por uma determinada letra */
void Agenda::listaContato(char letra = ' ') {}
/* imprime os dados do contato armazenado na posicao i */
void Agenda::imprimeContato(int i) {}