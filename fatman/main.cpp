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
        //Ū��
        input>>term_left;
        input>>term_bottom;
        input>>term_right;
        input>>term_top;
        r.newterm(term_top,term_bottom,term_left,term_right);
        //�NŪ�쪺�Ȧs�i�}�C��

        count++;
    }

    r.print();//�L�X��l�ƾ�


    r.copy_left_f();//����ɱƧ�

    r.copy_right_f();//�k��ɱƧ�

    r.copy_top_f();//�W��ɱƧ�

    r.copy_bottom_f();//�U��ɱƧ�
    cout<<endl;

	r.x_grouping();
	r.x_group_print();
	cout<<endl;

	r.y_grouping();
	r.y_group_print();
	cout<<endl;




    return 0;
}
