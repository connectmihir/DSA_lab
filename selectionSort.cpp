#include <iostream>

using namespace std;

void Selection_sort(int arr[], int size){

    for(int i=0;i<size-1;i++){
        bool flag =false;
        for(int j=0; j<size-1-i;j++){

            if(arr[j]>arr[j+1]){
                flag= true;

                swap(arr[j], arr[j+1]);
            }
            
        }

        if(!flag){
                break;
            }
    }


    

}

int main(){
    int arr[7]={10,3,40,20,50,80,70};

    int size=sizeof(arr)/sizeof(arr[0]);

    Selection_sort(arr, size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    


}