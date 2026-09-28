class Solution {
public:
    int maxDepth(string s) {
        int depth=0;
        int actualdepth=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                depth++;
                actualdepth=max(depth,actualdepth);
            }
            else if(s[i]==')'){
                depth--;
            }

        }
        return actualdepth;
        
    }
};