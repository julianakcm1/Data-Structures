#Bubble Sort

!(https://he-s3.s3.amazonaws.com/media/uploads/2682167.png)
/*
  A ideia é percorrer o vetor diversas vezes (tamanho do array - 1 vezes), e a cada passagem fazer flutuar para o topo o maior elemento 
da sequência. Essa movimentação lembra a forma como as bolhas em um tanque de água procuram seu próprio nível, e disso vem o nome do 
algoritmo.

*Complexidade:
  Melhor caso: n;
  Médio e Pior casos: n²;
  Na melhor versão: n(n - 1) = O(n²). A cada iteração n - 1, n - 2 .. até chegar em apenas um elemento do array.
  
*Vantagens:
  Algoritmo simples;
  Os elementos são trocados de lugar sem utilizar armazenamento temporário, o que faz o requerimento de espaço ser mínimo.

*Desvantagens:
  Lento;
  Não apresenta bons resultados para lista grande;
  Indicado para ensino acadêmico, mas não para aplicações na vida real.
 */
 
*Implementação:

**C**

void bubble_sort (int array[], int size) {
  for (j = 1; j <= size; ++j) {
    for (i = 0; i < size - 1; ++i) {
      if (array[i] > array [i + 1]) swap (&array[i], &array[i + 1]);
    }
  }
}

or

#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
void bubbleSort(int *v, int n){ 
    if (n < 1)return; 
 
    for (int i=0; i<n; i++) 
        if (v[i] > v[i+1]) 
            swap(&v[i], &v[i+1]);  
    bubbleSort(v, n-1); 
} 

int main(){
    int tam,i,*v;
    scanf("%d",&tam);
    
    v=(int*)malloc(tam*sizeof(int));
    
    for(i=0;i<tam;i++)scanf("%d",&v[i]);
    bubbleSort(v,tam-1);
    for(i=0;i<tam;i++)printf("%d ",v[i]);
    return 0;
}

**Best version**

void bubble_sort (int array[], int size) {
  for (j = size - 1; j >= 0; --j) {
    for (i = 0; i < j; ++i) {
      if (array[i] > array[i + 1]) swap (&array[i], &array[i + 1]);
    }
  }
}

**Haskell**

bolha [] = []
bolha lista = bolhaOrd lista (length lista)

bolhaOrd lista 0 = lista
bolhaOrd lista n = bolhaOrd (troca lista) (n-1)

troca [x] = [x]
troca (x:y:zs)
  | x > y = y : troca (x:zs)
  | otherwise = x : troca (y:zs)
