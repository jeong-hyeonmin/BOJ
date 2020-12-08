#include <iostream>

using namespace std;

int main()
{
    double a,b,v,days;
    cin >> a;
    cin >> b;
    cin >> v;

    days = (v-a)/(a-b);

    if( days- (int)days > 0)
        cout << (int)days+2;
    else
        cout << (int)days+1;

    return 0;
}
