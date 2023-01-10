#include <iostream>

#define maximum(x, y, r) \
do { int aa = ( x ); int bb = ( y ); ( r ) = bb < aa ? aa : bb; } while ( false )

int main()
{
    int x = -10, y = -5, r;

    if (x > 0 && y > 0) maximum(x, y, r);
    else maximum(x = -x, y = -y, r);

    std::cout << "x = " << x << ", y = " << y << ", r = " << r << std::endl;
}