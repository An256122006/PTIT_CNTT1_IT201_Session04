//
// Created by Trong An on 25/06/2025.
//
#include <stdio.h>
#include <stdlib.h>
int binarySearch(int arr[], int left, int right, int target) {
    if (left > right) return 0;
    int mid = (left + right) / 2;
    if (arr[mid] == target) return 1;
    if (arr[mid] > target)
        return binarySearch(arr, left, mid - 1, target);
    else
        return binarySearch(arr, mid + 1, right, target);
}
int main() {
    int n;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int)) ;
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-1-i;j++) {
            if(arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int target;
    scanf("%d",&target);
    int left=0;
    int right=n-1;
    if (binarySearch(arr, left, right, target)) {
        printf("Phan tu co trong mang.\n");
    } else {
        printf("Phan tu ko co trong mang.\n");
    }
    return 0;
}