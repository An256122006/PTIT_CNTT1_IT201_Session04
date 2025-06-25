#include <stdio.h>
#include <stdlib.h>

void search(int *arr, int *n) {
    int check;
    scanf("%d",&check);
    int flag=-1;
    for(int i=0;i<*n;i++) {
        if(arr[i]==check) {
            flag=i;
            printf("%d ",i);
            return;
        }
    }
    if(flag==-1) {
        printf("khong tim thay phan tu\n");
    }
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
