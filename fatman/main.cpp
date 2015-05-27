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
		////////////////////////讀值
		input>>term_top;
		input>>term_bottom;
		input>>term_left;
		input>>term_right;
		r.newterm(term_top,term_bottom,term_left,term_right);
		////////////////////////將讀到的值存進陣列裡

		count++;
	}

	r.print();//////////////////印出原始數據
	cin>>enter;

	r.copy_left_f();///////////////////左邊界排序
	r.print_left_f();//////////////////印出以左排列數據
	cin>>enter;

	r.copy_right_f();//////////////////右邊界排序
	r.print_right_f();/////////////////印出以右排列數據
	cin>>enter;

	r.copy_top_f();////////////////////上邊界排序
	r.print_top_f();///////////////////印出以上排列數據
	cin>>enter;

	r.copy_bottom_f();/////////////////下邊界排序
	r.print_bottom_f();////////////////印出以下排列數據
	cout<<endl;
}
