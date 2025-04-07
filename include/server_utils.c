#include "./utils.h"

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