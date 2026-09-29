class Solution {
public:
    bool isValid(string s) {
        stack<char> m;

       
        for(char i : s){
            if(i == '(' || i == '[' || i == '{'){
                m.push(i);
            } else if (m.size() == 0){
                return false; // Invalid format
            } else {
                char curr = m.top();
                if(curr == '('){
                    if(i != ')'){return false;}
                } else if (curr == '['){
                    if(i != ']'){return false;}
                } else {
                    if(i != '}'){return false;}
                }
                m.pop();
            }
        }

        if(m.size() != 0){
            return false; 
        } else {
            return true;
        }
        

    }
};
