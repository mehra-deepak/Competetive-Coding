#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p,*q;
    int i;
    p=(int*)malloc(5*sizeof(int));
    printf("\nEnter the Array Values:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&p[i]);
    }
    printf("\nThe Elements in p are:");
    for(i=0;i<5;i++)
    {
        printf("%d \n",p[i]);
    }

    printf("\nNew Array q of size double of p is created");
    q=(int*)malloc(10*sizeof(int));


    for(i=0;i<5;i++)
    {
        q[i]=p[i];
    }
    printf("\nThis is the address of p :%d",p);
    free(p);
    printf("\nNew Address of p will be assigned by q which is :%d",q);
    p=q;
    q=NULL;

    printf("\nThe element in p are:");

    for(i=0;i<5;i++)
    {
        printf("%d \n",p[i]);

    }
    p[6]=10;
    printf("\nThe Element in the 6th Position is:");
    printf("%d ",p[6]);



return 0;
}
