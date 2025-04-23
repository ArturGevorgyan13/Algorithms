#include <iostream>

void merge(int* arr,int left,int mid,int right){

    int size1=mid-left+1;

    int size2=right-mid;

    int leftarr[size1];

    int rightarr[size2];

    for(int i=0;i<size1;i++){

        leftarr[i]=arr[left+i];

    }

    for(int i=0;i<size2;i++){

        rightarr[i]=arr[mid+1+i];

    }

    int i=0;

    int j=0;

    int k=left;

    while(i<size1 && j<size2){

        if(leftarr[i]<rightarr[j]){

            arr[k++]=leftarr[i++];

        }

        else arr[k++]=rightarr[j++];

    }

    while(i<size1){

        arr[k++]=leftarr[i++];

    }

    while(j<size2){

        arr[k++]=rightarr[j++];

    }

}

void sort(int* arr,int left,int right){

    if(left<right){

        int mid=left+(right-left)/2;

        sort(arr,left,mid);

        sort(arr,mid+1,right);

        merge(arr,left,mid,right);

    }

}

int main()

{

    const int size=7;

    int arr[size]={45,3,7,1,0,5,3};

    sort(arr,0,size-1);

    for(int i=0;i<size;i++){

        std::cout<<arr[i]<<std::endl;

    }

    return 0;

}