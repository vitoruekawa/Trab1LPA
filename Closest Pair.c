#include <stdio.h>
#include <stdlib.h>
void swap(int *vet, int valor1, int valor2){	//funcao utilizada em conjunto com a funcao quickSort para realizar a ordenacao dos elementos de um vetor
    int trocador;
	trocador = vet[valor1];
    vet[valor1] = vet[valor2];
    vet[valor2] = trocador;
}
void quickSort (int *v,int a, int b){ 		//funcao utilizada para realizar a ordenacao dos elementos de um vetor
    if(a>=b)
        return;
    int p=rand()%(b-a+1)+a;
    swap(v,p,a);
    p=a;
    int m=a, n=b;
    while(n>m){
        while (v[m]<=v[p]&&m<=b)
            m++;
        while (v[n]>v[p])
            n--;
        if (n>m)
            swap(v,m,n);
    }
    swap(v,n,p);
    quickSort(v,a,n-1);
    quickSort(v,n+1,b);
}

int main(){
	int n, i, j, temp;
	int *valores = (int*)malloc(n*sizeof(int));			//criacao de um vetor dinamico de tamanho n, determinado pelo usuário, de tal forma que tal vetor não seja exageradamente menor nem maior que o necessário.
	printf("Digite a quantidade de numeros n para que o programa identifique o par com menor diferenca\n");
	scanf("%d", &n);
	if(n<=2){			//como o objetivo do programa é determinar o menor PAR, é necessário que haja pelo menos 2 valores, essa parte do corpo do programa realiza a verificação de que o usuário entrará com pelo menos 2 valores.
		printf("Por favor, eh necessario que haja pelo menos um par, portanto, deve haver no minimo dois valores\nDigite um valor maior ou igual a dois:");
		scanf("%d", &n);
	}
	printf("Digite os numeros \n");
	for(i=0;i<n;i++){	//utilização de um comando repetitivo para atribuir os valores digitados pelo usuário às posições do vetor.
		scanf("%d", &valores[i]);
	}
	quickSort(valores, 0, n-1); //chamada da função quickSort para ordenar o vetor valores
	j = valores[1]-valores[0];
	for(i=0;i<n-1;i++){
		if(valores[i+1]-valores[i]<j){	//como o vetor valores está ordenado, com certeza, a menor diferença estará entre posições consecutivas do vetor.
		j = valores[i+1]-valores[i];	//com essa parte do corpo, encontra-se a menor diferença e a posição dos valores(i e i+1).
		temp = i;
		}
	}
	printf("Os valores com menor diferenca sao: %d e %d \n", valores[temp], valores[temp+1]); //fim do programa: retorno dos valores digitados cuja diferenca seja mínima.
	free(valores); 		//liberação de memória alocada pelo comando malloc
	system("pause");
	return 0;
}
