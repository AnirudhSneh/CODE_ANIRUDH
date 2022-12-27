#include<stdio.h>
void printArr(int* arr , int n){
    printf("The elments of array are -\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}

void insertionsort(int *arr , int n){
    int key, j;
    //loop for passes.
    for(int i=1; i <= n-1 ; i++){
        
        key = arr[i];
        j = i-1;

        //loop for each pass.

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{  //-1  0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10

   //   12 ,56 ,78 , 2 , 3 , 9 ,25 ,31 ,49 , 6 , 8


    int arr[] = {12,56,78,2,3,9,25,31,49,6,8};
    int n = 11;
    insertionsort(arr,n);
    printArr(arr,n);
    
    return 0;
}