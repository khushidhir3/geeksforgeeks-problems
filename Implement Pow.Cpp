class Solution {
  public:
    double power(double b, int e) {
      if(e==0) return 1;  
    if(b==0) return 0;

        bool isNegative =(e < 0);
        long long exp =abs((long long)e);
        
        double result = 1.0;
        while (exp > 0) {
            if (exp % 2 == 1) { 
                result *= b;
            }
            b *= b;  
            exp /= 2; 
        }

        return isNegative ? 1.0 / result : result;
    }
};
