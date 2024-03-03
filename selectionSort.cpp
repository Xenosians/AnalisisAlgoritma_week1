#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i = 0;
    while (i < n - 1)
    {
        int min_idx = i;
        int j = i + 1;
        while (j < n)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
            j++;
        }

        if (min_idx != i)
        {
            swap(arr[min_idx], arr[i]);
        }
        i++;
    }
};

void randomArray(int arr[], int size, int minRange, int maxRange)
{
    cout << "Size : " << endl;
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

    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArr(arr, n);

    return 0;
}