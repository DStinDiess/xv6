#include "types.h"
#include "user.h"

unsigned long returnZero(unsigned long);
int fib(int);

int main(int argc, char** argv) {

    fib(200);

    exit();
    return 0;
}

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;


    return fib(n-1) + fib(n-2);
}


