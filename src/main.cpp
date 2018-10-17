#include "agenda.h"

int main(int argc, char const *argv[])
{
    string v[] = {"alpha","bravo","charlie","delta","echo","fox","golf","hotel","india","juliet","arnaldo"};
    Agenda age;
    for(int i = 0; i < 11; i++){
        age.insereContato(v[i], 15+i, 1.2 + i/10.0);
    };
    cout << "Listar contatos com a letra [a]." << endl;
    age.listaContato('a');
    cout << "Listar todos os contatos." << endl;
    age.listaContato();
    cout << "Remover contato [india] e listar contatos novamente." << endl;
    age.removeContato("india");
    age.listaContato();
    cout << "Busca indices dos contatos [fox][charlie][juliet] e imprimem suas informacoes." << endl;
    int j = age.buscaContato("fox");
    age.imprimeContato(j);
    j = age.buscaContato("charlie");
    age.imprimeContato(j);
    j = age.buscaContato("juliet");
    age.imprimeContato(j);
    cout << "Busca do contato [joao] deve retornar indice -1" << endl;
    cout << age.buscaContato("joao");

    return 0;
}
