#include <iostream>

using namespace std;

int main()
{
    int Num;
    cin >> Num;

    for(int i =0; i<Num; i++)
    {
        int H,W,N, floor , room;
        cin >> H;   //floors
        cin >> W;   // rooms
        cin >> N;

        floor = N%H;
        room = N/H+1;

        if(floor == 0)
            floor = H;

        if(N%H == 0)
            room = room-1;



        cout << floor;


        if(room >= 10)
            cout << room<<endl;
        else
        {
            cout << "0" << room << endl;
        }

    }

}
