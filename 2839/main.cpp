#include <iostream>

using namespace std;


int fiveCheck(int &suger , int &fivebags)
{
    fivebags += suger/5;
    suger = suger%5;
    return 0;
}

int threeCheck(int &suger, int &threebags)
{
    threebags += suger/3;
    suger = suger%3;
    return 0;
}

int allCheck(int &suger, int &fivebags, int &threebags)
{
    fiveCheck(suger,fivebags);
    threeCheck(suger,threebags);

    while(!(suger == 0))
    {
        if(fivebags == 0 && !(threebags == 0) && !(suger == 0))
        {   cout << "-1";
            return 0;
        }

        fivebags -= 1;
        suger += 5;
        threeCheck(suger, threebags);
    }

    cout << threebags + fivebags;
    return 0;
}

int main()
{
    int suger, fivebags=0, threebags=0;
    cin >> suger;
    allCheck(suger,fivebags,threebags);

    return 0;
}
