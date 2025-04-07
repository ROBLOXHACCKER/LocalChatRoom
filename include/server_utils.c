#include "./utils.h"

int checkCorrispondenza(User user, User *users, int numUsers)
{
    int i = 0;
    numUsers -= 1;
    while(numUsers > 0)
    {
        if(strcmp(user.name, users[numUsers].name) && strcmp(user.password, users[numUsers].password))
        {
            return 0;
        }
        numUsers--;
    }
    return -1;
}






















void s_title_print(void)
{
    system("clear");
    printf("\033[38;5;10m██████╗██╗  ██╗ █████╗ ████████╗    ██████╗  ██████╗  ██████╗ ███╗   ███╗\n");
    printf("██╔════╝██║  ██║██╔══██╗╚══██╔══╝    ██╔══██╗██╔═══██╗██╔═══██╗████╗ ████║\n");
    printf("██║     ███████║███████║   ██║       ██████╔╝██║   ██║██║   ██║██╔████╔██║\n");
    printf("██║     ██╔══██║██╔══██║   ██║       ██╔══██╗██║   ██║██║   ██║██║╚██╔╝██║\n");
    printf("╚██████╗██║  ██║██║  ██║   ██║       ██║  ██║╚██████╔╝╚██████╔╝██║ ╚═╝ ██║\n");
    printf(" ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝       ╚═╝  ╚═╝ ╚═════╝  ╚═════╝ ╚═╝     ╚═╝\n");
    printf("\033[0m\n\n");

    printf("\033[35m   - - USERS - - \033[0m\n");
    printf("\033[38;5;213m> ONLINE  [ 0 ]\033[0m\n");
    printf("\033[38;5;213m> OFFLINE [ 0 ]\033[0m\n\n");

    printf("\033[35m   - - MESSAGE - - \033[0m\n");
    printf("\033[38;5;213m> MSM     [ 0 ]\033[0m\n\n");

    printf("\033[35m   - - PID SERVER - - \033[0m\n");
    printf("\033[38;5;213m> PID     [ %d ]\033[0m\n\n", getpid());
}

void update_online(int n) {
    printf("\033[10;19H");
    printf("%-3d", n);
    fflush(stdout);
}

void update_offline(int n) {
    printf("\033[11;20H");
    printf("%-3d", n);
    fflush(stdout);
}

void update_msm(int n) {
    printf("\033[13;20H");
    printf("%-3d", n);
    fflush(stdout);
}