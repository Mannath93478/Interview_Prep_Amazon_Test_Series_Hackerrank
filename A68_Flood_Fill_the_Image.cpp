/*An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.

You are also given three integers sr, sc, and color. You should perform a flood fill on the image starting from the pixel image[sr][sc].

To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with color.

Return the modified image after performing the flood fill.

Input Format

The First Line contains two integers denoting the value of n and m.
The Second line contains three integers denoting the value of sr , sc and color
The Next N lines contains M integers denoting the value of image[i][j].
Constraints

n == image.length
m == image[i].length
1 <= m, n <= 50
0 <= image[i][j], color < 216
0 <= sr < n
0 <= sc < m
Output Format

Return the matrix of integers i.e. modified image after performing the flood fill.

Sample Input 0

3 3
1 1 2
1 1 1
1 1 0
1 0 1

Sample Output 0

2 2 2 
2 2 0 
2 0 1 

Sample Input 1

5 5
1 2 697
31 55 46 16 61
53 77 49 55 94
34 3 40 65 76
51 96 95 58 10
24 75 77 76 54
Sample Output 1

31 55 46 16 61 
53 77 697 55 94 
34 3 40 65 76 
51 96 95 58 10 
24 75 77 76 54 */

// CODE:

#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>& image, int row, int col, int newColor, int startColor) {
    int rows = image.size();
    int cols = image[0].size();

    if (row < 0 || row >= rows || col < 0 || col >= cols || image[row][col] != startColor) {
        return;
    }

    image[row][col] = newColor;

    dfs(image, row - 1, col, newColor, startColor);  // Up
    dfs(image, row + 1, col, newColor, startColor);  // Down
    dfs(image, row, col - 1, newColor, startColor);  // Left
    dfs(image, row, col + 1, newColor, startColor);  // Right
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    int startColor = image[sr][sc];

    if (startColor == newColor) {
        return image;
    }

    dfs(image, sr, sc, newColor, startColor);
    return image;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int sr, sc, color;
    cin >> sr >> sc >> color;

    vector<vector<int>> image(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> image[i][j];
        }
    }

    vector<vector<int>> modified_image = floodFill(image, sr, sc, color);

    for (const auto& row : modified_image) {
        for (int pixel : row) {
            cout << pixel << " ";
        }
        cout << endl;
    }
    return 0;
}
