#include<stdio.h>
void printArr(int* arr , int n){
    printf("The elments of array are -\n");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}

int insertion(int arr[], int size , int element , int index , int capacity){
    if (size >= capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index] = element;
    return 1;
    
}

int main()
{
    int arr[50] = {9,4,8,0,2,3,1,73,32,15,16};
    int size = 11 , element , index ;
    printf("Enter the element you want to be inserted :\n");
    scanf("%d",&element);
    printf("Enter at what index you want it to be inserted :\n");
    scanf("%d",&index); 
    insertion(arr,size,element,index,100);
    size += 1;
    printArr(arr,size);

    
    return 0;
}