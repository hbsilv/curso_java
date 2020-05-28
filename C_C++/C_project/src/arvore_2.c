#include <stdio.h>

/* Estrutura de uma árvore binária */
struct arvore{
    int numero;
    struct arvore *pEsquerda;
    struct arvore *pDireita;
};

typedef struct arvore *TARVORE;

/* Prototipo das funções */
void criar(TARVORE *pRaiz);
void inserir (TARVORE *pRaiz, int x);
void exibirEmOrdem (TARVORE pRaiz);

/* Função principal com a chamada das outras funções */
int main(void){
    TARVORE A;
    criar(&A);
    // inserção dos elementos na árvore binária
    inserir(&A,5);
    inserir(&A,4);
    inserir(&A,7);
    inserir(&A,8);
    inserir(&A,2);
    inserir(&A,3);
    inserir(&A,9);
    // impressação dos elementos da árvore binária em ordem
    printf("Exibir os elementos da arvore em ordem \n");
    exibirEmOrdem(A);

    return 0;
}

/* Função para criar uma árvore binária */
void criar(TARVORE *pRaiz){
    *pRaiz = NULL;
}

/* Função para inserir elementos em uma árvore binária */
void inserir (TARVORE *pRaiz, int x){
    if ((*pRaiz) == NULL){
        *pRaiz=(TARVORE) malloc (sizeof(struct arvore));
        (*pRaiz)->numero=x;
        (*pRaiz)->pEsquerda=NULL;
        (*pRaiz)->pDireita=NULL;
    }else{
        if (x<(*pRaiz)->numero){
            inserir (&((*pRaiz)->pEsquerda),x);
        }else{
            inserir(&((*pRaiz)->pDireita),x);
        }
    }
}

/* Impressão da árvore binária em ordem */
void exibirEmOrdem (TARVORE pRaiz){
    if (pRaiz != NULL){
        exibirEmOrdem(pRaiz->pEsquerda);
        printf(" %i,", pRaiz->numero);
        exibirEmOrdem(pRaiz->pDireita);
    }
}
