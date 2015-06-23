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

void group::add_whole_group(int sgroup_num,int dgroup_num)//there have bug value did not match
{
    for(int i=0;i<group::groups[sgroup_num]->pointer_vector.size();i++){
    group::groups[dgroup_num]->add(group::groups[sgroup_num]->pointer_vector[i]);
    cout<<"add["<<sgroup_num<<"]: "<<group::groups[sgroup_num]->pointer_vector[i]->initial+1<<" to ["<<dgroup_num<<"]"<<endl;
    cin.get();
    }
}

void group::set_whole_conflict(int group_num)
{
    for(int i=0;i<group::groups[group_num]->pointer_vector.size();i++){
    group::groups[group_num]->is_conflict(group::groups[group_num]->pointer_vector[i]);
    }
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
    }
    return 0;
}

void group::is_grouped(term* T)
{
    T->if_grouped=true;
}

void group::is_conflict(term* T)
{
    T->if_conflict=true;
}

int group::In_which_group(term* T)
{
    for(int a=0;a<group::groups.size();a++){
        for(int b=0;b<group::groups[a]->pointer_vector.size();b++){
            if(group::groups[a]->pointer_vector[b]->initial == T->initial){
                return a;
            }
        }
    }
    return -1;
}
