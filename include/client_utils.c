#include "./utils.h"



User login(User *user, int numUsers)
{
    char choise;
    User t_user;

    char name[50];
    char psw[50];

    t_user.pid = getpid();
    while(1)
    {
        system("clean");
        printf("- - LOGIN OR SINGUP - -\n");
        printf("[USERNAME]\n> ");
        scanf("%s", name);
        printf("[PASSWORD]\n>");
        scanf("%s", psw);

        t_user.name = name;
        t_user.password = psw;

        
    }
}
