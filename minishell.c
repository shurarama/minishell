#include "minishell.h"
#include <readline/history.h>

void minishell(char *line)
{
	//l_type *l;

	//l = token(line);
	//free(line);
	//parse(l);
	//execute(l);
}

int main()
{
	char	*line;

	//init_envp(envp);
	signal(SIGQUIT, SIG_IGN);
    while (1)
    {
    	signal(SIGINT, signal_ctlc);
		//termios_change(false);
		line = readline("$lol>");
		if (!line)
			break;
		//minishell(line);
    }
	clear_history();
}
