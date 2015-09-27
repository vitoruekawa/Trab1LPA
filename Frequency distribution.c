#include<stdio.h>
#include<stdlib.h>
void swap(int *vet, int valor1, int valor2){
    int trocador;
	trocador = vet[valor1];
    vet[valor1] = vet[valor2];
    vet[valor2] = trocador;
}

void quickSort (int *v,int a, int b){
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
	int i, n, maior, maiorFreq1 = 0, maiorFreq2 = 0, count;
	int j = 0;
	int *valores = (int*)malloc(n*sizeof(int));
	printf("O programa retornará o valor de maior frequencia(moda) \nDigite o numero de valores a serem analisados pelo programa.\n");
	scanf("%d", &n);
	if(n<1){
		printf("Por favor, o programa identifica o valor de maior frequencia, e portanto, e necessario entrar com pelo menos um valor.\n ");
		scanf("%d", &n);
	}
	printf("Digite os valores a serem analisados:\n");
	for(i=0;i<n;i++){
		scanf("%d", &valores[i]);
	}
	quickSort(valores, 0, n-1);
	for(i=0;i<n;i++){
		j = i;
		count = 0;
		while(valores[j] == valores[i] && j<n){
			count++;
			if(count>maiorFreq1){
				maiorFreq1 = count;
			}
			j++;
		}
		i=j-1;
	}
	if(maiorFreq1==1){
		printf("Nao existem valores que se repetem \n");
	}
	if(maiorFreq1!=1){
		for(i=0;i<n;i++){
			j = i;
			count = 0;
			while(valores[j] == valores[i] && j<n){
				count++;
				if(count>maiorFreq2){
					maiorFreq2 = count;
				}
				if(count == maiorFreq1){
					printf("Dentre os valores digitados, aquele que mais se repete e: %d, o qual se repete %d vezes \n", valores[j], maiorFreq1);
				}
				j++;
			}
			i=j-1;
		}
	}
	free(valores);
	system("pause");
	return 0;
}
