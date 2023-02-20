//
// Created by Anastasia Chichagova on 20.02.2023.
//
//#3
#include "ex1.h"

void create_list(std::vector<int>&vector, std::list<int>&list){

    std::vector<int>::iterator it;

    for (it = vector.begin(); it != vector.end(); it++){

        if (*it % 2 == 0){
            list.push_back(*it);
        }

    }

}

void ex1(){
    std::list<int> list_with_elem;
    std::vector<int> vector;

    int elem = 0;

    for (int i = 0; i < 10; ++i){
        std::cout << "";
        std::cin >> elem;
        vector.push_back(elem);
    }

    create_list(vector, list_with_elem);

    std::list<int>::iterator it;

    for (it = list_with_elem.begin(); it != list_with_elem.end(); it++){
        std::cout << *it << " ";
    }
}