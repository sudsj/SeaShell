#include "../headers.h"

int execute_help(char **args)
{
  printf("Help yourself :P\n");
  printf("Goodluck from SeaShell\n");
  return 1;
}

int execute_exit(char **args)
{
	printf("Exiting SeaShell see you later\n");
	return 0;
}