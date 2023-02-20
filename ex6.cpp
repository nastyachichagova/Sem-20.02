//
// Created by Anastasia Chichagova on 20.02.2023.
//

#include "ex6.h"
std::list<int> def (std::vector<int> &v, std::list<int> &l){
    auto it1 = v.end() - 1;
    auto it2 = l.begin();

    while (it2 != l.end() && it1 != v.begin() - 1){
        it2++;
        l.insert(it2, *it1);
        it1--;
    }

    return l;
}

void ex6(){

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

    std::cout << "Прямой порядок\nВектор\n";

    std::vector<int>::iterator it1;

    for (it1 = vector.begin(); it1 != vector.end(); it1++){
        std::cout << *it1 << " ";
    }

    std::cout << "\nЛист\n";

    std::list<int>::iterator it2;

    for (it2 = list.begin(); it2 != list.end(); it2++){
        std::cout << *it2 << " ";
    }

    std::cout << "\nОбратный порядок\nВектор\n";

    for (it1 = vector.end() - 1; it1 != vector.begin() - 1; it1--){
        std::cout << *it1 << " ";
    }

    std::cout << "\nЛист\n";

    it2--;

    while (it2 != list.begin()){
        std::cout << *it2 << " ";
        it2 --;
    }
    std::cout << *it2 << " ";


    list = def(vector, list);

    std::cout << "\nРезультат\n";

    for (it2 = list.begin(); it2 != list.end(); it2++){
        std::cout << *it2 << " ";
    }
}