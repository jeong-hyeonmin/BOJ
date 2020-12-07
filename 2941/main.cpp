#include <iostream>

using namespace std;

int count = 0;

int main()
{
    string croatia;

    getline(cin, croatia);

    for(int i=0; i<croatia.length(); i++)
    {
        count ++;

        if(croatia[i] == '=' || croatia[i] == '-')
        {
            count--;
            if(croatia[i-1] == 'z')
            {
                if(croatia[i-2] == 'd')
                    count--;
            }

        }


        if(croatia[i] == 'j')
            if(croatia[i-1] == 'l' || croatia[i-1] == 'n')
                count--;
    }

    cout << count;


}
