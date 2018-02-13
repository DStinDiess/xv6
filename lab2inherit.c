#include "types.h"
#include "user.h"


int main() {
  setpriority(0);
  int pid = fork();
  int i = 0;
  if (!pid) {
    setpriority(25);
    printf(1, "Child priority before: 25\n");
    for (i = 0; i < 50000; ++i);
    printf(1, "Child priority after: %d\n", setpriority(-100));
    exit(0);
  } else if (pid < 0) {
    printf(1, "Error forking\n");
  } else {
    wait(0);
    exit(0);
  }
  return 0;
}
