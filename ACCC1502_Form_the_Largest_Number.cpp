/*Given a list of non-negative integers, arrange them such that they form the largest number. Note: The result may be very large, so you need to return a string instead of an integer.

Input Format

The first line contains a integer N
The Next Line contains N integers seperated by space
Constraints

1 <= |A| <= 4*10^4
1 <= A[i] <= 10^9
Output Format

Return a string representing the largest number formed

Sample Input 0

2
10 2
Sample Output 0

210*/

// CODE:

#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b)
{
    return a+b > b+a;
}

string largestNumber(vector<int> arr, int n)
{
    vector <string> arr1;
    for(int i=0;i<n;i++)
    {
        arr1.push_back(to_string(arr[i]));
    }
    
    sort(arr1.begin(),arr1.end(),compare);
    if(arr1[0] == "0")
    {
        return "0";
    }
    string str = "";
    for(int i=0;i<n;i++)
    {
        str += arr1[i];
    }
    return str;
}

int main()
{
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    cout << largestNumber(arr,n);
    
    return 0;
}
