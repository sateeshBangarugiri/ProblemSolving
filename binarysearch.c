#include <stdio.h>

int binarysearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (x < arr[mid])
            return binarysearch(arr, l, mid - 1, x);
        return binarysearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main()
{
    int arr[] = {5, 15, 25, 38, 49, 66, 89, 154};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 9;
    int result = binarysearch(arr, 0, n - 1, x);
    if (result == -1)
        printf("Oops! %d is not found", x);
    else
        printf("%d is found at %d", arr[result], result);
}