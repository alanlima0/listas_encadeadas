#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int dado;
    struct no* proximo;
    struct no* anterior;
} no;

no* inserirInicio(no* lista, int valor){
    no* novo_no = (no*) malloc(sizeof(no));
    novo_no -> dado = valor;
    novo_no -> proximo = lista;

    return novo_no;
}

no* removeInicio(no* lista){
    if(lista==NULL) return NULL;
    no* temp = lista;
    lista = lista -> proximo;
    free(temp);
}

void imprimeLista(no* lista){
    no* atual = lista;

    while (atual != NULL)
    {
        printf("%d ->" atual -> dado);
        atual = atual -> proximo;
    }
    
}

int main(){
    lista = imprimeLista(lista,20);
    lista = imprimeLista(lista, 30);

    imprimeLista(lista);
}