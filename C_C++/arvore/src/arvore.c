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
void exibirPreOrdem (TARVORE pRaiz);
void exibirPosOrdem (TARVORE pRaiz);

/* Função principal com a chamada das outras funções */
int main(void){
    TARVORE A;
    criar(&A);
    // inserção dos elementos na árvore binária
    inserir(&A,8);
    inserir(&A,4);
    inserir(&A,12);
    inserir(&A,15);
    inserir(&A,13);
    inserir(&A,73);
    inserir(&A,37);
    inserir(&A,82);
    // impressação dos elementos da árvore binária em ordem
    printf("Exibir os elementos da arvore em ordem \n");
    printf("PRE-ORDEM\n");
	exibirPreOrdem(A);
    printf("\nEM-ORDEM\n");
	exibirEmOrdem(A);
	printf("\nPOS-ORDEM\n");
    exibirPosOrdem(A);
    printf("\n");


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

void exibirPosOrdem (TARVORE pRaiz){
    if (pRaiz != NULL){
        exibirPosOrdem(pRaiz->pEsquerda);
        exibirPosOrdem(pRaiz->pDireita);
        printf(" %i,", pRaiz->numero);
    }
}

void exibirPreOrdem (TARVORE pRaiz){
    if (pRaiz != NULL){
    	printf(" %i,", pRaiz->numero);
        exibirPreOrdem(pRaiz->pEsquerda);
        exibirPreOrdem(pRaiz->pDireita);
    }
}
