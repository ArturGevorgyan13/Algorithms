#include <iostream>
#include <algorithm>

void shellsort(int* arr,int size){

    for(int gap=size/2;gap>0;gap/=2){

        for(int j=gap;j<size;j++){

            for(int i=j-gap;i>=0;i-=gap){

                if(arr[i+gap]>arr[i]){

                    break;

                }

                else{
                 
                    std::swap(arr[i+gap],arr[i]);

                }    

            }

        }

    }

}

int main()

{

    int arr[8]={3,5,544,21,4,5,1,3};

    shellsort(arr,8);

    for(int i=0;i<8;i++){

        std::cout<<arr[i]<<" ";

    }

    std::cout<<std::endl;

    return 0;

}