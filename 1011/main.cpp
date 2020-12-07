#include <iostream>
#include <math.h>
using namespace std;



int main()
{

    double x, y, max=0, d;
    int count;

    cin >> count;

    for(int i =0; i< count; i++)
    {
        cin >> x;
        cin >> y;
        d = y - x;

        max = (int)sqrt(d);

        if(max == 1)
        {
            cout << d << endl;
        }
        else if(max*max == d)
        {
            cout << 2*max -1 << endl;
        }
        else if(d <= (max*max + max))
        {
            cout << 2*max << endl;
        }
        else
        {
            cout << 2*max+1 << endl;
        }

    }

    return 0;
}
