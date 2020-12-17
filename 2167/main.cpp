#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    int N,M,I,J,X,Y,K;

    int NM[301][301];
    int sum =0;
    scanf("%d %d",&N,&M);

    for(int i=0; i<N; i++)          //y = N
    {
        for(int j=0; j<M; j++)      //x = M NM[y][x]
        {
           scanf("%d",&NM[i][j]);
        }

    }



    scanf("%d",&K);
    int flag =0;

    for(int k=0; k<K; k++)
    {
        scanf("%d %d %d %d",&I,&J,&X,&Y);

        for(int axis_y = I; axis_y <= X; axis_y++)
        {
            if(flag == 0)
            {
                for(int axis_x = J; axis_x<= Y; axis_x++)
                {
                    sum += NM[axis_y-1][axis_x-1];
                }
            }


        }
        printf("%d\n",sum);

        sum = 0;



    }



    return 0;
}
