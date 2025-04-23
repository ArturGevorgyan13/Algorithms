#include <iostream>

void swap(int& a,int& b){

    int tmp=a;

    a=b;

    b=tmp;

}

void sort(int* arr,int size){

    for(int i=0;i<size-1;i++){

        bool swapped=false;

        for(int j=0;j<size-1-i;j++){

            if(arr[j]>arr[j+1]){

                swap(arr[j],arr[j+1]);

                swapped=true;

            }

        }

        if(!swapped) break;

    }

}

int main()

{

    const int size=7;

    int arr[size]={3,1,1,2,-99,0,13};

    sort(arr,size);

    for(int i=0;i<size;i++){

        std::cout<<arr[i]<<std::endl;

    }

    return 0;

}