#include <stdio.h>
#include <stdlib.h>

int main() {
	int cont=0, *num = (int *) malloc(sizeof(int)*5);

	while(scanf("%d",num+cont)) {
		cont++;
		if (cont%5 == 0){
            num = (int *) realloc(num,sizeof(int)*(5+cont));
		}
	}
}
