class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        std::vector<int> rez{first};
        
        for (int x : encoded)
        {
            first ^= x;
            rez.push_back(first);
        }
        
        return rez;
    }
};
