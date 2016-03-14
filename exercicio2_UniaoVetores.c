#include<stdlib.h>
#include<stdio.h>

int uniao(int quantA,int *vet1,int quantB,int *vet2){
	int i, *vet3;
	vet3 = (int*) malloc((quantA+quantB)*sizeof(int));
	for(i=0;i<quantA;i++){
		vet3[i]=vet1[i];
	}
	for(i=0;i<(quantA+quantB);i++){
		vet3[quantA+i]=vet2[i];
	}
	printf("\n\nUniao dos vetores!\n\n");
	printf("Vetor 3: |");
	for(i=0;i<(quantA+quantB);i++){
		printf(" %i |",vet3[i]);
	}
	printf("\n\n");
}

int main(){
	int quantA,quantB,i,*vet1,*vet2;

	printf("Informe a quantidade de valores para o primeiro Vetor: ");
	scanf("%i",&quantA);
	vet1 = (int*) malloc(quantA*sizeof(int));
	for(i=0;i<quantA;i++){
		printf("Informe o %d valor do primeiro vetor: ",i+1);
		scanf("%d",&vet1[i]);
	}
	printf("\n\nInforme a quantidade de valores para o segundo Vetor:");
	scanf("%d",&quantB);
	vet2 = (int*) malloc(quantB*sizeof(int));
	for(i=0;i<quantB;i++){
		printf("Informe o %d valor do segundo vetor: ",i+1);
		scanf("%d",&vet2[i]);
	}
	uniao(quantA,vet1,quantB,vet2);
	return(0);
}
