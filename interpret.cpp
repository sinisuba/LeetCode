class Solution {
public:
    string interpret(string command) {
        string rez;
        
        for (int i = 0; i < command.size(); ++i)
        {
            if (command[i] == '(' && command[i + 1] == ')')
                rez += 'o';
            
            else if (command[i] == '(' && command[i + 1] == 'a')
                rez += "al";
            
            else if (command[i] == 'G')
                rez += 'G';
        }
        
        return rez;
    }
};
