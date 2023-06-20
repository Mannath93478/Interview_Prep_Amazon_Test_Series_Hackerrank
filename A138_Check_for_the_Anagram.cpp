/*Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Input Format

The First Line contains a string s
The Second Line contains a string t.
Constraints

1 <= s.length, t.length <= 8 * 10^4
s and t consist of lowercase English letters.
Output Format

Print true if t is an anagram of s, and false otherwise.

Sample Input 0

anagram
nagaram
Sample Output 0

true
Sample Input 1

rat
car
Sample Output 1

false*/


// CODE:

#include<bits/stdc++.h>
using namespace std;

bool anagram(string str1, string str2)
{
    int n1, n2;
    n1 = str1.length();
    n2 = str2.length();
    
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(n1 != n2)
    {
        return false;
    }
    
    for(int i=0; i<n1; i++)
    {
        if(str1[i]!=str2[i])
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    string str1,str2;
    cin >> str1;
    cin >> str2;
    
    if(anagram(str1,str2))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
