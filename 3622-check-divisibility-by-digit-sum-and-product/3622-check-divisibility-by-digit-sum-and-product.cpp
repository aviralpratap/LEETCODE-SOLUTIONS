class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int product=1;
        int total=0;
        int original=n;
        while(n>0){
            int digit=n%10;
            sum+=digit;
            product*=digit;
            n=n/10;

        }
        total=sum+product;
        if(original%total==0){
            return true;
        }
        else{
            return false;
        }
        
    }
};