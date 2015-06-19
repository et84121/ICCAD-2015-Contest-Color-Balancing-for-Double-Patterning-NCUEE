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
        void newterm( const int newtop,const int newbottom,const int newleft,const int newright );//�洫�禡�ŧi
		void copy_left_f();
		void copy_right_f();
		void copy_top_f();
		void copy_bottom_f();//�洫�禡�ŧi
		void print();//�C�L�禡�ŧi
		void print_left_f();
		void print_right_f();
		void print_top_f();
		void print_bottom_f();//�C�L�禡�ŧi
		void x_grouping();//
		void x_group_print();
		void y_grouping();
		void y_group_print();

		term *termarr;//��l�ƭȰ}�C
		term *termarr_left;//�H����ɤj�p�@�ƦC���}�C
		term *termarr_right;//�H�k��ɤj�p�@�ƦC���}�C
		term *termarr_top;//�H�W��ɤj�p�@�ƦC���}�C
		term *termarr_bottom;//�H�U��ɤj�p�@�ƦC���}�C

    protected:
    private:

		int capacity;//�}�C�̤j�i�e�Ǫ��x�}�ƶq
		int terms;//�}�C�̲{�b�s�����}�C�ƶq
};

#endif // RECTANGLE_H
