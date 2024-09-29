#include <stdio.h>

double return_tan_helper(double x);

int main(int argc, char *argv[])
{
    printf("hello world\n"); // Print out hello world

    printf("%f\n", return_tan_helper(0.5)); // return_tan from helper.c

    return 0; // Return 0 to indicate that all went well
}
