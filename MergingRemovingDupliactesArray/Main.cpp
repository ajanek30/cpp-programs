
#include <iostream>
#include <algorithm>
#include "Main.h"
using namespace std;

int *merge(const int *const arr1, size_t size1, const int *const arr2, size_t size2,size_t &newSize);
void print(const int *const arr, size_t size);
int  *removeDuplicates(int *arr,const size_t size,size_t &newSize);
int main() {
    int arr1[4] = {1,3,5,7};
    int arr2[5] = {2,3,6,8,10};
    size_t newSize1 = 0;
    size_t newSize2 = 0;
    int *mergedArr = merge(arr1, 4, arr2, 5,newSize1);
    print(mergedArr, newSize1);
    cout << endl;
    int *filteredArr = removeDuplicates(mergedArr, 9, newSize2);
    print(filteredArr, newSize2);
    delete[] mergedArr;
    delete[] filteredArr;


    return 0;
}
int *merge(const int *const arr1, size_t size1, const int *const arr2, size_t size2,size_t &newSize) {
    int counter = 0;
    newSize = size1 + size2;
    int *mergedArray = new int[size1 + size2];
    for (size_t i = 0 ; i < size1 ; i++)
        {
        mergedArray[counter] = arr1[i];
        counter++;
    }
    for (size_t i = 0 ; i < size2 ; i++) {
        mergedArray[counter] = arr2[i];
        counter++;
    }
    return mergedArray;
}
void print(const int *const arr, size_t size) {
    for (int i = 0 ; i < size; i++) {
        cout << arr[i] << " ";
    }
}
int *removeDuplicates(int *arr,const size_t size, size_t &newSize)
{
    if (arr == nullptr) {
        return nullptr;
    }
    sort(arr, arr + size);
    int uniqueNumbers = 1;
    int counter = 0;

    for (size_t i = 1 ; i < size; i++) {
        if (arr[i] != arr[i - 1] ) {
            uniqueNumbers++;
        }
    }
    newSize = uniqueNumbers;
    int *filteredArr = new int[uniqueNumbers];
    filteredArr[0] = arr[0];
    counter++;

    for (size_t i = 1 ; i < size ; i++) {

        if (arr[i] != arr[i - 1] ) {
            filteredArr[counter] = arr[i];
            counter++;
        }
    }
    return filteredArr;

}


