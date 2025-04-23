#include <iostream>

int search(int* arr,int left,int right,int target){

    while(left<=right){

        int mid=left+(right-left)/2;

        if(arr[mid]==target) return mid;

        if(arr[mid]>target){

            right=mid-1;

        }

        else{
            
            left=mid+1;

        }

    }

    return -1;

}

int main()

{

    int arr[7]={3,4,5,34,55,67,89};

    std::cout<<search(arr,0,6,0);

    return 0;

}