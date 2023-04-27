#include <iostream>
using namespace std;

int BinarySearch(int n, int arr[], int key)
{
    int mid, start = 0, end = n;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
            mid = (start + end) / 2;
            
        }
        else{
            end=mid-1;
            mid=(start+end)/2;
        }
    }
    return -1;
}
int main()
{
    int arr[50], n, key;

    cout << "Enter size of array:";
    cin >> n;

    cout << "Enter elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter an element you want to search:";
    cin >> key;

    cout<<BinarySearch( n,  arr, key);
}