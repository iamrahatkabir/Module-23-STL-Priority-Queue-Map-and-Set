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

int main()
{
    map<string,int> mp; //Two values stays as a pair in map;
    mp["tamim"] = 2;
    mp["ramim"] = 500;
    mp["shamim"] = 50;
    // mp["hamim"] = 0;

    // cout << mp["shamim"] << endl; //o(logN)

    for(auto it = mp.begin(); it != mp.end(); it++)
    {
        // cout << (*it).first << " " << endl;
        cout << it->first << " " << it->second << endl; //O(NlogN)
    }


    //Check if a value or key exist in the map or not
    if(mp.count("hamim"))
    {
        cout << "Ache" << endl;
    }
    else
    {
        cout << "Nai" << endl;
    }




    return 0;
}