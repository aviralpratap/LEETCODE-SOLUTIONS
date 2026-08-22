class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double n=celsius;
        vector<double> ans;
        
            double kelvin=n+273.15000;
            ans.push_back(kelvin);
            double fahrenheit=n*1.80000+32;
            ans.push_back(fahrenheit);
        return ans;
        
    }
};