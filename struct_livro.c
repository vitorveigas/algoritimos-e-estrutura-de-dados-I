
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Livro{
    char titulo[50];
    char autor[50];
    char assunto[100];
    int id_livro;
};

int main() {
    
    struct Livro Livro1; 
    struct Livro Livro2;
    
    strcpy(Livro1.titulo, "Titulo genérico");
    strcpy(Livro1.autor, "Autor");
    strcpy(Livro1.assunto, "Um livro genérico");
    Livro1.id_livro = 123;
    
    strcpy(Livro2.titulo, "Outro Titulo genérico");
    strcpy(Livro2.autor, "Autor 2");
    strcpy(Livro2.assunto, "Outro livro genérico");
    Livro2.id_livro = 456;
    
    printf("Livro 1 titulo : %s\n", Livro1.titulo);
    printf("Livro 1 autor: %s\n", Livro1.autor);
    printf("Livro 1 assunto: %s\n", Livro1.assunto);
    printf("Livro 1 id_livro: %d\n", Livro1.id_livro);
    
    printf("Livro 2 titulo : %s\n", Livro2.titulo);
    printf("Livro 2 autor: %s\n", Livro2.autor);
    printf("Livro 2 assunto: %s\n", Livro2.assunto);
    printf("Livro 2 id_livro: %d\n", Livro2.id_livro);
    
    return 0;
}
