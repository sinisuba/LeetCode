class Solution {
public:
    string truncateSentence(string s, int k) {
        int cnt = 0;
        std::string rez;
        
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == ' ')
            {
                ++cnt;
                
                if (cnt >= k)
                    break;
                
                rez += " ";
            }
            else rez += s[i];
        }
        
        return rez;
    }
};
