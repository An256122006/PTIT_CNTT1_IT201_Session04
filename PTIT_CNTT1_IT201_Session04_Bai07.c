#include <stdio.h>
#include <stdlib.h>
int main() {
 int n;
 scanf("%d",&n);
 int *arr = (int*)malloc(n*sizeof(int));
 for(int i=0;i<n;i++) {
  scanf("%d",&arr[i]);
 }
 int count=0;
 for(int i=0;i<n/2;i++) {
  if (arr[i]==arr[n-1-i]) {
   printf("cap doi xung (%d,%d)\n",arr[i],arr[n-1-i]);
   count++;
  }
 }
 if (count==0) {
  printf("ko co cap doi xung");
 }
}