#include<stdio.h>

int binarysearch(int arr[], int size, int element ){
int low;
int mid;
int high;
low = 0;
high= size-1;

while(low <= high){
    mid =(low+high)/2;
    if(arr[mid]==element){
        return mid;
    }
    if(arr[mid]<element){
        low = mid+1;
    }
    else {
        high = mid-1;
    }
}
return -1;
}

int main(){
int arr[]={1,2,3,4,5,6,7,8,9};
int size=sizeof(arr)/sizeof(int);
int element = 7;
int searchindex=binarysearch(arr,size,element);

printf("the element %d was found on index %d\n", element, searchindex);

return 0;

}
