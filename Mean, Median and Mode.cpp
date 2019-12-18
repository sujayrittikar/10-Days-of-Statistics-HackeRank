#include <bits/stdc++.h>
using namespace std;

int frequency(int n, float* a, float x)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==x)
        count+=1;
    }
    return count;
}

int main() {
    int n;
    cin>>n;
    float a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    sort(a, a+n);

    float mean, median, mode;

    mean = accumulate(a, a+n, mean);
    mean = mean/n;
    printf("%.1f", mean);
    cout<<endl;

    if(n%2==0)
    {
        median = (a[n/2-1]+a[n/2])/2;
    }
    else
    median = a[(n+1)/2-1];

    printf("%.1f", median);
    cout<<endl;

    int freq[n];
    for(int i=0; i<n; i++)
    {
        freq[i] = frequency(n, a, a[i]);
    }

    int max=freq[0], index=0;

    for(int i=1; i<n; i++)
    {
            if(freq[i]>max)
            {
                max = freq[i];
                index = i;
            }
    }

    cout<<a[index]<<endl;
    return 0;
}

