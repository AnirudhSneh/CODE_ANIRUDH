#include<stdio.h>
void printArr(int* arr , int n){
    printf("The elments of array are -\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}

int main()
{ 
    int arr[] = {1,2,3,6,7,0,9,15,16};
    int n = sizeof(arr)/sizeof(arr[0]);//size of (arr)=36{as 4*9} and size of arr[0]=4.
    
    printArr(arr,n);
    
    return 0;
}