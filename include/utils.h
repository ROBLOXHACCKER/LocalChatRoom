#ifndef UTILS_H
#define UTILS_H
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>
#include <stdio.h>


void s_title_print(void);
void update_online(int n);
void update_offline(int n);
void update_msm(int n);


typedef struct
{
    int pid;
    char* name;
    char* password;
}User;

#endif