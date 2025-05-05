#include <iostream>

int max(int* arr,int size){

    int max=arr[0];

    for(int i=1;i<size;i++){

        if(arr[i]>max) max=arr[i];

    }

    return max;

}

void countsort(int* arr,int size,int j){

    int a[100]={0};

    int count[10]={0};

    for(int i=0;i<size;i++){

        ++count[(arr[i]/j)%10];

    }

    for(int i=1;i<10;i++){

        count[i]=count[i]+count[i-1];

    }

    for(int i=size-1;i>=0;i--){

        a[--count[(arr[i]/j)%10]]=arr[i];

    }

    for(int i=0;i<size;i++){

        arr[i]=a[i];

    }

}

void radixsort(int* arr,int size){

    int m=max(arr,size);

    for(int i=1;m/i>0;i*=10){

        countsort(arr,size,i);

    }

}

int main()

{

    int arr[8]={654,6,3,523,76,65,3,4};

    radixsort(arr,8);

    for(int i=0;i<8;i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    return 0;

}