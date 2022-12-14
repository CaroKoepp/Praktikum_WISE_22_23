#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]){

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
