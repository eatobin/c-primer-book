// find . -regex '.*\.\(c\|h\)' -exec clang-format -style=file -i {} \;
// [eric@linux-x2vq code]$ gcc -o yup most.c hello_fn.c hello.h
#include "hello.h"

int main(void) {
  hello("MOST worldly Eric!");
  return 0;
}
