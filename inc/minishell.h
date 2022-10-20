#ifndef MINISHELL_H
# define MINISHELL_H

#include <unistd.h>
#include <signal.h>
#include <stdbool.h>
#include <termios.h>
#include <stdlib.h>
#include <stdio.h>
#include <readline/history.h>
#include <readline/readline.h>

# define ERROR	-1
void    signal_ctlc(int sig);
void    signal_ctlc_heredoc(int sig);
#endif
