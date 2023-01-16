#include<stdio.h>

int linearsearch(int arr[], int size , int element ){
    for (int i=0 ; i<size;i++){
        if(arr[i]==element){
            return i;
        }

    }
    return -1;
}

int main(){
    int arr[]={34,76,99,7,2,98,56,69,87,6748};
    int size = 10;
    int element= 69;
    int searchindex= linearsearch(arr,size,element);

    printf("The element %d is found on index %d\n", element , searchindex);

    return 0;
}
