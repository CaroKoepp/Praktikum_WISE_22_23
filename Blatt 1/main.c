#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){
/*	int x,y;
	printf("\n Etwas Arithmetik ...\n\n");
	printf("\t 1. Zahl eingeben:");
	scanf("%i", &x);
	printf("\t 2. Zahl eingeben:");
	scanf("%i", &y);
	printf("\n");
	printf("\t %i + %i ist %i\n", x, y, x+y);
	printf("\t %i - %i ist %i\n", x, y, x-y);
	printf("\t %i * %i ist %i\n", x, y, x*y);
	printf("\t %i / %i ist %i\n", x, y, x/y);
	printf("\t %i %% %i ist %i\n", x, y, x%y);
	return 0;*/
	int i;
	long l;
	float f;
	double d;
	d=100/3; f=d; l=f; i=l;
	printf("%f,%f,%d,%d\n",d,f,l,i);
	d=100/3.0; f=d; l=f; i=l;
	printf("%f,%f,%d,%d\n",d,f,l,i);
	d=(float)100/3; f=d; l=f; i=l;
	printf("%f,%f,%d,%d\n",d,f,l,i);

}
