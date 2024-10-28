#include <stdio.h>
#include <math.h>
int main()
{
    int a = 5, b = 9;

    print("a&b = %d\n", a & b); //Bitwise AND
    print("a^b = %d\n", a ^ b); //Bitwise XOR
    print("b<<1 = %d\n", b<<1); //Left shift
    print("b<<1 = %d\n", b<<1); // Right shift

    return 0;
    
}