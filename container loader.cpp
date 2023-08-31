#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, m, k;
    int i, j, temp, total = 0;
    printf("Enter the number of containers: ");
    scanf("%d", &n);
    printf("Enter the number of items: ");
    scanf("%d", &m);
    printf("Enter the number of loaders: ");
    scanf("%d", &k);
    int arr[n]; 
    for (i = 0; i < n; i++) {
        arr[i] = rand() % m + 1;
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int loaders[k];
    for (i = 0; i < k; i++) {
        loaders[i] = 0;
    }
    int loaderIndex = 0;
    for (i = n-1; i >= 0; i--) {
        loaders[loaderIndex] += arr[i];
        loaderIndex = (loaderIndex + 1) % k;
    }
    for (i = 0; i < k; i++) {
        total += loaders[i];
    }
    printf("Number of items loaded into each loader:\n");
    for (i = 0; i < k; i++) {
        printf("Loader %d: %d\n", i+1, loaders[i]);
    }
    printf("Total number of items loaded: %d\n", total);
    
    return 0;
}
