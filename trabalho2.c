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
	int i,j,n;
	
	gets(type);
	scanf("%d", &width);
	scanf("%d", &height);
	scanf("%d", &limit);
	
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
	getch(0);
	return 0;
}

