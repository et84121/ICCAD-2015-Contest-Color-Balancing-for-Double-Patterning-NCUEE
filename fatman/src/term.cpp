#include "term.h"
#include "rectangle.h"
#include<iostream>

using namespace std;

term::term()
{
    // default constructor
}

term::term(int num_x=0 , int num_y=0 ):x_next_capacity( num_x ), y_next_capacity( num_y )
{
    x_next_terms = 0;
	x_next = new int[ x_next_capacity+1 ];
	y_next_terms = 0;
	y_next = new int[ y_next_capacity+1 ];
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

void term::y_next_newterm(int next_shape_y)
{
	int f;
	//cout<<"fuck"<<endl;
	//cin>>f;
	//cout<<"y_next_terms is :"<<y_next_terms<<endl;
	//cout<<"y_next_capacity is :"<<y_next_capacity<<endl;
	//cin>>f;
	if( y_next_terms==y_next_capacity )////////////////////////////////////////
	{
		//cout<<"fuck"<<endl;

		y_next_capacity*=2;
		int *y_next_temp = new int[ y_next_capacity ];////////////////////????x?s??l?}?C???}?C
		norm_copy( y_next,y_next_terms,y_next_temp);
		delete [] y_next;
		y_next=y_next_temp;
	}
	//cout<<"fuck"<<endl;
	y_next[y_next_terms]=next_shape_y;
	y_next_terms++;
}

void term::x_next_newterm(int next_shape_x)
{
	cout<<"x_next_terms is    :"<<x_next_terms<<endl;//have a bug ,"x_next_terms" and "x_next_capacity" is wrong number
	cout<<"x_next_capacity is :"<<x_next_capacity<<endl;
	if( x_next_terms==x_next_capacity )
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

void norm_copy( int* x_next, int x_next_terms, int* x_next_temp )
{
	for( int ca=0; ca<x_next_terms; ca++ )
	{
		x_next_temp[ca]=x_next[ca];
	}
}

