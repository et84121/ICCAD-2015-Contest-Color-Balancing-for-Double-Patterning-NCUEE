#include<iostream>
#include<fstream>
#include "term.h"
#include "rectangle.h"


using namespace std;

int main()
{
    int term_top;
    int term_bottom;
    int term_left;
    int term_right;
    int in_counter=0;
    int capacity_main=1;
    int count=0;
    int initial_num=0;
    int enter;

    ifstream input("CADtest.txt");
    rectangle r(capacity_main);

    while(!input.eof())
    {
        ////////////////////////Ū��
        input>>term_top;
        input>>term_bottom;
        input>>term_left;
        input>>term_right;
        r.newterm(term_top,term_bottom,term_left,term_right);
        ////////////////////////�NŪ�쪺�Ȧs�i�}�C��

        count++;
    }

    r.print();//////////////////�L�X��l�ƾ�
    cin>>enter;

    r.copy_left_f();///////////////////����ɱƧ�
    r.print_left_f();//////////////////�L�X�H���ƦC�ƾ�
    cin>>enter;

    r.copy_right_f();//////////////////�k��ɱƧ�
    r.print_right_f();/////////////////�L�X�H�k�ƦC�ƾ�
    cin>>enter;

    r.copy_top_f();////////////////////�W��ɱƧ�
    r.print_top_f();///////////////////�L�X�H�W�ƦC�ƾ�
    cin>>enter;

    r.copy_bottom_f();/////////////////�U��ɱƧ�
    r.print_bottom_f();////////////////�L�X�H�U�ƦC�ƾ�
    cout<<endl;

    cout<<"test"<<endl;

    return 0;
}
