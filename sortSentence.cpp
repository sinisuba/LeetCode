class Solution {
public:
    string sortSentence(string s) {
        int n = 0;
        
        for (int i = 0; i < s.size(); ++i)
        {
            if (isdigit(s[i]))
            {
                ++n;
                ++i;
            }
        }
        
        std::string curr, ans;
        std::vector<std::string> niz(n);
        
        for (int i = 0; i < s.size(); ++i)
        {
            if (isdigit(s[i]))
            {
                niz[(s[i] - '0') - 1] = curr;
                curr.clear();
            }
            else if (s[i] != ' ')
                curr += s[i];
        }
        
        for (int i = 0; i < n; ++i)
        {
            ans += niz[i];
            if (i < n - 1)
                ans += " ";
        }
        
        return ans;
    }
};
