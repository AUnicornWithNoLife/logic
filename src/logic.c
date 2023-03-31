#include <stdio.h>
#include <stdbool.h>

#include "logic_run.h"
#include "logic_karn.h"

int main(int argc, char** argv)
{
    int x, y;
    char d[] = "(D^B)v(B^-C)v(B^(-C^-D))v(A^C^D)v(-C^D^-A^-B)";

    bool* c = logic_karn_run(d, 4, &x, &y);
    logic_karn_render(c, x, y);

    return 0;
}