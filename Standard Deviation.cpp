#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    float x[n], sum=0;

    for(int i=0; i<n; i++)
    {
        cin>>x[i];
        sum += x[i];
    }
    float mean;
    mean = sum/n;

    float sd=0;

    for(int i=0; i<n; i++)
    {
        sd += pow((x[i]-mean), 2);
    }  


    sd = sd/n;
    sd = pow(sd, 0.5);
    printf("%.1f", sd);
    return 0;
}
