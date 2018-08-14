//Emerson do Amaral SC300077X
//Tiago Spana 130178-1
#include<stdio.h>
#include<stdlib.h>


void compactar(int height,int width,int limit){

	int i,j,n;
	int **matriz;
	
	matriz=(int**)malloc(height*sizeof(int*));
	for(n=0;n<width;n++){
		matriz[n]=(int*)malloc(width * sizeof(int));
	}
	
	
	
	for(i=0;i<height;i++){
		for( j=0;j<width;j++){
			int val;
			scanf("%d",&val);
			matriz[i][j]=val;
		}
	}
	for(i = 0; i <height ; i++){
		for(j = 0; j < width; j++){
			int current=matriz[i][j];
			if(matriz[i][j+1] == current &&
			   matriz[i][j+2] == current &&
			   matriz[i][j+3] == current){
			   
			   	matriz[i][j++] = -9;
			   	j++;
			   	int indexCount = j++;
			   	int count2=3;
			   	for(j;j<width;j++){
				  if(matriz[i][j] == current ){
	                    matriz[i][j]=-1;
	                    count2++;
	                }else{
	           		    	j--;
	                	break;
					}
                }
                matriz[i][indexCount]=count2;    
                
           }			   
			
		}
	}
	printf("P8\n");
	printf("%d %d\n",width,height);
	printf("%d\n",limit);
	for(i=0;i<height;i++){
		for( j=0;j<width;j++){      
			 int value=matriz[i][j];
			 if(value==-9)       
				printf(" @");
			else if(value> -1)
				 printf(" %d ",matriz[i][j]);
		}
		printf("\n");
	}

	for(n=0;n<width;n++){
		free(matriz[n]);
	}
	free(matriz);
	
}
void descompactar(int height,int width,int limit){
	int i,j,n;
	int **matriz;
	matriz=(int**)malloc(height*sizeof(int*));
	for(n=0;n<width;n++){
		matriz[n]=(int*)malloc(width * sizeof(int));
	}

	for(i=0;i<height;i++){
		for( j=0;j<width;j++){
			char val;
      scanf("%c",&val);

			if('@'== val){
				int dig;
				int qtd;
				scanf("%d",&dig);
				scanf("%d",&qtd);
				j--;
				for(n=0;n<qtd;n++,j++){
					matriz[i][j]=dig;
				}				
				j--;

			}else{
			 		scanf("%d",&matriz[i][j]);
			}
		}
	}
	printf("P2\n");
	printf("%d %d\n",width,height);
	printf("%d\n",limit);
	for(i=0;i<height;i++){
		for( j=0;j<width;j++){      
			 int value=matriz[i][j];
			 printf(" %d ",matriz[i][j]);
		}
		printf("\n");
	}
	for(n=0;n<width;n++){
		free(matriz[n]);
	}
	free(matriz);
}
int main(){
	char type[2];
	int width;
	int height;
	int limit;
	
	int i,j,n;
	
	gets(type);
	scanf("%d", &width);
	scanf("%d", &height);
	scanf("%d", &limit);
	
	
	if(strcmp("P2",type)==0)
        compactar(height,width,limit);
    else if(strcmp("P8",type)==0)
        descompactar(height,width,limit);
	
	
	getch(0);
	return 0;
}

