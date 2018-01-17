#include "types.h"
#include "stat.h"
#include "user.h"

int
main (int argc, char* argv[])
{
    printf(0, "hello world (pid:%d)\n", (int) getpid());
    int rc = fork();
    if (rc < 0) {
        exit(1);
    } else if (rc == 0) {
        printf(0, "Hello, I am child (pid:%d)\n", (int) getpid());
        exit(0);
    } else {
        int wc = waitpid(rc, 0, 0);
        printf(0, "hello, I am parent of %d (wc:%d) (pid:%d)\n",
                rc, wc, (int) getpid());
        //exit(0);
    }

    return 0;
}
