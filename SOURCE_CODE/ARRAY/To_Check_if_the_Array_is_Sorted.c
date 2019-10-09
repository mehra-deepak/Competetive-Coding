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

void sorted(int arr[],int n)
{
    int i;
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            flag++;
        }
    }
    if(flag==0)
    {
        printf("\nArray is sorted");
    }
    else
    {
        printf("\nArray is not sorted");
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


    //Function
    sorted(A,n);
}
