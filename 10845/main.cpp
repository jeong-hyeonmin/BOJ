#include <iostream>
#include <string>

using namespace std;

class Queue{
    int Q_array[10001];

public:
    int nfront;
    int nback;


    void push(int x);
    void pop();
    void size();
    void empty();
    void front();
    void back();


    Queue(){
        nfront =0;
        nback = 0;
    }

};


void Queue::push(int x)
{

    Q_array[nback] = x;
    nback+=1;

}


void Queue::pop()
{
    if(nfront == nback)
    {
        printf("-1\n");
    }else
    {
        printf("%d\n", Q_array[nfront]);
        nfront+=1;

    }
}

void Queue::size()
{
    printf("%d\n",(nback - nfront));
}



void Queue::empty()
{
    if(nfront == nback)
    {
        printf("1\n");
    }else
    {
        printf("0\n");
    }

}

void Queue::front()
{
    if(nfront == nback)
    {
        printf("-1\n");
    }else
    {
        printf("%d\n",Q_array[nfront]);
    }
}


void Queue::back()
{
    if(nfront == nback)
    {
        printf("-1\n");
    }else
    {
        printf("%d\n",Q_array[nback-1]);
    }
}








int main(int argc, char *argv[])
{
    int N=0;
    int x;
    scanf("%d",&N);
    string check;
    Queue Q = Queue();

    for(int i=0; i<N; i++)
    {

        cin >> check;

        if(check == "push")
        {
            scanf("%d",&x);
            Q.push(x);

        }else if(check == "front")
        {
            Q.front();

        }else if(check == "back")
        {
            Q.back();

        }else if(check == "size")
        {
            Q.size();

        }else if(check == "empty")
        {
            Q.empty();

        }else if(check == "pop")
        {
            Q.pop();

        }


    }


    return 0;
}






