#include <stdio.h>
#include <stdlib.h>
void swap(int *vet, int valor1, int valor2){		//função utilizada em conjunto com a função quickSort para a ordenação dos valores de um vetor
    int trocador;
	trocador = vet[valor1];
    vet[valor1] = vet[valor2];
    vet[valor2] = trocador;
}
void quickSort (int *v,int a, int b){		//função utilizada para ordenar os valores de um vetor.
    if(a>=b)
        return;
    int p=rand()%(b-a+1)+a;
    swap(v,p,a);
    p=a;
    int m=a, n=b;
    while(n>m)
    {
        while (v[m]<=v[p]&&m<=b){
            m++;
    	}
        while (v[n]>v[p]){
            n--;
    	}
        if (n>m){
            swap(v,m,n);
        }
    }
    swap(v,n,p);
    quickSort(v,a,n-1);
    quickSort(v,n+1,b);
}

int main(){
	int i, j, n;
	int *valores = (int*)malloc(n*sizeof(int));		//criação de um vetor dinâmico com dimensão n, determinada pelo usuário, de tal forma que o tamanho do vetor seja ideal.
	printf("Digite o numero de valores para que o programa te indique aqueles que nao se repetem: \n");
	scanf("%d", &n);		//leitura do tamanho n digitado pelo usuário
	if(n == 0){
		printf("Voce deve entrar com pelo menos um valor\nDigite um valor diferente de zero\n");		//verificação da entrada: para que haja algum elemento único, é necessário que o usuário entre com pelo menos 1 valor, ou seja, n!=0.
		scanf("%d", &n);
	}
	printf("Entre com os valores \n");
	for(i=0;i<n;i++){				//uso de um comando repetitivo para atribuir os valores digitados pelo usuário às posições do vetor valores.
		scanf("%d", &valores[i]);
	}
	quickSort(valores, 0, n-1);		//ordenação do vetor valores.
	printf("O(s) valor(es) que ocorre(m) uma unica vez sao:\n");
	if(n!=1){
		if(valores[1]-valores[0] != 0){
			printf("%d \n", valores[0]);
		}
		for(i=1;i<n-1;i++){		
			if(valores[i+1]-valores[i] != 0 && valores[i]-valores[i-1] != 0){
				printf("%d \n", valores[i]);
			}
		}		
		if(valores[n-1]-valores[n-2] != 0){
			printf("%d \n", valores[n-1]);
		}else{
			printf("Nao existem valores que nao se repetem \n");
		}
	}else{			//se n=1, então existe um único valor, esse valor não se repete e portanto o retorno do programa é esse valor.
		printf("%d\n", valores[0]);
	}
	free(valores);		//liberação da memória alocada pelo comando malloc.
	system("pause");
	return 0;
}
