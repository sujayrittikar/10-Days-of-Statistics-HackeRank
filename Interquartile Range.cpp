#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<float> y;

    int n;
    cin>>n;

    float x[n];
    int f[n];

    for(int i=0; i<n; i++)
    {
        cin>>x[i];
    }

    for(int i=0; i<n; i++)
    {
        cin>>f[i];
    }


    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=f[i]; j++)
        {
            y.push_back(x[i]);
        }
    }
    sort(y.begin(), y.end());

    float q1, q3;
    int l;
    l = y.size();
    if((l/2)%2==0)
    {
        q1 = (y[(l/2)/2-1] + y[(l/2)/2])/2;
        if(l%2!=0)    
            q3 = (y[l/2+(l/2)/2]+y[l/2+(l/2)/2+1])/2;
        else
            q3 = (y[l/2+(l/2)/2-1]+y[l/2+(l/2)/2])/2;
    }

    else
    {
        q1 = y[(l+1)/4-1];
        q3 = y[(l/2 + (l+1)/4)];
    }

    float range;

    range = q3 - q1;
    printf("%.1f", range);

    return 0;
}
