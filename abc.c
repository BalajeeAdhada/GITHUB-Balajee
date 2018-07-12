#include<stdio.h>
int add (int x, int y )
{
        int result= x+y;
        return result;
}
int main()
{
        int a=10, b=20;
        int *(*fp)(int , int ) = &add; //or int *(*fp)=add; function pointer declaration
        int x;
        x=(*fp)(a,b); // function calling
        printf("\nresult of add operation is %d",x);

}
