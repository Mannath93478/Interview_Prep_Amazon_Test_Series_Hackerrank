/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Input Format

The first line contains the size of array
The Second line contains an array of strings
Constraints

1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters.
Output Format

Print a string which is the answer to the question

Sample Input 0

3
flow
flow
flower
Sample Output 0

flow
Sample Input 1

3
bwjepxu
beehgn
bevrvwov
Sample Output 1

b*/


// CODE:


#include<bits/stdc++.h>
using namespace std;

string prefixCheck(string arr[],int n)
{
    string prefix = arr[0];
    int n1 = prefix.length();
    
    for(int i=1;i<n;i++)
    {
        while(arr[i].find(prefix)!=0)
        {
            prefix = prefix.substr(0,n1-1);
            n1--;
            
            if(prefix.empty())
            {
                return "-1";
            }
        }
    }
    return prefix;
}

int main()
{
    int n;
    cin >> n;
    
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    cout << prefixCheck(arr,n);
}
