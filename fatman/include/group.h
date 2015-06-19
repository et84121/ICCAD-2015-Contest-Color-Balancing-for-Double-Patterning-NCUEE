#ifndef GROUP_H
#define GROUP_H
#include "rectangle.h"
#include "term.h"
#include <vector>
#include <iostream>

using namespace std;

class term;

class group
{
    public:
        group();
        virtual ~group();
        void add(term * T);
        //add a shape into the group
        void print();
        //print all of the shape in this group
    protected:
    private:
        vector<term *> pointer_vector;
        //use vector to store the term's pointer
        int order;//the order of the group
};

#endif // GROUP_H
