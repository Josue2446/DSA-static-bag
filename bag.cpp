/* 
FILE: bag.cpp
Author: josue
Date: 04-11-2023
Compiler: Ubuntu

summary: File implements functions that are declared in the respective
         header file. 

specifications: User is able to insert, delete, and print the values stored
                in their Bag, along with other additional functions.
Test cases: N/A

Summary of modifications: 04-15-2023 - added additional functions (see below)
                          06-01-2023 - added ++ overloaded operator

INVARIANT for the Bag class: (full documentation in Bag.h)
    1. data[MAX] - static array that can hold up to MAX values
    2. how_many - keeps track of how full the Bag object is
*/

#include <cstdlib> // NULL, srand
#include "bag.h"
#include <iostream>
using std::cout;


namespace Josue {

    Bag::Bag() : how_many{0}{}

    bool Bag::insert(int entry){
        if(how_many == MAX)
            return false;

        data[how_many] = entry;
        how_many++;
        return true;
    }

    bool Bag::remove(int target){
        if(how_many == 0)
            return false;
        else if(how_many == 1 && data[0] == target){
            how_many--;
            return true;
        }
        else{
            for(int i = 0; i < how_many; i++){
                if(data[i] == target){
                    how_many--;
                    data[i] = data[how_many];
                    return true;
                }
            }
        }
        return false;
    }

    void print_bag(Bag bag_to_print){
        for(int i = 0; i < bag_to_print.how_many; i++)
            cout << bag_to_print.data[i] << " ";
        cout << "\n";
        return;
    }

    int Bag::countGreaterThanFifty(){
        int counter{0};
        for(int i = 0; i < how_many; i++)
            if(data[i] > 50)
                counter++;
        return counter;
    }

    bool Bag::oddBag(){
        return how_many % 2 != 0;
    }

    bool Bag::operator != (const Bag& rhs){
        return how_many != rhs.how_many;
    }

    Bag Bag::copyBag(){
        Bag new_bag;
        
        for(int i = 0; i < how_many; i++)
            new_bag.data[new_bag.how_many++] = data[i];
        return new_bag;
    }

    void Bag::fill_random(){
        srand(time(NULL));
        how_many = 0;
        int len = rand() % 70 + 1;

        for(int i = 0; i < len; i++)
            data[how_many++] = rand() % 100 + 0;
        return;
    }

    bool Bag::operator ++ (){
        if(how_many * 2 <= MAX){
            for(int i = 0; i < how_many - i; i++)
                data[how_many++] = data[i];
            
            cout << "The bag values have been duplicated.\n";
            return true;
        }
        cout << "ERROR: could not duplicate values...\n";
        return false;
    }
}
