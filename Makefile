NAME		= minishell

SRCS		= $(wildcard *.c)
OBJS		= $(SRCS:.c=.o)

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

INCLUDES	= -I./inc -lreadline

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I./inc	-c $< -o $@

