#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

/*int median(int n, int y[n])
{
    int median;
    if(n%2==0)
    median = (y[n/2-1]+y[n/2])/2;

    else
    median = y[(n+1)/2-1];

    return median;
}*/

int main() {
    int l, index=0, q1, q2, q3;
    cin>>l;

    int x[l];

    for(int i=0; i<l; i++)
    cin>>x[i];

    sort(x, x+l);

    if(l%2==0)
    {
        q2 = (x[l/2-1]+x[l/2])/2;
    }
    else
    { 
        q2 = x[(l+1)/2-1];
    }

    if((l/2)%2==0)
    {
        q1 = (x[(l/2)/2-1]+x[(l/2)/2])/2;

        if(l%2!=0)    
            q3 = (x[l/2+(l/2)/2]+x[l/2+(l/2)/2+1])/2;
        else
            q3 = (x[l/2+(l/2)/2-1]+x[l/2+(l/2)/2])/2;
    }
    else
    {
        q1 = x[(l/2+1)/2-1];
        q3 = x[(l/2 + (l/2+1)/2)-1];
    }

    cout<<q1<<endl<<q2<<endl<<q3<<endl;
    return 0;
}
