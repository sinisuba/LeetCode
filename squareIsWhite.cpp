class Solution {
public:
    bool squareIsWhite(string coordinates) {
        
        if (coordinates[0] == 'a' || coordinates[0] == 'c' || coordinates[0] == 'e' || coordinates[0] == 'g')
        {
            if ((coordinates[1] - '0') % 2)
                return false;
        }
        else if ((coordinates[1] - '0') % 2 == 0)
                return false;
        
        return true;
    }
};
