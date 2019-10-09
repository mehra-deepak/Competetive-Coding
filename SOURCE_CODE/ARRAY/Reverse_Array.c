#include<stdio.h>
#include<stdlib.h>

void display(int arr[],int n)
{
    int i;
    printf("\nThe elements in the array are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

// For Reversing the Array

// Method 1
void Reverse(int A[],int n)
{
    int i,j,B[20];
    for(i=n-1,j=0;i>=0;i--,j++)
    {
        B[j]=A[i];
    }
    printf("\nThe Reversed elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",B[i]);
    }

}

// Second Method
void Reverse2(int A[],int n)
{
    int i,j,temp;
    i=0;
    j=n-1;
    for(i=0,j=n-1;i>j;i++,j--)
    {
        temp=A[i];
        A[i]=A[j];
        A[j]=temp;
    }
    printf("\nhe Element in Reversed order after Swap Method are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}
void main()
{
    int A[20],n,i;
    printf("\nEnter the length of the array:");
    scanf("%d",&n);
    printf("\nEnter the element of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    display(A,n);

    //For Reverse

    Reverse(A,n);
    Reverse2(A,n);
}
