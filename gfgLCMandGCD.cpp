#include <bits/stdc++.h>
using namespace std;

long long hcf(long long a, long long b)
{
    if (a <= b)
    {
        if ((b % a) == 0)
        {
            return a;
        }
        else
        {
            return hcf(b % a, a);
        }
    }
    else
    {
        if (a % b == 0)
        {
            return b;
        }
        else
        {
            return hcf(a % b, b);
        }
    }
}

vector<long long> lcmAndGcd(long long A, long long B)
{
    vector<long long> ans;
    long long lcm, gcd;
    gcd = hcf(A, B);
    lcm = (A * B) / gcd;
    ans.push_back(lcm);
    ans.push_back(gcd);
    return ans;
}

int main()
{
    long long A, B;
    A = 5;
    B = 31;
    vector<long long> ans = lcmAndGcd(A, B);
    for (long long x : ans)
    {
        cout << x << endl;
    }
    return 0;
}

// Time Limit Exceeded
// vector<long long> lcmAndGcd(long long A, long long B)
// {
//     vector<long long> ans;
//     long long maxx, minn, lcm, gcd;
//     if (A <= B)
//     {
//         maxx = B;
//         minn = A;
//     }
//     else
//     {
//         maxx = A;
//         minn = B;
//     }
//     for (int i = 1; i <= minn; i++)
//     {
//         if ((maxx * i) % minn == 0)
//         {
//             lcm = maxx * i;
//             break;
//         }
//     }
//     gcd = (A * B) / lcm;
//     ans.push_back(lcm);
//     ans.push_back(gcd);
//     return ans;
// }