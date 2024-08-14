#include<iostream>
using namespace std;
int main()
{
    int a[20], count=0, n;
    cout<<"enter size of array:";
    cin>>n;
    cout<<"enter the elements:";
    for(int i=0; i<n; i++)
    {   
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {   
        if(a[i]==0)
        {
            count++;
        }
    }
    cout<<"total zeros:"<<count;
    return 0;
}