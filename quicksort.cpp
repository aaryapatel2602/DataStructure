#include<iostream>
#include<algorithm>
using namespace std;

int Partition(int a[], int l, int h)
{
    int i=l;
    int j=h;
    int pivot=a[l];
    
    while (i<j)
    {
        while(a[i]<= pivot)
        {
            i++;
        }
        while(a[j]>pivot)
        {
            j--;
        }
        if (i<j)
        {
            swap(a[i], a[j]);
        }
    }
    swap(a[l], a[j]);
    return j;
}

void QuickSort(int a[], int l, int h)
{  
    if(l<h)
    {
        int pivot= Partition(a, l, h);
        QuickSort(a, l, pivot-1);
        QuickSort(a, pivot+1, h);
    }
}

void display(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int a[50];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    QuickSort(a, 0, n-1);
    cout<<"Sorted array: ";
    display(a, n);
    return 0;
}
