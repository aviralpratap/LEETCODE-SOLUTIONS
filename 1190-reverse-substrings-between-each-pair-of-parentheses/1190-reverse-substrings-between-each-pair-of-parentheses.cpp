class Solution {
public:
    string reverseParentheses(string s) {
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='('){
                for(int j=i+1;j<s.size();j++){
                    if(s[j]==')'){
                        reverse(s.begin()+i+1,s.begin()+j);
                        s.erase(j,1);
                        s.erase(i,1);
                        break;
                    }
                }
            }
        }
        return s;
    }
};