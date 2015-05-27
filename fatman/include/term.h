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
		int initial;//�b��l�ƾڰ}�C�̬��ĴX��
		int left_f;//�b�H����ɱƧǪ��}�C�̬��ĴX��
		int right_f;//�b�H�k��ɱƧǪ��}�C�̬��ĴX��
		int top_f;//�b�H�W��ɱƧǪ��}�C�̬��ĴX��
		int bottom_f;//�b�H�U��ɱƧǪ��}�C�̬��ĴX��
};

#endif // TERM_H
