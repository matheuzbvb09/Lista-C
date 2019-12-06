#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n,maior,soma; 
	i=0; 
	printf("Digite quatro numeros: "); 
	scanf("%d",&n); 
	maior = n; 
	soma=n; 
	while(i<3){ 
		scanf("%d",&n); 
		if(n>maior) maior = n; 
		soma=soma+n; 
		i++; 
	} 
	soma=soma-maior; 
	printf("%d\n",soma); 
	system("pause"); 

	
	return 0;
}
