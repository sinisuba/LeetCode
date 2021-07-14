class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int temp, rez = -1;
        
        for (std::vector<int> x : accounts)
        {
            temp = std::accumulate(x.begin(), x.end(), 0);
            rez = std::max(temp, rez);
        }
        
        return rez;
    }
};
