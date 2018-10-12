# LP01_010_Agenda
Resuloção das questões 2 e 3 da Lista de Exercícios da disciplina de Linguagem de Programação I, do curso de Bacharelado em Ciência e Tecnologia da UFRN. As soluções serão implementadas usando a linguagem C++.
## Enunciados das questões
**Questão 2.**
- Crie uma classe para representar uma pessoa, com os atributos privados:
    - nome, 
    - idade e
    - altura
- Crie os métodos getters e setters necessários
- Sobrecarregue o operador de inserção («) para permitir imprimir os dados de uma pessoa.
**Questão 3.**
- Utilizando a sua implementação da classe Pessoa da questão anterior, crie uma classe Agenda que armazena até 100 contatos (pessoas) e seja capaz de operações como:
    - inserir um novo contato na agenda,
    - remover um contato existente,
    - buscar um contato na agenda,
    - listar todos os contatos ou aqueles que iniciam por uma determinada letra,
    - além de listar os dados de um contato específico.
```
class Agenda
{
  public:
    /* armazena um novo contato */
    void insereContato(string nome_, int idade_, float altura_);
    /* remove um contato pelo nome e reorganiza a agenda */
    void removeContato(string nome_);
    /* retorna o indice para o contato ou -1 caso nao exista */
    int buscaContato(string nome_);
    /* lista todos os contatos ou apenas aqueles que iniciam por uma determinada letra */
    void listaContato(char letra = '');
    /* imprime os dados do contato armazenado na posicao i */
    void imprimeContato(int i);

  private:
    Pessoa m_contatos[MAX_CONTATOS];
    int m_total_contatos;
};
```
Crie um programa para testar a implementação de sua agenda.