#include<stdio.h>

void display(int A[],int length)
{
    printf("The elements in the array are:");
    for(int i=0;i<length;i++)
    {
        printf("%d ",A[i]);
    }
}

// for merging function

void merge(int A[],int B[],int n,int m)
{
    int i=0,j=0,k=0,C[50],length=m+n;

    while(k<length)
    {
            while(i<n && j< m)
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
            while(i<n)
            {
                C[k]=A[i];
                i++;
                k++;

            }
            while(j<m)
            {
                C[k]=B[j];
                j++ ;
                k++;

            }
    }

        printf("\n The Array after Merge is:");
        for(i=0;i<length;i++)
        {
            printf("%d ",C[i]);
        }

    }

    // For Union
void union_(int A[],int B[],int n,int m)
{
     int i=0,j=0,k=0,C[20];
     while(i<n && j<m)
     {
        if(A[i]<B[j])
        {
            C[k++]=A[i++];

        }
        else if(B[j]<A[i])
        {
            C[k++]=B[j++];

        }
        else
        {
            C[k++]=A[i++];
            j++;
        }

    }
    while(i<n)
    {
        C[k++]=A[i++];

    }
    while(j<m)
    {
        C[k++]=B[j++];
    }
    printf("\n The Array after Union is:");
    for(i=0;i<k;i++)
    {
        printf("%d ",C[i]);
    }



}

 void intersection_(int A[],int B[],int n,int m)
 {
     int i=0,j=0,k=0,C[20];
     int length=m+n;
     while(i<n && j<m)
     {
        if(A[i]<B[j])
        {

            i++;


        }
        else if(B[j]<A[i])
        {

            j++;

        }
        else
        {
            C[k++]=A[i++];
            j++;
        }

    }

    printf("\n The Array after Intersection is:");
    for(i=0;i<k;i++)
    {
        printf("%d ",C[i]);
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

    merge(arr_A,arr_B,n,m);



    //Performing the Union

    union_(arr_A,arr_B,n,m);


    intersection_(arr_A,arr_B,n,m);

}
