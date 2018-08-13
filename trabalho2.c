#include<stdio.h>
#include<stdlib.h>


void compactar(){
	
}
int main(){
	char type[2];
	int width;
	int height;
	int limit;
	int **matriz;
	int i,j,n,k;
	
	matriz = (int**) malloc (height * sizeof(int*));
	for(n=0;n<width;n++){
		matriz[n]=(int*)malloc(width * sizeof(int));
	}
	
	scanf(" %c %c", &type[1],&type[2]);
	scanf("%d", &width);
	scanf("%d", &height);	
	scanf("%d", &limit);
	
//	printf("Tipo: %c%c\r\n",type[1],type[2]);
//	printf("width: %d\r\n",width);
//	printf("height: %d\r\n",height);
//	printf("limit: %d\r\n",limit);
//	printf("\r\n\r\n\r\n");
	
//	printf("fazendo a leitura\r\n\r\n");
	for(i=0;i<height;i++){		
		for( j=0;j<width;j++){
		
			scanf("%d%.*",&matriz[i][j]);
			//printf(" matriz[%d][%d]=%d",i,j,matriz[i][j]);
		}
		fflush(stdin);
		
		//printf("\r\n");
	}
	printf("saida\r\n\r\n");
	for(i=0;i<height;i++){
		for( j=0;j<width;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}	
	printf("finalizado");
	return 0;
}
