class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& niz) {
        int sum = 0, curr = 1;

        while (1)
        {
            for (int i = 0; i <= niz.size() - curr; ++i)
            {
                for (int j = i; j < i + curr; ++j)
                    sum += niz[j];
            }
            
            curr += 2;
            
            if (curr > niz.size())
                break;
        }
        
        return sum;
    }
};
