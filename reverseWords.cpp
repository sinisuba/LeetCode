class Solution {
public:
    string reverseWords(string str) {
        std::string curr, ans;
        std::vector<std::string> niz;
        
        for (int i = 0; i < str.size(); ++i)
        {
            if (str[i] == ' ')
            {
                std::reverse(curr.begin(), curr.end());
                niz.push_back(curr);
                curr.clear();
            }
            else
                curr += str[i];
        }
        
        std::reverse(curr.begin(), curr.end());
        niz.push_back(curr);
        
        for (int i = 0; i < niz.size(); ++i)
            i != niz.size() - 1 ? ans += niz[i] + " " : ans += niz[i];
        return ans;
    }
};
