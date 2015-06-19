#include "rectangle.h"
#include "term.h"
#include<iostream>

using namespace std;



//�ƻs�}�C���禡
void copy( term* termarr, int terms, term* temp )
{
    for( int ca=0; ca<terms; ca++ )
    {
        temp[ca]=termarr[ca];
    }
}


//class rectangle �غc�A�Ѻc�l
rectangle::rectangle( int num = 0 ):capacity( num )
{
    terms = 0;
    termarr = new term [ capacity+1 ];//�s�W��l�}�C
    termarr_left = new term [ capacity+1 ];//�s�W����ɱƧǰ}�C
    termarr_right = new term [ capacity+1 ];//�s�W�k��ɱƧǰ}�C
    termarr_top = new term [ capacity+1 ];//�s�W�W��ɱƧǰ}�C
    termarr_bottom = new term [ capacity+1 ];//�s�W�U��ɱƧǰ}�C
}
rectangle::~rectangle()
{

}



//�H����ɱƧǤ��禡
void rectangle::copy_left_f()
{
    int hold_left=0;
    int hold_right=0;
    int hold_top=0;
    int hold_bottom=0;
    int hold_initial=0;

//bubble sort �Ƨ�
    for( int i=0; i<terms; i++ )
    {
        for( int j=0; j<terms-1; j++)
        {
            if( termarr_left[j].left>termarr_left[j+1].left )
            {
                hold_left = termarr_left[j].left;
                hold_right = termarr_left[j].right;
                hold_top = termarr_left[j].top;
                hold_bottom = termarr_left[j].bottom;
                hold_initial = termarr_left[j].initial;

                termarr_left[j].left = termarr_left[j+1].left;
                termarr_left[j].right = termarr_left[j+1].right;
                termarr_left[j].top = termarr_left[j+1].top;
                termarr_left[j].bottom = termarr_left[j+1].bottom;
                termarr_left[j].initial = termarr_left[j+1].initial;

                termarr_left[j+1].left = hold_left;
                termarr_left[j+1].right = hold_right;
                termarr_left[j+1].top = hold_top;
                termarr_left[j+1].bottom = hold_bottom;
                termarr_left[j+1].initial = hold_initial;
            }
        }
    }


//�N���X�P�o���C�@�Ӱ}�C�� left_f
    for( int t=0; t<terms; t++)
    {
        termarr_left[t].left_f=t;
        termarr_right[t].left_f=t;
        termarr_top[t].left_f=t;
        termarr_right[t].left_f=t;
    }
}

//�H����ɱƧǤ��禡

//�H�k��ɱƧǤ��禡
void rectangle::copy_right_f()
{
    int hold_left=0;
    int hold_right=0;
    int hold_top=0;
    int hold_bottom=0;
    int hold_initial=0;

    for( int i=0; i<terms; i++ )
    {
        for( int j=0; j<terms-1; j++)
        {
            if( termarr_right[j].right>termarr_right[j+1].right )
            {

                hold_left = termarr_right[j].left;
                hold_right = termarr_right[j].right;
                hold_top = termarr_right[j].top;
                hold_bottom = termarr_right[j].bottom;
                hold_initial = termarr_right[j].initial;

                termarr_right[j].left = termarr_right[j+1].left;
                termarr_right[j].right = termarr_right[j+1].right;
                termarr_right[j].top = termarr_right[j+1].top;
                termarr_right[j].bottom = termarr_right[j+1].bottom;
                termarr_right[j].initial = termarr_right[j+1].initial;

                termarr_right[j+1].left = hold_left;
                termarr_right[j+1].right = hold_right;
                termarr_right[j+1].top = hold_top;
                termarr_right[j+1].bottom = hold_bottom;
                termarr_right[j+1].initial = hold_initial;
            }
        }
    }
    for( int t=0; t<terms; t++)
    {
        termarr_right[t].right_f=t;
        termarr_left[t].right_f=t;
        termarr_top[t].right_f=t;
        termarr_bottom[t].right_f=t;
    }
}

//�H�W��ɱƧǤ��禡
void rectangle::copy_top_f()
{
    int hold_left=0;
    int hold_right=0;
    int hold_top=0;
    int hold_bottom=0;
    int hold_initial=0;

    for( int i=0; i<terms; i++ )
    {
        for( int j=0; j<terms-1; j++)
        {
            if( termarr_top[j].top>termarr_top[j+1].top )
            {

                hold_left = termarr_top[j].left;
                hold_right = termarr_top[j].right;
                hold_top = termarr_top[j].top;
                hold_bottom = termarr_top[j].bottom;
                hold_initial = termarr_top[j].initial;

                termarr_top[j].left = termarr_top[j+1].left;
                termarr_top[j].right = termarr_top[j+1].right;
                termarr_top[j].top = termarr_top[j+1].top;
                termarr_top[j].bottom = termarr_top[j+1].bottom;
                termarr_top[j].initial = termarr_top[j+1].initial;

                termarr_top[j+1].left = hold_left;
                termarr_top[j+1].right = hold_right;
                termarr_top[j+1].top = hold_top;
                termarr_top[j+1].bottom = hold_bottom;
                termarr_top[j+1].initial = hold_initial;
            }
        }
    }
    for( int t=0; t<terms; t++)
    {
        termarr_right[t].top_f=t;
        termarr_left[t].top_f=t;
        termarr_top[t].top_f=t;
        termarr_bottom[t].top_f=t;
    }
}
//�H�W��ɱƧǤ��禡

//�H�U��ɱƧǤ��禡
void rectangle::copy_bottom_f()
{
    int hold_left=0;
    int hold_right=0;
    int hold_top=0;
    int hold_bottom=0;
    int hold_initial=0;

    for( int i=0; i<terms; i++ )
    {
        for( int j=0; j<terms-1; j++)
        {
            if( termarr_bottom[j].bottom>termarr_bottom[j+1].bottom )
            {

                hold_left = termarr_bottom[j].left;
                hold_right = termarr_bottom[j].right;
                hold_top = termarr_bottom[j].top;
                hold_bottom = termarr_bottom[j].bottom;
                hold_initial = termarr_bottom[j].initial;

                termarr_bottom[j].left = termarr_bottom[j+1].left;
                termarr_bottom[j].right = termarr_bottom[j+1].right;
                termarr_bottom[j].top = termarr_bottom[j+1].top;
                termarr_bottom[j].bottom = termarr_bottom[j+1].bottom;
                termarr_bottom[j].initial = termarr_bottom[j+1].initial;

                termarr_bottom[j+1].left = hold_left;
                termarr_bottom[j+1].right = hold_right;
                termarr_bottom[j+1].top = hold_top;
                termarr_bottom[j+1].bottom = hold_bottom;
                termarr_bottom[j+1].initial = hold_initial;
            }
        }
    }
    for( int t=0; t<terms; t++)
    {
        termarr_right[t].bottom_f=t;
        termarr_left[t].bottom_f=t;
        termarr_top[t].bottom_f=t;
        termarr_bottom[t].bottom_f=t;
    }
}
//�H�U��ɱƧǤ��禡

//�s�W�@�ӯx�Ϊ���l���禡
void rectangle::newterm( const int newtop, const int newbottom, const int newleft, const int newright )
{

    //�Y�}�C���Ŷ������A�h�N�Ŷ��X�R���{�b���⭿
    if( terms==capacity )
    {
        capacity*=2;
        term *temp = new term[ capacity ];////////////////////�Ȯ��x�s��l�}�C���}�C
        term *temp_left = new term[ capacity ];///////////////�Ȯ��x�s�H����ɱƧǰ}�C���}�C
        term *temp_right = new term[ capacity ];//////////////�Ȯ��x�s�H�k��ɱƧǰ}�C���}�C
        term *temp_bottom = new term[ capacity ];/////////////�Ȯ��x�s�H�U��ɱƧǰ}�C���}�C
        term *temp_top = new term[ capacity ];////////////////�Ȯ��x�s�H�W��ɱƧǰ}�C���}�C
        copy( termarr,terms,temp);//////////////////////////�ƻs�}�C�i�Ȧs�s���}�C
        copy( termarr_left,terms,temp_left);
        copy( termarr_right,terms,temp_right);
        copy( termarr_top,terms,temp_top);
        copy( termarr_bottom,terms,temp_bottom);
        delete [] termarr;///////////////////////////////////�N��l�}�C�M��
        delete [] termarr_left;
        delete [] termarr_top;
        delete [] termarr_right;
        delete [] termarr_bottom;
        termarr=temp;////////////////////////////////////////�N��l�}�C���V�ȯ��s���}�C
        termarr_left=temp_left;
        termarr_right=temp_right;
        termarr_top=temp_top;
        termarr_bottom=temp_bottom;
    }
    /////////////////////////////////////�Y�}�C���Ŷ������A�h�N�Ŷ��X�R���{�b���⭿//////////////////////////////////////

    /////////////////////////////////////�NŪ�쪺�x�}��Ʀs�i�h /////////////////////////////////////////////////////////
    termarr[terms].top = newtop;
    termarr[terms].bottom = newbottom;
    termarr[terms].left = newleft;
    termarr[terms].right = newright;
    termarr[terms].initial = terms;
    /////////////////////////////////////�NŪ�쪺�x�}��Ʀs�i�h /////////////////////////////////////////////////////////

    termarr_left[terms].top = newtop;
    termarr_left[terms].bottom = newbottom;
    termarr_left[terms].left = newleft;
    termarr_left[terms].right = newright;
    termarr_left[terms].initial = terms;

    termarr_top[terms].top = newtop;
    termarr_top[terms].bottom = newbottom;
    termarr_top[terms].left = newleft;
    termarr_top[terms].right = newright;
    termarr_top[terms].initial = terms;

    termarr_bottom[terms].top = newtop;
    termarr_bottom[terms].bottom = newbottom;
    termarr_bottom[terms].left = newleft;
    termarr_bottom[terms].right = newright;
    termarr_bottom[terms].initial = terms;

    termarr_right[terms].top = newtop;
    termarr_right[terms].bottom = newbottom;
    termarr_right[terms].left = newleft;
    termarr_right[terms].right = newright;
    termarr_right[terms].initial = terms;

    terms++;
}
///////////////////////////////////�s�W�@�ӯx�Ϊ���l���禡//////////////////////////////////////////////////////////////

///////////////////////////////////�C�L��l�ƾڤ��禡////////////////////////////////////////////////////////////////////
void rectangle::print()
{
    cout<<"Print initial:"<<endl;
    for( int c = 0; c<terms; c++ )
    {
        cout<<"The "<<termarr_left[c].initial+1<<"'s top is "<<termarr[termarr_left[c].initial].top<<endl;
        //////////////termarr_*****[c].initial ����l�ƾڤ����X

        cout<<"The "<<termarr_left[c].initial+1<<"'s bottom is "<<termarr[termarr_left[c].initial].bottom<<endl;
        cout<<"The "<<termarr_left[c].initial+1<<"'s left is "<<termarr[termarr_left[c].initial].left<<endl;
        cout<<"The "<<termarr_left[c].initial+1<<"'s right is "<<termarr[termarr_left[c].initial].right<<endl;
        cout << endl;
    }
    cout << endl;
    cout << endl;

}
///////////////////////////////////�C�L��l�ƾڤ��禡////////////////////////////////////////////////////////////////////


///////////////////////////////////�C�L�H����ɱƧǤ��禡////////////////////////////////////////////////////////////////
void rectangle::print_left_f()
{
    cout<<"Print left first:"<<endl;
    for( int p=0; p<terms; p++)
    {
        cout<<"The "<<termarr_left[p].left_f+1<<"'s top is "<<termarr_left[termarr_left[p].left_f].top<<endl;
        //////////////termarr_*****[p].left_f ���H����ɱƧǤ����X
        //////////////*****�i�H�N���� left�Aright�Atop�Abottom
        //////////////���۳o�i���X�P�h�H����ɱƧǤ��}�C�ݬO��

        cout<<"The "<<termarr_left[p].left_f+1<<"'s bottom is "<<termarr_left[termarr_left[p].left_f].bottom<<endl;
        cout<<"The "<<termarr_left[p].left_f+1<<"'s left is "<<termarr_left[termarr_left[p].left_f].left<<endl;
        cout<<"The "<<termarr_left[p].left_f+1<<"'s right is "<<termarr_left[termarr_left[p].left_f].right<<endl;
        cout<<"The "<<termarr_left[p].left_f+1<<"'s initial is "<<termarr_left[p].initial+1<<endl;
        ///////////////�b��l�}�C�̡A�A�O�ĴX��

        cout << endl;
    }
    cout << endl;
    cout << endl;
}
///////////////////////////////////�C�L�H����ɱƧǤ��禡////////////////////////////////////////////////////////////////

///////////////////////////////////�C�L�H�k��ɱƧǤ��禡////////////////////////////////////////////////////////////////
void rectangle::print_right_f()
{
    cout<<"Print right first:"<<endl;
    for( int p=0; p<terms; p++)
    {
        cout<<"The "<<termarr_left[p].right_f+1<<"'s top is "<<termarr_right[termarr_left[p].right_f].top<<endl;
        //////////////termarr_*****[p].right_f ���H�k��ɱƧǤ����X
        //////////////*****�i�H�N���� left�Aright�Atop�Abottom
        //////////////���۳o�i���X�P�h�H�k��ɱƧǤ��}�C�ݬO��

        cout<<"The "<<termarr_left[p].right_f+1<<"'s bottom is "<<termarr_right[termarr_left[p].right_f].bottom<<endl;
        cout<<"The "<<termarr_left[p].right_f+1<<"'s left is "<<termarr_right[termarr_left[p].right_f].left<<endl;
        cout<<"The "<<termarr_left[p].right_f+1<<"'s right is "<<termarr_right[termarr_left[p].right_f].right<<endl;
        cout<<"The "<<termarr_left[p].right_f+1<<"'s initial is "<<termarr_right[p].initial+1<<endl;
        cout << endl;
    }
    cout << endl;
    cout << endl;
}
///////////////////////////////////�C�L�H�k��ɱƧǤ��禡////////////////////////////////////////////////////////////////

///////////////////////////////////�C�L�H�W��ɱƧǤ��禡////////////////////////////////////////////////////////////////
void rectangle::print_top_f()
{
    cout<<"Print top first:"<<endl;
    for( int p=0; p<terms; p++)
    {
        cout<<"The "<<termarr_left[p].top_f+1<<"'s top is "<<termarr_top[termarr_left[p].top_f].top<<endl;
        //////////////termarr_*****[p].top_f ���H�W��ɱƧǤ����X
        //////////////*****�i�H�N���� left�Aright�Atop�Abottom
        //////////////���۳o�i���X�P�h�H�W��ɱƧǤ��}�C�ݬO��

        cout<<"The "<<termarr_left[p].top_f+1<<"'s bottom is "<<termarr_top[termarr_left[p].top_f].bottom<<endl;
        cout<<"The "<<termarr_left[p].top_f+1<<"'s left is "<<termarr_top[termarr_left[p].top_f].left<<endl;
        cout<<"The "<<termarr_left[p].top_f+1<<"'s right is "<<termarr_top[termarr_left[p].top_f].right<<endl;
        cout<<"The "<<termarr_left[p].top_f+1<<"'s initial is "<<termarr_top[p].initial+1<<endl;
        cout << endl;
    }
    cout << endl;
    cout << endl;

}
///////////////////////////////////�C�L�H�W��ɱƧǤ��禡////////////////////////////////////////////////////////////////

///////////////////////////////////�C�L�H�U��ɱƧǤ��禡////////////////////////////////////////////////////////////////
void rectangle::print_bottom_f()
{
    cout<<"Print bottom first:"<<endl;
    for( int p=0; p<terms; p++)
    {
        cout<<"The "<<termarr_left[p].bottom_f+1<<"'s top is "<<termarr_bottom[termarr_left[p].bottom_f].top<<endl;
        //////////////termarr_*****[p].bottom_f ���H�U��ɱƧǤ����X
        //////////////*****�i�H�N���� left�Aright�Atop�Abottom
        //////////////���۳o�i���X�P�h�H�U��ɱƧǤ��}�C�ݬO��

        cout<<"The "<<termarr_left[p].bottom_f+1<<"'s bottom is "<<termarr_bottom[termarr_left[p].bottom_f].bottom<<endl;
        cout<<"The "<<termarr_left[p].bottom_f+1<<"'s left is "<<termarr_bottom[termarr_left[p].bottom_f].left<<endl;
        cout<<"The "<<termarr_left[p].bottom_f+1<<"'s right is "<<termarr_bottom[termarr_left[p].bottom_f].right<<endl;
        cout<<"The "<<termarr_left[p].bottom_f+1<<"'s initial is "<<termarr_bottom[p].initial+1<<endl;
        cout << endl;
    }
    cout << endl;
    cout << endl;
}
///////////////////////////////////�C�L�H�U��ɱƧǤ��禡////////////////////////////////////////////////////////////////

void rectangle::x_group_print()
{
	for(int c=0;c<terms;c++ )
	{
		for( int i=0;i<termarr_left[termarr_left[c].left_f].x_next_terms;i++ )
		{
			//if(termarr_left[termarr_left[c].left_f].x_next[i]!=0)
			cout<<"Shape(in initial) "<<termarr_left[termarr_left[c].left_f].initial+1<<" is group with "<<termarr_left[termarr_left[c].left_f].x_next[i]+1<<endl;
		}

	}
}

void rectangle::y_group_print()
{
	for(int c=0;c<terms;c++ )
	{
		for( int i=0;i<termarr_bottom[termarr_left[c].bottom_f].y_next_terms;i++ )
		{
			//if(termarr_bottom[termarr_left[c].bottom_f].y_next[i]!=0)
			cout<<"Shape(in initial) "<<termarr_bottom[termarr_left[c].bottom_f].initial+1<<" is group with "<<termarr_bottom[termarr_left[c].bottom_f].y_next[i]+1<<endl;
		}

	}
}

void rectangle::x_grouping()
{
	int enter;

	for( int g=0;g<terms;g++ )
	{
		int count=g+1;
		cout<<"termarr_left[termarr_left[g].left_f].right is    :"<<termarr_left[termarr_left[g].left_f].right<<endl;
		cout<<"termarr_left[termarr_left[count].left_f].left is :"<<termarr_left[termarr_left[count].left_f].left<<endl;
        //cout<<"test_out"<<endl;
		while( ( (termarr_left[termarr_left[count].left_f].left - termarr_left[termarr_left[g].left_f].right) < 50 )&&(count<terms) )
		{
		    //cout<<"test_in_while"<<endl;
			cout<<endl;
			cout<<"termarr_left[termarr_left[g].left_f].top is        :"<<termarr_left[termarr_left[g].left_f].top<<endl;
			cout<<"termarr_left[termarr_left[count].left_f].bottom is :"<<termarr_left[termarr_left[count].left_f].bottom<<endl;
			cout<<"compare shape "<<g+1<<" and shape "<<count+1<<endl;
			if( ((termarr_left[termarr_left[g].left_f].top) > (termarr_left[termarr_left[count].left_f].bottom)) && ((termarr_left[termarr_left[g].left_f].bottom) < (termarr_left[termarr_left[count].left_f].top)))
			{
			    //cout<<"test_in_if"<<endl;
				termarr_left[termarr_left[g].left_f].x_next_newterm(termarr_left[termarr_left[count].left_f].initial);
				termarr_bottom[termarr_left[g].bottom_f].x_next_newterm(termarr_left[termarr_left[count].left_f].initial);
				termarr_right[termarr_left[g].right_f].x_next_newterm(termarr_left[termarr_left[count].left_f].initial);
				termarr_top[termarr_left[g].top_f].x_next_newterm(termarr_left[termarr_left[count].left_f].initial);
				cout<<g+1<<" and "<<count+1<<"is linked!"<<endl;
				cout<<"shape "<<g+1<<"'s left is :  "<<termarr_left[termarr_left[g].left_f].left<<endl;
				cout<<"shape "<<g+1<<"'s bottom is :"<<termarr_left[termarr_left[g].left_f].bottom<<endl;
				cout<<"shape "<<g+1<<"'s right is : "<<termarr_left[termarr_left[g].left_f].right<<endl;
				cout<<"shape "<<g+1<<"'s top is :   "<<termarr_left[termarr_left[g].left_f].top<<endl;
				cout<<endl;
				cout<<"shape "<<count+1<<"'s left is :  "<<termarr_left[termarr_left[count].left_f].left<<endl;
				cout<<"shape "<<count+1<<"'s bottom is :"<<termarr_left[termarr_left[count].left_f].bottom<<endl;
				cout<<"shape "<<count+1<<"'s right is : "<<termarr_left[termarr_left[count].left_f].right<<endl;
				cout<<"shape "<<count+1<<"'s top is :   "<<termarr_left[termarr_left[count].left_f].top<<endl;
				count++;
			}
			else
			{
				cout<<"count go next!"<<endl;
				count++;
			}
		}
		cout<<"count is "<<g+1<<endl;
		cin>>enter;
		cout<<endl;
	}
}

void rectangle::y_grouping()
{
	int enter;
	for( int g=0;g<terms;g++ )
	{
		int count=g+1;
		//cout<<"termarr_bottom[termarr_left[g].bottom_f].top is        : "<<termarr_bottom[termarr_left[g].bottom_f].top<<endl;
		//cout<<"termarr_bottom[termarr_left[count].bottom_f].bottom is : "<<termarr_bottom[termarr_left[count].bottom_f].bottom<<endl;

		while( ( (termarr_bottom[termarr_left[count].bottom_f].bottom - termarr_bottom[termarr_left[g].bottom_f].top) < 100 )&&(count<terms) )
		{
			//cout<<endl;
			//cout<<"termarr_bottom[termarr_left[g].bottom_f].right is     : "<<termarr_bottom[termarr_left[g].bottom_f].right<<endl;
			//cout<<"termarr_bottom[termarr_left[count].bottom_f].left is  : "<<termarr_bottom[termarr_left[count].bottom_f].left<<endl;
			//cout<<"termarr_bottom[termarr_left[g].bottom_f].left is      : "<<termarr_bottom[termarr_left[g].bottom_f].left<<endl;
			//cout<<"termarr_bottom[termarr_left[count].bottom_f].right is : "<<termarr_bottom[termarr_left[count].bottom_f].right<<endl;
			//cout<<"compare shape "<<g+1<<" and shape "<<count+1<<endl;
			if( ((termarr_bottom[termarr_left[g].bottom_f].right) > (termarr_bottom[termarr_left[count].bottom_f].left)) && ((termarr_bottom[termarr_left[g].bottom_f].left) < (termarr_bottom[termarr_left[count].bottom_f].right)))
			{
				termarr_left[termarr_left[g].left_f].y_next_newterm(termarr_bottom[termarr_left[count].bottom_f].initial);
				termarr_bottom[termarr_left[g].bottom_f].y_next_newterm(termarr_bottom[termarr_left[count].bottom_f].initial);
				termarr_right[termarr_left[g].right_f].y_next_newterm(termarr_bottom[termarr_left[count].bottom_f].initial);
				termarr_top[termarr_left[g].top_f].y_next_newterm(termarr_bottom[termarr_left[count].bottom_f].initial);
				//cout<<g+1<<" and "<<count+1<<"is linked!"<<endl;
				//cout<<"shape "<<g+1<<"'s left is :  "<<termarr_bottom[termarr_left[g].bottom_f].left<<endl;
				//cout<<"shape "<<g+1<<"'s bottom is :"<<termarr_bottom[termarr_left[g].bottom_f].bottom<<endl;
				//cout<<"shape "<<g+1<<"'s right is : "<<termarr_bottom[termarr_left[g].bottom_f].right<<endl;
				//cout<<"shape "<<g+1<<"'s top is :   "<<termarr_bottom[termarr_left[g].bottom_f].top<<endl;
				//cout<<endl;
				//cout<<"shape "<<count+1<<"'s left is :  "<<termarr_bottom[termarr_left[count].bottom_f].left<<endl;
				//cout<<"shape "<<count+1<<"'s bottom is :"<<termarr_bottom[termarr_left[count].bottom_f].bottom<<endl;
				//cout<<"shape "<<count+1<<"'s right is : "<<termarr_bottom[termarr_left[count].bottom_f].right<<endl;
				//cout<<"shape "<<count+1<<"'s top is :   "<<termarr_bottom[termarr_left[count].bottom_f].top<<endl;
				count++;
			}
			else
			{
				//cout<<"count go next!"<<endl;
				count++;
			}
		}
		//cout<<"count is "<<g+1<<endl;
		//cin>>enter;
		//cout<<endl;
	}
}
