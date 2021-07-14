class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        if (n == 1)
            return true;
        std::unordered_set<int> vals;
        std::unordered_set<int> arrSet;
        
        for (int i = 0; i < n; ++i)
            arrSet.insert(arr[i]);
        
        std::sort(arr.begin(), arr.end());
        
        int cnt = 1;
        for (int i = 0; i < n - 1; ++i)
        {
            if (arr[i] == arr[i + 1])
                ++cnt;
            else
            {
                int temp = vals.size();
                vals.insert(cnt);
                cnt = 1;
                if (temp == vals.size())
                    break;
            }
        }
        if (arr[n - 2] != arr[n - 1])
            vals.insert(1);
        else
            vals.insert(cnt);

        if (vals.size() == arrSet.size())
            return true;
        return false;
    }
};
