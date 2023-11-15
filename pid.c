#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: Prints the process ID and the sum of three integers.
 * Returns: Always 0 (Success)
 */
int main(void)
{
    int a = 8;
    int b = 7;
    int c = 5;

    int sum = a + b + c;
    pid_t pid = getpid();

    printf("Process ID is %d\n", pid);
    printf("Sum of a, b, and c is %d\n", sum);

    return(0);
}
