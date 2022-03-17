#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

bool isPalindrome(string &s, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    return (s[start] == s[end]) && isPalindrome(s, start + 1, end - 1);
}

int main()
{
    string s;
    int start;
    int end;
    start = 0;
    end = 0;
    cin >> s;
    if (isPalindrome(s, start, end) == true)
    {
        cout << "YES";
    }

    return 0;
}