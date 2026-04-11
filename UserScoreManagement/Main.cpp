#include "Main.h"
#include <iostream>
using namespace std;

void print(const int *const arr, size_t size);
int *filterScores(const int *const arr, size_t size, int threshold, size_t &resultSize);
void boostScore(int &score, const int amount);
int main() {
    size_t size = 5;
    size_t filteredSize = 0;
    int  *scores = new int[size]{10,50,80,20,90};
    print(scores,size);

    for (size_t i = 0 ; i < size; i++) {
        boostScore(scores[i],5);
    }// zmieniamy oryginalna tablice wiec do dalszych operacji bedzie ta zmieniona

    int *filteredScores = filterScores(scores,size,50,filteredSize);
    //uzycie referencji do filteredSize pozwala nam z tej funkcji returnem zwrocic wskaznik
    // na nowa tablice i zmienic w main wartosc filteredSize ktora przekazujemy
    delete[] scores;
    print(filteredScores,filteredSize);
    delete [] filteredScores;

    return 0;
}
void print(const int *const arr, size_t size) {
    for (int i = 0 ; i < size; i++) {
        cout << arr[i] << " ";
    }
}
int *filterScores(const int *const arr, size_t size, int threshold, size_t &resultSize) {
    resultSize = 0;
    int counter = 0;
    for (size_t i = 0 ; i < size ; i++) {
        if (arr[i] >= threshold) {
            resultSize++;
        }
    }
    int *newArr = new int[resultSize];
    for (size_t i = 0 ; i < size ; i++) {
        if (arr[i] >= threshold) {
            newArr[counter] = arr[i];
            counter++;
        }
    }
    cout << endl;
    return newArr;
}
void boostScore(int &score, const int amount) {
    score += amount;
}
