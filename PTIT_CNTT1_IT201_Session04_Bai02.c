#include <stdio.h>
#include <stdlib.h>

void search(int *arr, int *n) {
    int max = 0;
    int index = 0;
    for (int i =*n-1  ; i >= 0; i--) {
        if (arr[i]> max || arr[i]==max) {
            max = arr[i];
            index = i;
        }
    }
    printf("%d", index);
}
int main(void) {
    int n;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    search(arr,&n);
    return 0;
}
