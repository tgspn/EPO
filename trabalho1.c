#include<stdio.h>
#include<stdlib.h>
void ordenar(int *vetor,int size){
	int i;
	for(i = 0; i < size; i++){
		if(i+1 < size && vetor[i+1] > vetor[i]){
			int aux = vetor[i];
			vetor[i] = vetor[i+1];
			vetor[i+1] = aux;
			i = -1;
		}					
	}
}

int main(){
	int n = 0;
	int *vetor;
	int i;
	scanf("%d",&n);
	
	vetor=(int*) malloc (n * sizeof(int));
	
	for (i = 0 ; i < n; i++){
		scanf("%d",&vetor[i]);
	}
	if(n > 0){
	ordenar(vetor,n);
	
	printf("%d\n%d",vetor[0],vetor[1]);
	}else{
		printf("%d",n);
	}
	return n;
	
}
