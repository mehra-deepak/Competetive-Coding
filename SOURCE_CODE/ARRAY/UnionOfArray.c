#include<stdio.h>

void display(int A[],int length)
{
    printf("The elements in the array are:");
    for(int i=0;i<length;i++)
    {
        printf("%d",A[i]);
    }
}

// For Union

void array_union(int A[],int B[],int n,int m)
{
    int C[50],i,j;
    length=m+n;
    for(i=0;i<n;i++)
    {
        C[i]=A[i];
    }
    for(i=0,j=0;i<m+n,j<m;i++,j++)
    {
        if(C[i]!=)
    }
}


int main()
{
    int arr_A[20],arr_B[20],i,n,m;
    printf("\nEnter the size of First Array:");
    scanf("%d",&n);
    printf("\nEnter the Array Elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr_A[i]);
    }

    printf("\nEnter the size of Second Array:");
    scanf("%d",&m);
    printf("\nEnter the Array Elements:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr_B[i]);
    }

    display(arr_A,n);

    display(arr_B,m);

//Perfprming the set operations



    //Performing the Union
    union(arr_A,arr_B,n,m);
}
