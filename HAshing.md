# Hashing 

## Question 2 : Maximum Frequency Numbers
Solution :
 ```
 #include<iostream>
#include<unordered_map>

using namespace std;

void max_frequency(int arr[],int n)
{
    unordered_map<int,int> umap;
    for(int i=0;i<n;i++)
    {
        if(umap.count(arr[i])==0)
        {
            umap[arr[i]]=1;
        }
        else
        {
            umap[arr[i]]++;
        }
    }
    int ele=arr[0];
    int maxx = 0;

    for(auto i=umap.begin();i!=umap.end();i++)
    {
        cout<<i->first<<"\t"<<i->second<<endl;
    }

    for(auto i=umap.begin();i!=umap.end();i++)
    {
        if(maxx< i->second)
        {
            maxx = i->second;
            ele=i->first;
        }

    }
    cout<< maxx <<"\t"<<ele;

}
int main()
{
    int arr[51]= {1,2,3,4,8,18,29,12,81,1,2,3,1,3,2,67,2,1,2,1,2,31,3,2,1};
    int n=25;
    max_frequency(arr,n);

}

 
 ```
## Question 2 : Print Intersection Of two Arrays
Solution :
```
#include<iostream>
#include<unordered_map>
using namespace std;

void intersection(int arr[],int n, int arr1[],int m)
{
    unordered_map<int,bool> umap;
    for(int i=0;i<n;i++)
    {
        if(umap.count(arr[i])==0)
        {
            umap[arr[i]]=1;
        }
    }

    int i=0;
    while(i<m)
    {
        if(umap.count(arr1[i])>0)
        {
            cout<<arr1[i]<<endl;
        }
        i++;
    }




}

int main()
{
    int arr[20] ={1,2,3,4,5,6,7,8,9,10};

    int n=10;

    int arr1[20]= {1,2,3,4,5,12,14,14,12,12};

    int m=10;

    intersection(arr,n,arr1,m);
}

```
