#include<stdio.h>
#include<conio.h>
void selectsort(int arr[],int N){
    int key;
    for(int i=0;i<N-1;i++){
        key=i;
        for(int j=i+1;j<N;j++){
            if(arr[key]>arr[j]){
                key=j;
            }
        }
        int temp=arr[key];
        arr[key]=arr[i];
        arr[i]=temp;
    }
    printf("\nSorted array  : ");
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
}
void main(){
    int N;
    printf("Enter the size of array :");
    scanf("%d",&N);
    int arr[N];
    for(int i=0;i<N;i++){
        printf("Enter the element :");
        scanf("%d",&arr[i]);
    }

    printf("Unsorted array: ");
    for(int i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    selectsort(arr,N);
}