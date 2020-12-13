#include <iostream>
#include <stdio.h>
#include <vector>

#include <time.h>

using namespace std;

bool visit[8] = {0,};
int num[8] = {1,2,3,4,5,6,7,8};
int M,N;
vector <int> vec;

void dfs(int cnt)
{
    if(cnt == N)
    {
        for(int i=0; i< vec.size(); i++)
        {
            printf("%d ", vec[i]);
        }
    printf("\n");

    }else
    {
        for(int i=0; i< M; i++)
        {
            if(visit[i] == 0)
            {
                vec.push_back(num[i]);
                visit[i] = 1;
                dfs(cnt+1);
                vec.pop_back();
                visit[i] = 0;
            }
        }
    }

}


int main(void) {
    cin >> M >> N;
    dfs(0);
    return 0;
}

