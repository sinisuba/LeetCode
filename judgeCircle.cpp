class Solution {
public:
    bool judgeCircle(string moves) {
        int u = 0, d = 0;
        int l = 0, r = 0;
        
        for (char ch : moves)
        {
            switch(ch)
            {
                case 'U':
                    ++u;
                    break;
                case 'D':
                    ++d;
                    break;
                case 'L':
                    ++l;
                    break;
                default: ++r;
            }
        }
        
        return u == d && l == r;
    }
};
