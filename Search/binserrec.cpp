#include <iostream>

int search(int* arr,int left,int right,int target){

    if(left>right) return -1;

    int mid=left+(right-left)/2;

    if(arr[mid]==target){

        return mid;

    }

    if(arr[mid]>target){

        return search(arr,left,mid-1,target);

    }

    return search(arr,mid+1,right,target);

}

int main()

{

    int arr[7]={3,4,5,78,99,100,105};

    std::cout<<search(arr,0,6,5); 

    return 0;

}