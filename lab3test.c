#include "types.h"
#include "user.h"

unsigned long returnZero(unsigned long);
int fib(int);

int main(int argc, char** argv) {

    fib(100);

    exit();
    return 0;
}

int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fib(n-1) + fib(n-2);
}

unsigned long returnZero(unsigned long num) {
    int arr[1000];

    arr[0] = 0;

    if (num == arr[0])
        return 0;
    
    return returnZero(num - 1);
}
