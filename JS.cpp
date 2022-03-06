#include<iostream>
#include<math.h>
using namespace std;
int jumpSearch(int array[], int size, int key,int *c) {
   int start = 0;
   int end = sqrt(size); 
   while(array[end] <= key && end < size) {
      (*c)++;
      start = end; 
      end += sqrt(size);
      if(end > size - 1)
         end = size;
   }

   for(int i = start; i<end; i++) { 
      (*c)++;
      if(array[i] == key)
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

        int ind=jumpSearch(v,n,key,&count);

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