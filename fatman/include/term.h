#ifndef TERM_H
#define TERM_H
#include "rectangle.h"
class rectangle;

class term
{
    friend rectangle;
    public:
        term();
		term(int t,int b,int l,int r,int i);
		~term();
    protected:
    private:
        int top;
		int bottom;
		int left;
		int right;
		int initial;//在原始數據陣列裡為第幾號
		int left_f;//在以左邊界排序的陣列裡為第幾號
		int right_f;//在以右邊界排序的陣列裡為第幾號
		int top_f;//在以上邊界排序的陣列裡為第幾號
		int bottom_f;//在以下邊界排序的陣列裡為第幾號
};

#endif // TERM_H
