#include<stdio.h>
void same_element(int *arr , int n){
    int key,j;
    for(int i=0;i<n;i++){
        key = arr[i];

        for(j=i+1;j<n;j++){
            if(arr[j]==key){
                
                printf("The element %d is repeated.\n",arr[j]);
            }
                
        }
    }
    
}

int main()
{
    int n ;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    same_element(arr,n);
    
    return 0;
}