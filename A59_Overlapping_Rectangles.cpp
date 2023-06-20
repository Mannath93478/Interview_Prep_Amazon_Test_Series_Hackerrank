/*An axis-aligned rectangle is represented as a list [x1, y1, x2, y2], where (x1, y1) is the coordinate of its bottom-left corner, and (x2, y2) is the coordinate of its top-right corner. Its top and bottom edges are parallel to the X-axis, and its left and right edges are parallel to the Y-axis.

Two rectangles overlap if the area of their intersection is positive. To be clear, two rectangles that only touch at the corner or edges do not overlap.

Given two axis-aligned rectangles rec1 and rec2, return true if they overlap, otherwise return false.

Input Format

The First line contains 4 integers representing the rectangle 1. The Second line contains 4 integers representing the rectangle 2.

Constraints

rec1.length == 4 rec2.length == 4 -10^9 <= rec1[i], rec2[i] <= 10^9 rec 1 and rec 2 represent a valid rectangle with a non-zero area.

Output Format

Print true if they overlap, otherwise print false.

Sample Input 0

0 0 1 1
1 0 2 1
Sample Output 0

false
Sample Input 1

1 1 3 3
1 1 2 2
Sample Output 1

true*/


// CODE:

#include<bits/stdc++.h>
using namespace std;

bool overlap(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    if(x1 < x4 && x3 < x2 && y1 < y4 && y3 < y2)
    {
        return true;
    }
    return false;
}

int main()
{
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
      
    int x3, y3, x4, y4;
    cin >> x3 >> y3 >> x4 >> y4;
    
    if(overlap(x1,y1,x2,y2,x3,y3,x4,y4))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
