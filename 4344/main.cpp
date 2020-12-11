#include <iostream>
#include <vector>

using namespace std;

vector<int> student;
int overAverage(double average);


int getAverage(int numberOfstudents)
{
    int sum=0;
    int a=0;
    for(int i = 0; i< numberOfstudents; i++)
    {

        cin >> a;
        sum += a;
        student.push_back(a);
    }
    overAverage(sum/numberOfstudents);
    return 0;
}


int overAverage(double average)
{
    int numOfOverAverage=0;
    int size = student.size();

    for (int i=0; i<size; i++)
    {
        if(student[i] > average)
        {
            numOfOverAverage++;
        }
    }
    cout << (double)numOfOverAverage/size*100 << "%" << endl;

    student.clear();

    return 0;
}




int main()
{

    cout << fixed;
    cout.precision(3);

    int taskCase;
    int numofstudent;
    double average;

    cin >> taskCase;
    cin;
    for (int i=0; i< taskCase; i++)
    {
        cin >> numofstudent;
        average = getAverage(numofstudent);

    }

    return 0;
}
