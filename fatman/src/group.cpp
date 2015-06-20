#include "group.h"
#include "term.h"
#include <vector>
#include<iostream>
using namespace std;

int group::ordered_number = 1;
vector<group*> group::groups;
//initialize the staic menber

group::group()
{
    order = ordered_number;
    ordered_number++;
    //count the group created order
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
            cout<<"shape "<<pointer_vector[a]->initial+1<<" in "<<order<<"'s group"<<endl;
        }
    }else  cout<<"It's no shapes in this group";
}

bool group::is_in_group(term* T)
{
    for(int a=0;a<pointer_vector.size();a++){
        if(T->initial == pointer_vector[a]->initial){
            return 1;
            break;
        }
        else   return 0;
    }
}
