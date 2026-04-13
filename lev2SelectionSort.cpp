#include <iostream>

using namespace std;
void Binary_search(int arr[], int size, int key)
{

    int l = 0;
    int r = size - 1;

    int mid;

    while (l <=r)
    {
        mid = (l + r) / 2;

        if (key < arr[mid])
        {
            r = mid - 1;
        }

        else if (key > arr[mid])
        {
            l= mid + 1;
        }
        if (key == arr[mid])
        {
            cout<<"The position of key is:"<<mid;
            return;
        }
    }

    
}

        void sort(int arr[], int size)
        {

            for (int i = 0; i < size; i++)
            {

                bool flag=false;
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (arr[j] > arr[j + 1])
                    {
                        flag= true;
                        swap(arr[j], arr[j + 1]);
                    }
                }

                if(!flag){
                    break;
                }
            }

            
        }

        int main()
        {

            int arr[7] = {10, 3, 40, 20, 50, 80, 70};

            int size = sizeof(arr) / sizeof(arr[0]);

            sort(arr, size);

            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }

            int key = 3;
            cout<<endl;

            Binary_search(arr,7,3);

            
        }