#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A[5][6];
    int i,j;
    printf("\nEnter the Array Element:");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",A[i][j]);

        }
        printf("\n");
    }




    return 0;
}
