#include <iostream>

using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void searchsomething(int arr[], int n)
{
    int i = 0;
    while (arr[i] != n && i != sizeof(arr)){
        i++;
    }
    if (arr[i] == n){
        cout << "Found : " << arr[i];
    }
    else{
        cout << "Not Found";
    }
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);
    searchsomething(arr, 19);

    return 0;
}
