#include<stdio.h>
#include<stdlib.h>

// Defining the user defined data typed Structure

struct Array
{
    int *A;
    int size;
    int length;
};

// FUNCTION TO DISPLAY THE CONTENT OF THE ARRAY

void Display(struct Array arr)
{
    int i;
    printf("\nElements in the array are:");
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}

// FUNCTION TO APPEND ELEMENT IN THE LAST OF THE ARAAY

// Here we are passing the argument arr whose type is Structure Array ,which pretty much means that it is treating the thing as a datatype that we have defined #Structure= User_Defined_Datatype

// Since in the end we will have tp modify the length of the original array so we are using call by address type function calling.
//A pointer to a class/struct uses ‘->'(arrow operator) to access it’s members whereas a reference uses a ‘.'(dot operator)

void append(struct Array *arr,int x)
{
    if(arr->length<arr->size)
        arr->A[arr->length]=x;
    arr->length++;

}

// Inserting at any given index

void insert(struct Array *arr,int index,int x)
{
    int i;
    if(index>=0 && index<=arr->length)
    {
        for(i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}

// Deletion from a given index

void Delete(struct Array *arr,int index)
{
    int i,x=0 ;
    if(index>=0 && index<arr->length)
        x=arr->A[index];
    for(i=index;i<arr->length-1;i++)
    {
        arr->A[i]=arr->A[i+1];

    }
    arr->length--;

    printf("\nElement Deleted from index %d is:%d",index,x);

}

// For Linear Search

void L_search(struct Array arr, int x)
{
    int i;
    int flag=0;
    for(i=0;i<arr.length;i++)
    {
        if(x==arr.A[i])
        {
            printf("\nElement %d found at index:%d",x,i);
            flag++;
        }
    }
    if(flag==0)
        printf("\nElement Not Found");
// Or instead of using flag we can also return -1 index(invalid index)
}

// For Binary Search

void B_search(struct Array arr,int x)
{
    int lower,upper,mid,flag=0;
    lower=0;
    upper=arr.length-1;
    while(lower<=upper)
    {
        mid=(lower+upper)/2;
        if(x==arr.A[mid])
        {
            printf("\nElement Found at %d",mid);
            flag++;
            break;
        }
        else if(x<arr.A[mid])
        {
            upper=mid-1;
        }
        else
        {
            lower=mid+1;
        }
    }
    if(flag==0)
    {
        printf("\nElement not found.");

    }


}

// For get

void get(struct Array arr,int x)
{
    printf("\nThe element in the index %d is %d",x,arr.A[x]);
}

// For Set

void set(struct Array arr,int index,int x)
{

    int i;
    arr.A[index]=x;
    printf("\nThe new value at index %d is %d",index,x);
    printf("The array Element after setting are:");
    for(i=0;i<arr.length;i++)
    {
        printf("%d",arr.A[i]);
    }

}

// FOR FINDING THE MAXIMUM ELEMENT

void max(struct Array arr)
{
    int i,max=arr.A[0];
    for(i=0;i<arr.length;i++)
    {
        if(max<arr.A[i])
        {
            max=arr.A[i];
        }
    }
    printf("\nThe maximum element of the array is:%d",max);
}

// For minimum

void min(struct Array arr)
{
    int i,min=arr.A[0];
    for(i=0;i<arr.length;i++)
    {
        if(min>arr.A[i])
        {
            min=arr.A[i];
        }
    }
    printf("\nThe minimum element of the array is:%d",min);
}

// For Sum

void sum(struct Array arr)
{
    int sum=0,i;
    for(i=0;i<arr.length;i++)
    {
        sum=sum+arr.A[i];
    }
    printf("\nThe sum of the elements present in the array is:%d",sum);
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

// For Append

    printf("\nEnter the element you want to append:");
    scanf("%d",&x);
    append(&arr,x);
    printf("\nAfter Appending the elements in the array are:");
    Display(arr);

// For Insert

    printf("\nEnter the place you want to insert the element:");
    scanf("%d",&index);
    printf("%d\nEnter the element you want to insert:");
    scanf("%d",&x);
    insert(&arr,index,x);
    printf("The elements in the array after the insertion are:");
    Display(arr);

// For Deletion

    printf("\nEnter the index you want to delete from:");
    scanf("%d",&index);
    Delete(&arr,index);

// Linear Search

    printf("\nEnter the element you want to search for:");
    scanf("%d",&x);
    L_search(arr,x);

// Binary Search Algorithm

    printf("\nLets Search Elements using Binary Search this time,enter the element:");
    scanf("%d",&x);
    B_search(arr,x);

// Small Functions In Array

    //1 ) GET FUNCTION ---> Take the index and return tbe element

    printf("\nEnter the place you want the element from:");
    scanf("%d",&x);
    get(arr,x);

    //2 ) SET FUNCTION ---> Take the index and replace with rhe given value

    printf("\nEnter the index you want to set the value at:");
    scanf("%d",&index);
    printf("\nEnter the value you want to set:");
    scanf("%d",&x);
    set(arr,index,x);

    //3 ) For Finding the Max

    max(arr);

    //4 ) For Finding the Min

    min(arr);

    //5) For Finding the sum of the elements in the array

    sum(arr);








    return 0;


}
