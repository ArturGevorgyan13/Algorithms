#include <iostream>

int max(int* arr,int size){

    int max=arr[0];

    for(int i=1;i<size;i++){

        if(arr[i]>max){

            max=arr[i];

        }

    }

    return max;

}

void sort(int* arr,int size){

    int m=max(arr,size);

    int count[m+1]={0};

    for(int i=0;i<size;i++){

        count[arr[i]]++;

    }

    for(int i=1;i<=m;i++){

        count[i]=count[i]+count[i-1];

    }

    int tarr[size]={0};

    for(int i=size-1;i>=0;i--){

        tarr[--count[arr[i]]]=arr[i];

    }

    for(int i=0;i<size;i++){

        arr[i]=tarr[i];

    }

}

int main()

{

    const int size=7;

    int arr[size]={1,0,1,2,1,0,2};

    sort(arr,size);

    for(int i=0;i<size;i++){

        std::cout<<arr[i]<<std::endl;

    }

    return 0;

}