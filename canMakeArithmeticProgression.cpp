class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        std::sort(arr.begin(), arr.end());
        
        int diff = arr[1] - arr[0];
        for (int i = 0; i < arr.size() - 1; ++i)
        {
            if (arr[i] + diff != arr[i + 1])
                return false;
        }
    
        return true;
    }
};
