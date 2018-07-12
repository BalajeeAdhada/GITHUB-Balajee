#include<stdio.h>
int fact( int num)
{
if(num ==0)
return 1;
int result = num*fact(num-1);
printf("\nfactorial of %d is %d ", num,result);
return result;
}

int main()
{
int n;
scanf("%d", &n);
printf("\n %d",fact(n));

}

