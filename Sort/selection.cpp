#include <iostream>

void swap(int& a,int& b){

    int tmp=a;

    a=b;

    b=tmp;

}

void sort(int* arr,int size){

    int min;

    for(int i=0;i<size-1;i++){

        min=i;

        for(int j=1+i;j<size;j++){

            if(arr[j]<arr[min]){

                min=j;

            }

        }

        swap(arr[i],arr[min]);

    }

}

int main()

{

    const int size=7;

    int arr[size]={3,99,1,7,7,9,0};
    
    sort(arr,size);

    for(int i=0;i<size;i++){

        std::cout<<arr[i]<<std::endl;

    }

    return 0;

}