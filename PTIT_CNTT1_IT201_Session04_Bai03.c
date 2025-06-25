#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int index=0;
    for(int i=0;i<n;i++) {
        if(arr[i]<min) {
            min=arr[i];
            index=i;
            break;
        }
    }
    printf("%d",index);
    return 0;
}