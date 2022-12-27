#include<stdio.h>
void printArr(int* arr , int n){
    printf("The elments of array are -\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}

void reverse(int*arr , int n){
    int temp;
    for(int i=0;i<(n/2);i++){//for even set of numbers use (n/2 -1)and for odd use(n/2).
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    reverse(arr,11);
    printArr(arr,11);

    return 0;
}