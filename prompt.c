#include "main.h"

/**
 * prompt - printing $ to let user know the program is
 * ready to take input
 * printing prompt if shell on intercative mode
 * Return: no return
 */

char prompt(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;
	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}
