#include <bits/stdc++.h>
using namespace std;

void storeSubsequences(string &s, string sub, int i, vector<string> &storeSubs)
{
    if (i == s.length())
    {
        if (sub.length() != 0)
            storeSubs.push_back(sub);
        return;
    }
    // Exclude
    storeSubsequences(s, sub, i + 1, storeSubs);
    // Include
    sub.push_back(s[i]);
    storeSubsequences(s, sub, i + 1, storeSubs);
}

vector<string> subsequences(string str)
{
    vector<string> storeSubs;
    string sub = "";
    storeSubsequences(str, sub, 0, storeSubs);
    return storeSubs;
}

int main()
{
    string s = "pcrdhwdxmqdznben"; // TLE
    // string s = "aba";
    vector<string> ans = subsequences(s);
    for (auto i : ans)
        cout << i << endl;
    return 0;
}