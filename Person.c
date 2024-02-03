#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da estrutura Pessoa
struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    struct Pessoa pessoa1;

   
    strcpy(pessoa1.nome, "Joao");
    pessoa1.idade = 30;

   
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);

    return 0;
}