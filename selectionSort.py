import random

def selection_sort(arr):
    n = len(arr)
    for i in range(n-1):
        min_idx = i
        for j in range(i+1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        if min_idx != i:
            arr[i], arr[min_idx] = arr[min_idx], arr[i]

def random_array(size, min_range, max_range):
    return [random.randint(min_range, max_range) for _ in range(size)]

def print_arr(arr):
    print(" ".join(map(str, arr)))

def main():
    n = 50000
    min_range = 0
    max_range = 50000

    arr = random_array(n, min_range, max_range)

    print("Original array:", end=" ")
    print_arr(arr)

    selection_sorted_arr = arr.copy()
    selection_sort(selection_sorted_arr)
    print("Sorted array (Selection Sort):", end=" ")
    print_arr(selection_sorted_arr)

if __name__ == "__main__":
    main()
