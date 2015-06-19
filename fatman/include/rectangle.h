#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "term.h"
#include "group.h"
class term;

class rectangle
{
    public:
        rectangle(int);
        virtual ~rectangle();
        void newterm( const int newtop,const int newbottom,const int newleft,const int newright );//交換函式宣告
		void copy_left_f();
		void copy_right_f();
		void copy_top_f();
		void copy_bottom_f();//交換函式宣告
		void print();//列印函式宣告
		void print_left_f();
		void print_right_f();
		void print_top_f();
		void print_bottom_f();//列印函式宣告
		void x_grouping();//
		void x_group_print();
		void y_grouping();
		void y_group_print();

		term *termarr;//原始數值陣列
		term *termarr_left;//以左邊界大小作排列的陣列
		term *termarr_right;//以右邊界大小作排列的陣列
		term *termarr_top;//以上邊界大小作排列的陣列
		term *termarr_bottom;//以下邊界大小作排列的陣列

    protected:
    private:

		int capacity;//陣列最大可容納的矩陣數量
		int terms;//陣列裡現在存有的陣列數量
};

#endif // RECTANGLE_H
