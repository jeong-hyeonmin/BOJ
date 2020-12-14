#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N;
    int count = 0;
    int count_666 = 0;
    cin >> N;
    int tmp = 665;
    int number = 665;
    while(1)
    {
        while(1)
        {
            if(tmp % 10 == 6)
            {
                count ++;
            }else
            {

                if(count > 2)
                {
                }
                else
                {
                    count = 0;
                }

            }

            if(tmp < 10)
            {
                break;
            }

            tmp = (int)tmp/10;
        }


        if(count > 2)
        {
            count_666++;

        }

        count = 0;

        if(count_666 == N)
        {
            cout << number;
            return 0;
        }


        number++;
        tmp = number;

    }

    return 0;
}
