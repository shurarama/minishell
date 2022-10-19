#include "minishell.h"
#include <readline/history.h>

int main()
{
	char	*line;

	//init_envp(envp);
	signal(SIGQUIT, SIG_IGN);
    while (1)
    {
    	//signal(SIGINT, signal_ctlc);
		//termios_change(false);
		line = readline("$lol>");
		if (!line)
			break;
		//minishell(line);
    }
	clear_history();
}
