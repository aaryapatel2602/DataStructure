#include<iostream>
using namespace std;

int main()
{
    int arr[50],limit,key;
    cout<<"Enter limit of an array:";
    cin>>limit;
    cout<<"Enter the values of array:";
    for(int i=0;i<limit;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the value you want to find:";
    cin>>key;
    int flag=0;
    for(int i=0;i<limit;i++)
    {
        if(arr[i]==key)
        {
            cout<<"The index at which "<<key<<" is located is:"<<i;
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"Entered value is invalid.";
    }
}