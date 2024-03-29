// Hoare partition method better than lomuto and Naive
#include <bits/stdc++.h>
using namespace std;
int HoarePartition(int arr[], int l, int h)
{
    int pivot = arr[l];
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
        {
            return j;
        }
        swap(arr[i], arr[j]);
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
    int arr[] = {5, 3, 8, 4, 2, 1, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    HoarePartition(arr, 0, n - 1);
    for (auto x : arr)
        cout << x << " ";
    return 0;
}