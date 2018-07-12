[200~
#include <stdio.h>
int main()
{
	int a=10;
	int *p=&a;
	int * *q=&p;
	printf("adress of q %u\n", &q);  
	printf("adress of p %u\n", q); 
	printf("adress of p %u\n", &p);
	printf("adress of a %u\n", &a);
	printf("adress of a %u\n", p);
	printf("adress of a %u\n", *q);
	printf("value at a %d\n", **q);
	printf("adress of a %u\n", *p);

	   return 0;
}
