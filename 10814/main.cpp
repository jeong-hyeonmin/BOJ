#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;



bool cmp(pair<int,string> a, pair<int,string> b)
{
    return a.first < b.first;
}


int main()
{
    int N;
    vector <pair<int , string> > age_name;
    scanf("%d" , &N);
    int tmp_first;
    string tmp_second;

    for(int i=0; i< N; i++)
    {
        cin >> tmp_first >> tmp_second;
        age_name.push_back(make_pair(tmp_first,tmp_second));

    }

    stable_sort(age_name.begin(),age_name.end(),cmp);

    for(int i = 0; i<age_name.size(); i++)
    {
        printf("%d %s\n",age_name[i].first,age_name[i].second.c_str());
    }


    return 0;
}
