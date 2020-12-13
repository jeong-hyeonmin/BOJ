#include <iostream>
#include <cstdlib>

using namespace std;
int N;
int gcase;
int Line[15] = {0,};

bool Queen_check(int y)
{
    for(int i=1; i<y; i++)  //줄마다 확인
    {

        if(Line[i] == Line[y])
        {
            return false;
        }

        if(abs(Line[i] - Line[y]) == abs(i - y))
        {
            return false;
        }
    }
    return true;
}

void dfs(int N_line)
{
    if(N_line == N+1)
    {
        gcase++;
    }
    else
    {
        for(int x=1; x<N+1 ;x++)
        {
            Line[N_line] = x;
            if(Queen_check(N_line))
            {
                dfs(N_line + 1);

            }
            else
            {
                Line[N_line] = 0;
            }


        }

    }
}

int main(int argc, char *argv[])
{
    scanf("%d", &N);

    for(int i=1; i<N+1; i++)
    {
        Line[1] = i; //행을 1~N까지 함
        dfs(2);
    }

    cout <<gcase;
    return 0;
}
