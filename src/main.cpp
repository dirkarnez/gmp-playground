#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <gmp.h>

int main(void)
{
    mpz_t x;
    mpz_t y;
    mpz_t result;

    mpz_init(x);
    mpz_init(y);
    mpz_init(result);

    mpz_set_str(x, "7612058254738945", 10);
    mpz_set_str(y, "9263591128439081", 10);

    mpz_mul(result, x, y);
    gmp_printf("\n    %Zd\n*\n    %Zd\n--------------------\n%Zd\n\n", x, y, result);

    long long a = 7612058254738945;
    long long b = 9263591128439081;
    
    std::cout << "Without gmp: " << a * b << std::endl;
    /* free used memory释放内存*/ 
    mpz_clear(x);
    mpz_clear(y);
    mpz_clear(result);

    std::cin.get();
    return EXIT_SUCCESS;
}