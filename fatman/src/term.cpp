#include "term.h"
#include "rectangle.h"

term::term()
{
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
