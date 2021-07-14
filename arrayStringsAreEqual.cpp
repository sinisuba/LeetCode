class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string prva, druga;
        
        for (int i = 0; i < word1.size(); ++i)
        {
            for (int j = 0; j < word1[i].size(); ++j)
                prva += word1[i][j];
        }
        
        for (int i = 0; i < word2.size(); ++i)
        {
            for (int j = 0; j < word2[i].size(); ++j)
                druga += word2[i][j];
        }
        
        return prva == druga;
    }
};
