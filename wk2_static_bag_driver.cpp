/* 
FILE: wk2_static_bag_driver.cpp
Author: Josue 
Date: 04-11-2023
Compiler: Ubuntu

summary: Test file to test all the functions of the Bag class and ensure that
         everything works as it's meant to. 
 
specifications: User is able to insert, delete, and print the values stored
                in their Bag, along with other additional functions.
Test cases: N/A

Summary of modifications: N/A

*/

#include <iostream> // std::cout, std::endl
#include "bag.h"

using std::cout;
using std::endl;
using namespace Josue;

int main(){
    Bag my_bag;
    
    my_bag.insert(4);
    my_bag.insert(5);
    my_bag.insert(3);
    my_bag.insert(10);
    my_bag.insert(50);

    cout << "Before ++ operator: ";
    print_bag(my_bag);

    if(++my_bag){
        cout << "After ++ operator: ";
        print_bag(my_bag);
    }
    /*
    cout << my_bag.countGreaterThanFifty();
    cout << "\n" << my_bag.oddBag();
    
    Bag second_bag;

    cout << endl;
    second_bag != my_bag ? cout << "true" : cout << "false";
    cout << endl;

    second_bag = my_bag.copyBag();

    cout << endl;

    second_bag != my_bag ? cout << "true" : cout << "false";
    
    cout << endl;

    print_bag(second_bag);
    cout << endl;
    print_bag(my_bag);
    cout << endl;    
    

    cout << endl;

    my_bag.fill_random();
    print_bag(my_bag);

    cout << endl;
    */
    return 0;
}
