class Solution {
public:
    bool checkIfPangram(string sentence) {
        std::unordered_set<int> niz;
        
        for (int i = 0; i < sentence.size(); ++i)
            niz.insert(sentence[i]);
        
        return niz.size() == 26;
    }
};
