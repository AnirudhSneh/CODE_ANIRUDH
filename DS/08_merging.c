#include<stdio.h>
void printArr(int* arr , int n){
    printf("The elments of array are -\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}

void merge(int arrA[] , int arrB[] , int arrC[] , int m , int n ){
    int i, j ,k ;
    i=j=k=0;
    while(i<m && j<n){
        if(arrA[i] < arrB[j]){
            arrC[k] = arrA[i];
            i++,k++;
        }
        else{
            arrC[k] = arrB[j];
            j++,k++;
        }
    }
    while(i<m){
        arrC[k] = arrA[i];
        i++,k++;
    }
    while(j<n){
        arrC[k] = arrB[j];
        j++,k++;
    }
}

int main()
{
    int m,n;
    printf("Enter the size of array A:\n");
    scanf("%d",&m);
    int arrA[m];
    printf("Enter the elements of array A :\n");
    for(int i=0;i<m;i++){
        scanf("%d",&arrA[i]);
    }
    printf("Enter the size of array B :\n");
    scanf("%d",&n);
    int arrB[n];
    printf("Enter the elements of array B :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arrB[i]);
    }
    int arrC[m+n];

    merge(arrA,arrB,arrC,m,n);
    printArr(arrC,m+n);
    return 0;
}