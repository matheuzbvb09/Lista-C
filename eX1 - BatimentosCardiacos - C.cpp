#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc, char *argv[]) {
	int mb;
	int x;
	int r;
	
	mb=31536000;
	
	printf("Digite os anos\n");
	scanf("%d",&x);
	
	r=mb*x;
	
	printf("A media de batimentos e:%d\n",r);
	
	system("pause");

	return 0;
}
