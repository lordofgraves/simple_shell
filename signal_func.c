#include "shell.h"

/**
  * signal_func - this function is a signal handler for sigint
  * @sig_num: received number
  *
  * Return: NOTHING
  */
void signal_func(int sig_num)
{
	switch (sig_num)
	{
		case SIGINT:
			write(STDOUT_FILENO, "\n$ ", 3);
			break;
		default:
			break;
	}
}
