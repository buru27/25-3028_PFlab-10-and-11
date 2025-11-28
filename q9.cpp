#include <stdio.h>

int rSearch(int arr[], int size, int target, int i) {
    if (i == size) return -1;
    if (arr[i] == target) return i;
    return rSearch(arr, size, target, i+1);
}

int main() {
    int arr[] = {3,9,2,8,1};
    printf("%d", rSearch(arr, 5, 8, 0));
}

