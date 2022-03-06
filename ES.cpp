#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(int arr[],int  ,int key,int *c)
{
    int low=0,high=n-1;
    int mid=(low+high)/2;
    while(low<=high)
    {
        (*c)++;
        if(arr[mid]==key)
            return mid;
        else if(key>arr[mid])
            low=mid+1;
        else
            high=mid-1;
        mid=(low+high)/2;
    }
    return -1;

}
int ExponentialSearch(int arr[],int n ,int key,int *c)
{   
    if(key==arr[0])
        return 0;

    int i=1;
    while(i<n && a[i]<=key)
    {
        i=i*2;
        
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {    int n;
        int count=0;
            
        cin>>n;

        int v[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int key;

        cin>>key;

        int ind=ExponentialSearch(v,n,key,&count);

        if(ind==-1)
            cout<<"Not Present"<<endl;
        else
        {
            cout<<"Present "<<ind<<endl;
        }
        cout<<"no of comparisons :"<<count;
    }
    return 0;
}