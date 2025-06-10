#include <stdio.h>

/**
 * @brief Computes (a^b) mod m efficiently.
 *
 * This function uses modular exponentiation by squaring to compute
 * the result efficiently even for large exponents.
 *
 * @param a The base integer.
 * @param b The exponent (non-negative).
 * @param m The modulus (positive).
 * @return The value of (a^b) % m.
 *
 * @note This function assumes b >= 0 and m > 0.
 *
 * @example
 * int result = pow_mod(10, 3, 7); // result = 6
 */ 
 
int pow_mod(int a, int b, int m)
{
    int result = 1;
 
    if (m == 1) {
       return 0;
    }
 
    if (b == 0) {
        return 1;
    }
 
    a = a % m;
    
    if (a < 0) {
        a += m;
    }
 
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % m;
        }
      
        a= (a * a) % m;       
        b /= 2;
       }   
    
    printf("%d\n", result);
    return result;
 
}
 
 int main() {
    pow_mod(10, 3, 7);
    pow_mod(-10, 3, 7);
    pow_mod(48, 100, 101);
    pow_mod(4800000, 100, 101);
    
 }
 
   // for (int i = 0; i < b\2; i++) {
   //     result = (result * a) % m;   //result = (result*a) - ((result*a) / m) * m;
   // }
 
 
