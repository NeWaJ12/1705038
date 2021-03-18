#include<stdio.h>
#include<ctype.h>
#include<string.h>

#include"cal.h"

#define MAXVAL 100
#define BUFFSIZE 100
#define NUMBER '0'

int sp = 0;
double stack[MAXVAL];

void push(double f)
{
    if (sp < MAXVAL)
    {
        stack[sp++] = f;
    }
    else
    {
        printf("error: stack full\n");
    }
}

double pop(void)
{
    if (sp > 0)
    {
        return stack[--sp];
    }
    else
    {
        printf("error: stack empty\n");
    }

    return 0.0;
}

