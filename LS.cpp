#include<iostream>
#include<vector>
using namespace std;

int linearSearch(int arr[],int n ,int key,int *c)
{
    for(int i=0;i<n;i++)
    {
        (*c)++;
        if(key==arr[i])
        return i;
    }
    return -1;

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

        int ind=linearSearch(v,n,key,&count);

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