class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        int low = 0;
        int high = rows * columns - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            int m = mid / columns;
            int n = mid % columns;
            if (matrix[m][n] == target) {
                return true;
            }
            else if (matrix[m][n] > target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return false;
    }
};