#include "group.h"
#include "term.h"
#include <vector>
#include<iostream>
using namespace std;

group::group()
{

}

group::~group()
{
    //dtor
}


void group::add(term* T)
{
    pointer_vector.push_back(T);
}

void group::print()
{
    if(pointer_vector.size()>0){
        for(int a=0;a<pointer_vector.size();a++){
            cout<<"the shape in this group:"<<pointer_vector[a]->initial<<endl;
        }
    }else  cout<<"It's no shapes in this group";
}
