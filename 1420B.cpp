/*input
1
11
8 9 10 11 12 13 14 15 16 19 31
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int a[1000000+5];

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        for (int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int64_t ans=0;
        for (int j=29; j>=0; j--)
        {
            int64_t cnt=0;
            for (int i=0; i<n; i++)
            {
                if (a[i]>=(1<<j)&&a[i]<(1<<(j+1)))
                {
                    cnt++;
                }
            }
            ans+=cnt*(cnt-1)/2;
        }
        cout<<ans<<'\n';
    }
}
