#include <bits/stdc++.h>
bool checkPalindrome(string s)
{
    // Write your code here.
    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = (char)tolower(s[i]);
    }
    int start = 0;
    int end = s.length() - 1;
    while (start <= end)
    {
        if (!isalnum(s[start]))
        {
            start++;
        }
        else if (!isalnum(s[end]))
        {
            end--;
        }
        else if (s[start] != s[end])
        {
            return false;
        }
        else
        {
            start++;
            end--;
        }
    }
    return true;
}