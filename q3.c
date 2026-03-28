#include <stdio.h>

int main() {
    int arr[5] = {4, 5, 2, 10, 8};
    int n = 5;

    for(int i = 0; i < n; i++) {
        int next = -1;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                next = arr[j];
                break;
            }
        }

        printf("%d -> %d\n", arr[i], next);
    }

    return 0;
}