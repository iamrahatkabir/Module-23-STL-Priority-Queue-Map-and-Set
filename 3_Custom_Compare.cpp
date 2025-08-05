#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

class Student{
    public:
        string name;
        int roll;
        int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp{
    public: 

    //Remember it as a syntext;
    bool operator()(Student l, Student r) //operator() -> this is fixed;
    {
        //Descending Order sorting;
        // if(l.marks < r.marks) return true;
        // else return false;


        //Ascending Order sorting; 
        if(l.marks > r.marks) 
            return true;
        else if(l.marks < r.marks) 
            return false;
        else
            return l.roll > r.roll;
    }
};

int main()
{
    //Custom Compare priority queue in ascending order;
    priority_queue<Student, vector<Student>, cmp > pq;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;

        Student obj = Student(name, roll, marks);
        pq.push(obj);

    }

    while(!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }

    return 0;
}