#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int howmany,ho,many_floor;
    cin >> howmany;
    vector <int> floor;
    vector< vector< int > > floors;
    many_floor=14;
    ho=14;

    for(int i=1; i<= ho; i++)
    {
        floor.push_back(i);
    }
    floors.push_back(floor);



    for(int i=1; i <=many_floor; i++)
    {
        floor[0] = 1;
        for(int j=1; j<=ho; j++)
        {
            floor[j] = floors[i-1][j] + floor[j-1];
        }
        floors.push_back(floor);
    }


    for(int i=0; i < howmany; i++)
    {
        int A,B;
        cin >> A;
        cin >> B;
        cout << floors[A][B-1] << endl;;
    }


    return 0;
}

