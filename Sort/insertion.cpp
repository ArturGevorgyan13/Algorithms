#include <iostream>

void sort(int* arr,int size){

    for(int i=1;i<size;i++){

        int tmp=arr[i];

        int j=i-1;

        while(j>=0 && arr[j]>tmp){

            arr[j+1]=arr[j];

            --j;

        }

        arr[j+1]=tmp;

    }

}

int main()

{

    const int size=7;

    int arr[size]={5,5,78,3,56,45,0};

    sort(arr,size);

    for(int i=0;i<size;i++){

        std::cout<<arr[i]<<std::endl;

    }

    return 0;

}  