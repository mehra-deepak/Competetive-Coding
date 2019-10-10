#include<stdio.h>


void display(int arr[],int n)
{
    int i;
    printf("\nThe elements in the array are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

void merge(int A[],int B[],int n,int m)
{
    int i,j,k,C[20];
    int len=m+n;
    printf("\nLength of Array C is:%d",len);
    while(i<m&&j<n)
    {
        if(A[i]<B[j])
        {
            C[k]=A[i];
            k++;
            i++;
        }
        else
        {
            C[k]=B[j];
            k++;
            j++;
        }
    }

    while(i<n);
    {
        C[k++]=A[i++];
    }
    while(j<m);
    {
        C[k++]=A[j++];
    }
    printf("The Sorted Array is:");
    for(i=0;i<len;i++)
    {
        printf("%d",C[i]);
    }
}


void main()
{
    int A[20],B[20],n,i,m;
    printf("\nEnter the length of the array A:");
    scanf("%d",&n);
    printf("\nEnter the element of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("\nEnter the length of the array B:");
    scanf("%d",&m);
    printf("\nEnter the element of the array:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&B[i]);
    }

    display(A,n);
    display(B,m);
    merge(A,B,n,m);


}

