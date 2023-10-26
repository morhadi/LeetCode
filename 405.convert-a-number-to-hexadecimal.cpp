class Solution {
public:
    string toHex(uint n) {
        if (n == 0) return "0";
        else {
            string ans , a= "0123456789abcdef"; //0.830482023722
            int i =0 , pow16 = pow(16, i);
            for ( i =0  ; i >= 0; i--) {
              int pow16 = pow(16, i);
                if (n >= pow16) 
                break ; 
            }
            for (  ; i >= 0; i--) {
                    ans += a[n / pow16];
                    n %= pow16;
            }
                 if ( n ==0 )
                    ans += '0';
            
            return ans;
        }
    }
};