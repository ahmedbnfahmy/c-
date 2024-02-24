
#include <vector>
#include <iostream>
using namespace std;




int applyAll(int arr1[],size_t size1,int arr2[],size_t size2);
void print(int arr[],size_t size);
int main (){


    int arr1[]{1,2,3,4,5};
    int arr2[]{10,20,30};
    size_t size1 = sizeof(arr1);
    size_t size2 = sizeof(arr2);
    int *result = applyAll(arr1,size1,arr2,size2);
    print(result,sizeof(result));



    return 0;
}
int applyAll(int arr1[],size_t size1,int arr2[],size_t size2){
    int *resultPtr {nullptr};
    resultPtr =  new int [size1*size2];
    for (auto i :arr2){
        for (auto j : arr1){
            resultPtr.push_back(i * j);
        };
    };
    return resultPtr;

};

void print(int arr,size_t size){
    string brackits {"[","]"};
    for (auto i :brackits){
        cout<< i;
    for (size_t i {0};i < size ;++i){
        cout << j;
    };
      };
}