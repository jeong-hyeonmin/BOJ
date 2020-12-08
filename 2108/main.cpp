#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{

    int N,tmp;
    double sum =0;
    int array[8001] = {0,};
    vector<int> mode;
    vector <int> V;


    scanf("%d", &N);

    for(int i= 0; i < N; i++)
    {
        scanf("%d", &tmp);
        sum += tmp;
        V.push_back(tmp);
        array[tmp+4000] += 1;
    }

    sort(V.begin(), V.end());


    tmp = 1;

    for(int i=0; i < 8001; i++ )
    {
        if(array[i] > tmp )
        {
            tmp = array[i];
            mode.clear();
            mode.push_back(i);
        }else if(array[i] == tmp )
        {
            mode.push_back(i);
        }
    }

    sort(mode.begin(),mode.end());

    printf("%.0f\n",(double)sum/(double)N);
    printf("%d\n",V[(int)N/2]);





    if(N == 1)
    {
        printf("%d\n", V[0]);
        printf("%d", 0);

    }else
    {
        if(mode.size() > 1)
        {
            printf("%d\n", mode[1]-4000);

        }else
        {
            printf("%d\n", mode[0]-4000);

        }
        printf("%d", (V.back() - V.front()));

    }

}
