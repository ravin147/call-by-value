#include<stdio.h>
int swap(int *,int *);
main()
{
    int a=10,b=20;
    printf("The values are %d %d\n",a,b);
    swap(&a,&b);
    return 0;
}
int swap(int *a,int *b)
{
    int temp;
    temp= *a;
    *a = *b;
    *b = temp;
    printf("The swapped values are %d %d",*a,*b);
}

