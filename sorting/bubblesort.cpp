#include <iostream>
using namespace std;

int BubbleSort(int n, int arr[])
{
    int n, arr[50];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i + 1])
        {
            int temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
        else
        {
            
        }
    }
}
int main()
{
    int n, arr[50];

    cout << "Enter size of array:";
    cin >> n;

    cout << "Enter elements of the array:";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << BubbleSort(n, arr);
}