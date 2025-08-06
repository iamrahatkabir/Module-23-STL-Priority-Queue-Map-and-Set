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


//Set removes the duplicate values and return a sorted array. It works as a in order BST;

int main()
{
    set<int> s;
    int n;
    cin >> n;
    while(n--)
    {
        int val;
        cin >> val;

        s.insert(val); // O(longN)
    }

    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

    //Check a value exits or not;
    if(s.count(4)) //O(logN)
        cout << "Ache" << endl;
    else
        cout << "Nai" << endl;



    return 0;
}