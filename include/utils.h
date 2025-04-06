#ifndef UTILS_H
#define UTILS_H
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <stdio.h>

void s_title_print(void);

struct s
{   
    unsigned int online;
    unsigned int offline;
    unsigned int mpm;
};

struct p
{
    char name[12];
    char psw[12];
};






#endif