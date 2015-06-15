#ifndef TERM_H
#define TERM_H
#include "rectangle.h"
class rectangle;

class term
{
    friend class rectangle;
    public:
        term(int, int);
		term(int t,int b,int l,int r,int i);
		void x_next_newterm(int);
		void y_next_newterm(int);
		~term();
    protected:
    private:
        int top;
		int bottom;
		int left;
		int right;
		int initial;//�b��l�ƾڰ}�C�̬��ĴX��
		int left_f;//�b�H����ɱƧǪ��}�C�̬��ĴX��
		int right_f;//�b�H�k��ɱƧǪ��}�C�̬��ĴX��
		int top_f;//�b�H�W��ɱƧǪ��}�C�̬��ĴX��
		int bottom_f;//�b�H�U��ɱƧǪ��}�C�̬��ĴX��
		int *x_next;
		int x_next_capacity;
		int x_next_terms;
		int *y_next;
		int y_next_capacity;
		int y_next_terms;
};

#endif // TERM_H
