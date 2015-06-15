#include "term.h"
#include "rectangle.h"

term::term( int num_x = 0, int num_y =0 ):x_next_capacity( num_x ), y_next_capacity( num_y )
{
    x_next_terms = 0;
	x_next = new int[ x_next_capacity+1 ];
	y_next_terms = 0;
	y_next = new int[ y_next_capacity+1 ];
    // default constructor
}
term::term( int t, int b, int l, int r , int i ):top( t ), bottom( b ), left( l ), right( r ) ,initial( i )
{
    //設定private之參數值
}
term::~term()
{
    //解構子
}
