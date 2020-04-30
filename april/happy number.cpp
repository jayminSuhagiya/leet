class Solution {
public:
    int squreofDigits(int n){
    int sq = 0;
        while(n){
            int digit = n % 10;
            sq += digit * digit;
            n/=10;
        }
        return sq;
    }
    bool isHappy(int n) {
        
        while(1){
            if( n == 1)
                return true;
            n = squreofDigits(n);
            if( n == 4)
                return false;
        }
       return false; 
    }
};