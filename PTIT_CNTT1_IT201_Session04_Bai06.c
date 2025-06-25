#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct SinhVien{
    int id;
    char name[50];
    int age;
};

typedef struct SinhVien SinhVien;
int main() {
    int n;
    int flag=0;
    scanf("%d",&n);
    SinhVien user[n];
    for(int i=0;i<n;i++) {
        printf("id:");
        scanf("%d",&user[i].id);
        getchar();
        printf("name:");
        fgets(user[i].name,sizeof(user[i].name), stdin);
        user[i].name[strcspn(user[i].name, "\n")] = '\0';
        printf("age:");
        scanf("%d",&user[i].age);
    }
    int taget;
    scanf("%d",&taget);
    for(int i=0;i<n;i++) {
        if(user[i].id==taget) {
            flag=1;
            printf("id: %d\n", user[i].id);
            printf("name: %s\n", user[i].name);
            printf("age: %d\n", user[i].age);
        }
    }
    if(flag==0) {
        printf("sinh vien ko ton tai");
    }
}