#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n; 
	n = 17-2*7+9%6;
	printf("%i\n",n);
	n = (17-2)*(7+9)%6;
	printf("%i\n",n);
	n = (17-2)*((7+9)%6);
	printf("%i\n",n);
	n = ((((((17-2)*7)-9)*7)+9)%6);
	printf("%i\n",n);
	n = 17 -(2*(7+(9%6)));
	printf("%i\n",n);
	n = 17 /(5/3)*4;
	printf("%i\n",n);
	n = (17/5)*(5/17);
	printf("%i\n",n);
	
	printf("\n");
	
	float f;
	f = 17.0/(5/3)*4;
	printf("%f\n",f);
	f = (17.0/5)*(5/17);
	printf("%f\n",f);
	f = 1*(1.0/3)*3;
	printf("%f\n",f);
	f = 1.5e2 *1.5e2;
	printf("%f\n",f);
	f = 1.5e2 * 1.5e-2;
	printf("%f\n",f);
	f = 1.5e-2 * 1.5e-2;
	printf("%f\n",f);
	
	printf("\n");
	
	char c;
	c = 'a' + 5;
	printf("%c\n",c);
	c = '0'+9;
	printf("%c\n",c);
	c = '0'+9/2;
	printf("%c\n",c);
	c = '0'+9/2;
	printf("%c\n",c);
	c = '0'+'9';
	printf("%c\n",c);
	
	
	printf("\n");
	
	bool b; 
	c = '5';
	b = (c>= '0' && c <='9');
	printf("%d\n",b);
	b = (c>= 0 && c <=9);
	printf("%d\n",b);
	b = (c>= '0' || c <='9');
	printf("%d\n",b);
	b = (c>= 0 || c <= 9);
	printf("%d\n",b);
	
	printf("\n");
	
	int m = 44;
	m = 44>>	2;
	printf("%i\n",m);
	m = 44 << 1;
	printf("%i\n",m);
	m = 1 <<10; 
	printf("%i\n",m);
	m = 1 <<32;
	printf("%i\n",m);
	
	
	return 0;
}
