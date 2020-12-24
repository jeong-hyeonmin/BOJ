#include <iostream>

using namespace std;

int main()
{
    int A,B,C,BPoint,BC,num=0;
    cin >> A;
    cin >> B;
    cin >> C;
    BC = C-B;

    if(B >= C)
    {
        cout << "-1" << endl;;
        return 0;
    }

    num = A/(C-B);

    if(A%(C-B) >= 0)
        num++;

    cout << num << endl;

    return 0;
}
