#include "minishell.h"

void    signal_ctlc(int sig)
{
        if (sig == SIGINT)
        {
                write(1, "\n", 1);
                rl_replace_line("", 0);
                rl_on_new_line();
                rl_redisplay();
        }
}

void    signal_ctlc_heredoc(int sig)
{
        if (sig == SIGINT)
        {
                close(STDIN_FILENO);
                write(STDERR_FILENO, "\n", 1);
        }
}

int	termios_change(bool echo_ctl_chr)
{
	struct termios	terminos_p;
	int				status;

	status = tcgetattr(STDOUT_FILENO, &terminos_p);
	if (status == -1)
		return (ERROR);
	if (echo_ctl_chr)
		terminos_p.c_lflag |= ECHOCTL;
	else
		terminos_p.c_lflag &= ~(ECHOCTL);
	status = tcsetattr(STDOUT_FILENO, TCSANOW, &terminos_p);
	if (status == -1)
		return (ERROR);
	return (0);
}
