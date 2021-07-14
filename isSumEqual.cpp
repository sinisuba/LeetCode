class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string prvi, drugi, treci;
        
        for (int i = 0; i < firstWord.size(); ++i)
            prvi += to_string(firstWord[i] - 97);
        
        for (int i = 0; i < secondWord.size(); ++i)
            drugi += to_string(secondWord[i] - 97);
        
        for (int i = 0; i < targetWord.size(); ++i)
            treci += to_string(targetWord[i] - 97);
        
        return stoi(prvi) + stoi(drugi) == stoi(treci);
    }
};
