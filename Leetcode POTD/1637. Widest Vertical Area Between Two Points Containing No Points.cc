/*

Algorithm:
Sort the given points array based on the x-coordinates of the points in ascending order.
Initialize a variable maxVal to store the maximum width.
Iterate through the sorted points array.
For each pair of adjacent points, calculate the width (points[i][0] - points[i-1][0]).
Update maxVal with the maximum of its current value and the calculated width.
Return the final maxVal as the maximum width of the vertical area.

*/


class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n = points.size();
        
        // Sort points based on x-coordinates
        sort(begin(points), end(points));
        
        int maxVal = 0;
        
        // Iterate through sorted points
        for(int i = 1; i < n; i++) {
            // Calculate width between two adjacent points
            maxVal = max(maxVal, points[i][0] - points[i-1][0]);
        }
        
        // Return the maximum width
        return maxVal;
    }
};
