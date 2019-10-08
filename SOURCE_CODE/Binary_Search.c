#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements in the array are:");
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}

// For Binary Search

void B_search(struct Array arr,int x)
{
    int l,h,mid,flag=0;
    l=0;
    h=arr.length-1;
    while(l<=h)
    {
        mid=(l+h)/2;
        printf("%d",mid);
        if(x==arr.A[mid])
        {
           // printf("Element Found at %d",mid);

            flag++;
        }
        else if(x<arr.A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    if(flag==0)
    {
        printf("Element not found.");
    }


}

// MAIN FUNCTION

int main()
{
    struct Array arr; //Array Variable
    int i,n,x,index;
    printf("\nEnter the size of the array:");
    scanf("%d",&arr.size);
    arr.A=(int*)malloc(arr.size*sizeof(int));
    arr.length=0;
    printf("\nEnter the length of the array:");
    scanf("%d",&n);
    printf("\nEnter the elements of the array:");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr.A[i]);
    }
    arr.length=n;

    Display(arr);


    printf("\nLets Search Elements using Binary Search this time,enter the element:");
    scanf("%d",&x);
    B_search(arr,x);
}





