class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        
        int ans = 0, curr = 0, curr2 = n - 1;
        
        for (int i = 0; i < n; ++i)
            ans += mat[i][curr++] + mat[i][curr2--];
        
        if (n % 2)
            ans -= mat[ceil(n / 2)][ceil(n / 2)];
        
        return ans;
    }
};
