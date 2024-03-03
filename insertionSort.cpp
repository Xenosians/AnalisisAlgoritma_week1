#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void randomArray(int arr[], int size, int minRange, int maxRange)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % (maxRange - minRange + 1) + minRange;
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

int main()
{
    int n, minRange, maxRange;
    n = 50000;
    minRange = 0;
    maxRange = 500000;

    int *arr = new int[n];

    srand(static_cast<unsigned int>(time(0)));
    randomArray(arr, n, minRange, maxRange);

    cout << "Original array: ";
    printArr(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printArr(arr, n);

    delete[] arr;

    return 0;
}
