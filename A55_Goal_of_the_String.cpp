/*Given two strings s and goal, return true if and only if s can become goal after some number of shifts on s.

A shift on s consists of moving the leftmost character of s to the rightmost position.

For example, if s = "abcde", then it will be "bcdea" after one shift.
Input Format

The First line contains a string representing the string s. The Second line contains a string representing the string goal.

Constraints

1 <= s.length, goal.length <= 100
s and goal consist of lowercase English letters.
Output Format

Print true if and only if 's' can become 'goal' after some number of shifts on 's'.

Sample Input 0

abcde
cdeab
Sample Output 0

true
Sample Input 1

abcde
edcsa
Sample Output 1

false*/

// CODE:

#include<bits/stdc++.h>
using namespace std;

bool goal(string str1, string str2)
{
    int n1 = str1.length();
    int n2 = str2.length();
    
    if(n1 != n2)
    {
        return false;
    }
    for(int i=0;i<n1;i++)
    {
        string temp = "";
        for(int j=0;j<n1;j++)
        {
            temp = temp + str1[(i+j)%n1];
        }
        if(temp == str2)
        {
            return true;
        }
    }
    return false;
}

int main() 
{
    string str1, str2;
    cin >> str1;
    cin >> str2;
    
    if(goal(str1,str2))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }    
    return 0;
}
