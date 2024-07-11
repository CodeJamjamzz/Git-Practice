#include <iostream>
#include <unordered_set>
#include "header.h"

int main(){
    int size = getnum("Enter the size of the array: ");
    int arr[size];

    getArray(arr, size);
    std::cout << equalszero(size, arr);
}