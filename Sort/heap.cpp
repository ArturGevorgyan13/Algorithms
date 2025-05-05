#include <iostream>
#include <algorithm>

void heapify(int* arr,int size,int index){

    int largest=index;

    int l=largest*2+1;

    int r=largest*2+2;

    if(l<=size-1 && arr[l]>arr[largest]){

        largest=l;

    }

    if(r<=size-1 && arr[r]>arr[largest]){

        largest=r;

    }

    if(largest!=index){

        std::swap(arr[largest],arr[index]);

        heapify(arr,size,largest);

    }

}

void heapsort(int* arr,int size){

    for(int i=size/2-1;i>=0;i--){

        heapify(arr,size,i);

    }

    for(int i=size-1;i>0;i--){

        std::swap(arr[0],arr[i]);

        heapify(arr,i,0);

    }

}

int main()

{

    int arr[8]={5,56,3,2,6,8,3,11};

    heapsort(arr,8);

    for(int i=0;i<8;i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    return 0;

}