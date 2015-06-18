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
        //讀值
        input>>term_left;
        input>>term_bottom;
        input>>term_right;
        input>>term_top;
        r.newterm(term_top,term_bottom,term_left,term_right);
        //將讀到的值存進陣列裡

        count++;
    }

    r.print();//印出原始數據


    r.copy_left_f();//左邊界排序

    r.copy_right_f();//右邊界排序

    r.copy_top_f();//上邊界排序

    r.copy_bottom_f();//下邊界排序
    cout<<endl;

	r.x_grouping();
	r.x_group_print();
	cout<<endl;

	r.y_grouping();
	r.y_group_print();
	cout<<endl;




    return 0;
}
