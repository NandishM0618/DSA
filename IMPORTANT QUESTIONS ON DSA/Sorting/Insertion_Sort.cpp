// Insertion Sort is most efficient and can appilied for small sized array
#include <bits/stdc++.h>
using namespace std;
void InsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {20, 5, 40, 60, 10, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    InsertionSort(arr, n);
    printarray(arr, n);
    return 0;
}