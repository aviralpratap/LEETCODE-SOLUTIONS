class Solution {
public:
    int scoreOfString(string s) {
        int sum=0;
        int difference=0;
        
        for(int i=0;i<s.length()-1;i++){
            difference=abs(s[i]-s[i+1]);
            sum+=difference;


        }

            
        return sum;
        
        
    }
};