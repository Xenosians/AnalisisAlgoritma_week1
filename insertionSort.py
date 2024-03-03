import random

def insertion_sort(arr):
    n = len(arr)
    for i in range(1, n):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

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

    insertion_sorted_arr = arr.copy()
    insertion_sort(insertion_sorted_arr)
    print("Sorted array (Insertion Sort):", end=" ")
    print_arr(insertion_sorted_arr)

if __name__ == "__main__":
    main()
