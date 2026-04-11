#include "Main.h"
#include <iostream>

using namespace std;

void print(const int *arr_ptr,int size);
int *apply_all(int *arr1_ptr, int size1, int *arr_ptr2,int size2);

int main() {

    int arr1[] = {1,2,3,4,5};
    int arr2[] = {10,20,30};
    int *res = nullptr;
    print(arr1,5);
    print(arr2,3);
    res = apply_all(arr1,5,arr2,3);
    print(res,15);
    delete[] res;

    return 0;

}
void print(const int *arr_ptr,int size)
{
    cout << "[ ";
    for (int i = 0 ; i < size ; i++) {
        cout << *(arr_ptr + i) << " ";
    }
    cout << "]\n";
}
int *apply_all(int *arr1_ptr, int size1, int *arr_ptr2,int size2) {
    if (arr1_ptr == nullptr || arr_ptr2 == nullptr) {
        return nullptr;
    }
    if (size1 <= 0 || size2 <= 0) {
        return nullptr;
    }
    int *results = nullptr;
    results = new int[size1*size2];
    int singleProduct = 1;
    int counter = 0;
    for (int i = 0 ; i < size2 ; i++) {
        for (int j = 0 ; j < size1 ; j++) {
            singleProduct = arr1_ptr[j] * arr_ptr2[i];
            results[counter] = singleProduct;
            counter++;
        }
    }
    return results;

}