#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    int flag = 0;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int)) ;
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int taget;
    scanf("%d",&taget);
    for (int i=0;i<n;i++) {
        if (arr[i]==taget) {
            flag=1;
            printf("%d ",i);
        }
    }
    if (flag==0) {
        printf("phan tu ko co treong mang");
    }
    return 0;
}
