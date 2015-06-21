#ifndef TERM_H
#define TERM_H
#include "group.h"
#include "rectangle.h"
class rectangle;

class term
{
    friend class rectangle;
    public:
        term();
		term(int t,int b,int l,int r,int i);
		void x_next_newterm( const int next_shape_x);
		void y_next_newterm( const int next_shape_y);
		~term();

		int top;
		int bottom;
		int left;
		int right;
		int initial;//在原始數據陣列裡為第幾號
		int left_f;//在以左邊界排序的陣列裡為第幾號
		int right_f;//在以右邊界排序的陣列裡為第幾號
		int top_f;//在以上邊界排序的陣列裡為第幾號
		int bottom_f;//在以下邊界排序的陣列裡為第幾號
		int *x_next;
		int x_next_capacity;
		int x_next_terms;
		int *y_next;
		int y_next_capacity;
		int y_next_terms;
        bool if_grouped;
    protected:
    private:

};

#endif // TERM_H
