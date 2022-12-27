#include<stdio.h>
void printArr(int* arr , int n){
    printf("The elments of array are -\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}

int deletion(int arr[], int size , int index , int capacity){
//int element and int capacity are not required to run this code.

    if (size >= capacity){//this line is not required.
        return -1;
    }
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    
    return 1;
    
}

int main()
{
    int arr[50] = {9,4,8,0,2,3,1,73,32,15,16};
    int size = 11 , index ;
    printf("Enter  which index element you want to be deleted :\n");
    scanf("%d",&index); 
    deletion(arr,size,index,100);
    size -= 1;
    printArr(arr,size);

    
    return 0;
}