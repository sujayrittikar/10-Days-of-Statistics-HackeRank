#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int x[n];
    float w[n];

    for(int i=0; i<n; i++)
    cin>>x[i];

    for(int i=0; i<n; i++)
    cin>>w[i];

    float sum=0, s=0;

    for(int i=0; i<n; i++)
    {
        sum += (float)x[i]*w[i]; 
        s += (float)w[i];
    }

    float mean = sum/s;

    printf("%.1f", mean);

    return 0;
}
