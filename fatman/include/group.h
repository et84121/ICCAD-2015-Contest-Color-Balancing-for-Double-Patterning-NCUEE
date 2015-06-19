#ifndef GROUP_H
#define GROUP_H
#include "rectangle.h"
#include "term.h"
#include <iostream>

class group
{
    public:
        group();
        virtual ~group();
        term **arr;
        //double pointer
        //Reference material http://openhome.cc/Gossip/CppGossip/DoublePointer.html
        void add(term* T);
        //add term into the group
    protected:
    private:
        int capacity;//pointer array's capcity
        int amount;//pointer array's amount

};

#endif // GROUP_H
