#include <iostream>

void swap(int& a,int& b){

    int tmp=a;

    a=b;

    b=tmp;

}

int partition(int* arr,int left,int right){

    int pivot=arr[left];

    int start=left;

    int end=right;

    while(start<end){

        while(arr[start]<=pivot){

            start++;

        }

        while(arr[end]>pivot){

            end--;

        }

        if(start<end){

            swap(arr[start],arr[end]);

        }

    }

    swap(arr[left],arr[end]);

    return end;

}

void sort(int* arr,int left,int right){

    if(left<right){

        int res=partition(arr,left,right);

        sort(arr,left,res-1);

        sort(arr,res+1,right);

    }

}

int main()

{

    const int size=7;

    int arr[size]={5,3,12,0,1,2,5};

    sort(arr,0,size-1);

    for(int i=0;i<size;i++){

        std::cout<<arr[i]<<std::endl;

    }

    return 0;

}