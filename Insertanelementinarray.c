#include<stdio.h>
int main(){
    int pos,value,n;
    printf("Enter size of array");
    scanf("%d",&n);
    int arr[n];
    printf("Enetr elements of array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter position of digit you want to enter");
    scanf("%d",&pos);
    printf("Enter digit you want to enter");
    scanf("%d",&value);
    for (int i=0;i<pos;i++){
        printf("%d",arr[i]);
    }
    printf("%d",value);
    for(int i=pos;i<n;i++){
        printf("%d \t",arr[i]);
    }
    return 0;
}