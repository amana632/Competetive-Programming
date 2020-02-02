class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int K) {
        if (mat.empty() || mat[0].empty())
            return {};
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> sums(m + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= m; i++) 
            for (int j = 1; j <= n; j++) 
                sums[i][j] = sums[i - 1][j] + sums[i][j - 1] - sums[i - 1][j - 1] + mat[i - 1][j - 1];
        vector<vector<int>> res(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int idx1 = i + K + 1 > m ? m : i + K + 1;
                int idx2 = j + K + 1 > n ? n : j + K + 1;
                int idx3 = i - K < 0 ? 0 : i - K;
                int idx4 = j - K < 0 ? 0 : j - K;
                res[i][j] = sums[idx1][idx2] - sums[idx3][idx2] - sums[idx1][idx4] + sums[idx3][idx4];
            }
        }
        return res;
    }
};