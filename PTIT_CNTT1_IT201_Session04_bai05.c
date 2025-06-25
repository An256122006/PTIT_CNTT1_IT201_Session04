#include <stdio.h>
#include <stdlib.h>
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
    int taget;
    scanf("%d",&taget);
    int min=0;
    int max=n-1;
    int flag=0;
    while (min<=max) {
        int mid=(min+max)/2;
        if(arr[mid]==taget) {
            flag=1;
            printf("phan tu co trong mang");
            break;
        }else if(arr[mid]>taget) {
            max=mid-1;
        }else if(arr[mid]<taget) {
            min=mid+1;
        }
    }
    if(flag==0) {
        printf("phan tu ko co trong mang");
    }
    return 0;
}