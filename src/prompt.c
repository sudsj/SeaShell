#include "../headers.h"
static int x = 0;
void generate_commandline()
{
	uname(&unameData);
    char *ustr;
    ustr = "USER";
    char hostname[1024];
    x += 1;
    if(x == 1){
        printf(ANSI_COLOR_BCYAN "Welcome to SeaShell by suds\n");
    }
    gethostname(hostname, 1024);
    printf(ANSI_COLOR_RED "%s@", getenv(ustr));
    printf(ANSI_COLOR_BCYAN "SeaShell: ");
    // printf("%s:", unameData.machine);
    // printf(ANSI_COLOR_CYAN " %s:", hostname);
    
    printf(ANSI_COLOR_RESET);
    printf("%s ", addr);
}