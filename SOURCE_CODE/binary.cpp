#include <iostream>

using namespace std;
void binary(int arr[],int x,int n)
{
    int l,u,mid;
    l=0;
    u=n-1;
    int flag=0;

    while(l<=u)
    {
        mid=(l+u)/2;
        if(arr[mid]==x)
        {
            cout<<"\nElement found in index:"<<mid+1;
            flag++;
            break;
        }
        if(arr[mid]<x)
        {
            l=mid+1;
        }
        if(arr[mid]>x)
        {
            u=mid-1;
        }
    }
    if(flag==0)
    {
        cout<<"\nElement not found";
    }
}

int main()
{

    int arr[20];
    int i,n,x;
    cout<<"\nEnter the elements in the Array:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"\nThe elements in the array are:";
    for(i=0;i<n;i++)
    {
        cout<<" "<<arr[i];

    }

    cout<<"\nEnter the element you want to search for:";
    cin>>x;
    binary(arr,x,n);
    return 0;
}
