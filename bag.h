/* 
FILE: bag.h
Author: josue
Date: 04-11-2023
Compiler: Ubuntu (g++)

summary: Header file to declare a Bag and declare functions that are to 
         be used with the Bag class.

specifications: User is able to insert, delete, and print the values stored
                in their Bag, along with other additional functions.

Test cases: N/A

Summary of modifications: 04-15-2023 - added additional functions (see below)
                          06-01-2023 - added overloaded ++ operator

Functions:
    bool insert(int):
        precondition: A bag object exist.
        postcondition: If there is space left, value inserted will be
                       placed into the bag object. Otherwise, nothing
                       happens and bag remains unchanged. A value of 
                       true or false is returned accordingly.

    bool remove(int):
        precondition: A bag object exist.
        postcondition: If the value entered exist in the bag, it will be
                       removed. Otherwise, bag remains unchanged. A value
                       of true or false is returned accordingly.

    int countGreaterThanFifty():
        precondition: A bag object exist.
        postcondition: returns an integer value of how many values within
                       the bag are greater than fifty.

    Bag copyBag():
        precondition: A bag object exist.
        postcondition: An exact copy of an existing bag is returned from
                       this function.

    bool oddBag():
        precondition: A bag object exist.
        postcondition: Returns a boolean value accordingly if the amount
                       values in the bag object is an odd number.

    bool operator != (const Bag& rhs):
        precondition: Two bag objects exist.
        postcondition: A boolean value is returned accordingly if the two
                       bags are not the same size regardless of the
                       values inside the bag object(s).

    void fill_random():
        precondition: A bag object exist.
        postcondition: The bag object is filled with up to 70 random 
                       values in the range 0 - 100.

    friend void print_bag(Bag):
        precondition: A bag object exist.
        postcondition: Content(s) of Bag object are displayed.

    bool operator ++():
        precondition: A bag object exist.
        postcondition: Returns a boolean value accordingly if every
                       value in the bag can be duplicated. If there is
                       enough space, ++ will duplicate every value in
                       the Bag object, appending duplicate value(s).
*/
#ifndef BAG_H
#define BAG_H

namespace Josue {
    class Bag{
        public:
            static const int MAX = 100;
            Bag();
            ~Bag() = default;

            bool insert(int);
            bool remove(int);

            // additional functions
            int countGreaterThanFifty();
            Bag copyBag();
            bool oddBag();
            bool operator != (const Bag& rhs);
            void fill_random();

            friend void print_bag(Bag);
            bool operator ++();

        private:
            int data[MAX];
            int how_many;
    };
}
#endif // BAG_H
