#include "term.h"
#include "rectangle.h"
#include<iostream>

using namespace std;

term::term()
{
    x_next_capacity = 0;
    y_next_capacity = 0 ;
    x_next_terms = 0;
	x_next = new int[ x_next_capacity+1 ];//x_next is an array which record the number of next shape on x
	y_next_terms = 0;
	y_next = new int[ y_next_capacity+1 ];//y_next is an array which record the number of next shape on y
    if_grouped = false;
    if_conflict = false;
}
term::term( int t, int b, int l, int r , int i ):top( t ), bottom( b ), left( l ), right( r ) ,initial( i )
{
    //設定private之參數值
}
term::~term()
{
    //解構子
}

void norm_copy( int*, int, int* );

void term::x_next_newterm(int next_shape_x)//record the next shape in x_next
{
	if( x_next_terms>=x_next_capacity )
	{
		x_next_capacity*=2;
		int *x_next_temp = new int[ x_next_capacity ];
		norm_copy( x_next,x_next_terms,x_next_temp);
		delete [] x_next;
		x_next=x_next_temp;
	}
	x_next[x_next_terms]=next_shape_x;
	x_next_terms++;
}

void term::y_next_newterm(int next_shape_y)//record the next shape in y_next
{
	if( y_next_terms>=y_next_capacity )
	{
		y_next_capacity*=2;
		int *y_next_temp = new int[ y_next_capacity ];
		norm_copy( y_next,y_next_terms,y_next_temp);
		delete [] y_next;
		y_next=y_next_temp;
	}
	y_next[y_next_terms]=next_shape_y;
	y_next_terms++;
}


void norm_copy( int* x_next, int x_next_terms, int* x_next_temp )//copy the type of int(array)
{
	for( int ca=0; ca<x_next_terms; ca++ )
	{
		x_next_temp[ca]=x_next[ca];
	}
}

