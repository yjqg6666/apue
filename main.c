#include <apue.h>

int main(int argc, char* argv[]) {
    if (lseek(STDERR_FILENO, 0, SEEK_CUR) == -1)
        printf("can't seek\n");
    else
        printf("seek OK\n");
    exit(EXIT_SUCCESS);
}