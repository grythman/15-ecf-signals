#include "csapp.h"

/* $begin waitprob0 */
/* $begin wasidewaitprob0 */
int main()
{
    if (fork() == 0)
    {
        printf("9");
        fflush(stdout);
    }
    else
    {
        printf("0");
        fflush(stdout);
        waitpid(-1, NULL, 0);
    }
    printf("3");
    fflush(stdout);
    printf("6");
    exit(0);
}
/* $end waitprob0 */
/* $end wasidewaitprob0 */