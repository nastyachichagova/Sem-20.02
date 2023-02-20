//
// Created by Anastasia Chichagova on 20.02.2023.
//
//#5
#include "ex4.h"

bool Cond(int a){return a % 2 != 0;};

std::vector<int> func(std::vector<int> &v, std::list<int> &l){
    l.remove_if(Cond);

    std::vector<int>::iterator it1;
    auto it2 = l.begin();

    for (it1 = v.begin(); it1 != v.end(); it1++){
        if (*it1 % 2 != 0 && it2 != l.end()) {
            *it1 = *it2;
            it2++;
        }
    }

    return v;
}


void ex4(){
    std::list<int> list;
    std::vector<int> vector;

    int elem = 0;

    std::cout << "Заполнить вектор\n";
    for (int i = 0; i < 5; ++i){
        std::cin >> elem;
        vector.push_back(elem);
    }

    std::cout << "Заполнить лист\n";
    for (int i = 0; i < 5; ++i){
        std::cin >> elem;
        list.push_back(elem);
    }

    vector = func(vector, list);

    std::vector<int>::iterator it;

    for (it = vector.begin(); it != vector.end(); it++){
        std::cout << *it << " ";
    }
}