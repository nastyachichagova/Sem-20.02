//
// Created by Anastasia Chichagova on 20.02.2023.
//
//#4
#include "ex2.h"
void create_vector(std::vector<int>&vector, std::list<int>&list){

    std::list<int>::iterator i;

    for (i = list.begin(); i != list.end(); i++){

        if (*i % 2 == 0){
            vector.push_back(*i);
        }

    }

    std::vector<int>::iterator j;

    for (j = vector.begin(); j != vector.end(); j++){
        std::cout << *j << " ";
    }

}


void ex2(){
    std::list<int> list;
    std::vector<int> vector_with_elem;

    int elem = 0;

    for (int i = 0; i < 10; ++i){
        std::cout << "";
        std::cin >> elem;
        list.push_back(elem);
    }

    create_vector(vector_with_elem, list);

}