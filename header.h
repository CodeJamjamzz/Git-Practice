#include <iostream>
#include <unordered_set>

bool equalszero(int size, int arr[]){
    
    std::unordered_set<int> maps;
    maps.insert(0);
    int sum = 0;
    
    for(int i = 0; i < size; i++){
        sum += arr[i];
        if(maps.find(sum) != maps.end()){
            return true;
        }
    }
    
    return false;
}

int getnum(std::string str){
    std::cout << str;
    int num;
    std::cin >> num;
    return num;
}

void getArray(int array[], int size){
    for(int i = 0; i < size; i++){
        std::cin >> array[i];
    }
    return;
}