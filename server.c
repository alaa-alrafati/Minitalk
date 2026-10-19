/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 11:58:06 by aalrofat          #+#    #+#             */
/*   Updated: 2025/12/28 11:58:06 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static char	*g_string;

static void	add_char_to_string(unsigned char *chr)
{
	char	letter[2];
	char	*temp;

	letter[0] = *chr;
	letter[1] = '\0';
	temp = ft_strjoin(g_string, letter);
	if (temp == NULL)
		return ;
	free(g_string);
	g_string = temp;
}

static void	print_msg(void)
{
	if (g_string == NULL)
		g_string = ft_strdup("");
	ft_printf("%s\n", g_string);
	free(g_string);
	g_string = NULL;
}

void	handler(int sig, siginfo_t *info, void *ucontext)
{
	static pid_t					client_pid;
	static unsigned char			chr;
	static int						count_bit;

	(void)ucontext;
	if (client_pid == 0)
		client_pid = info->si_pid;
	if (client_pid != 0 && client_pid != info->si_pid)
		return ;
	if (sig == SIGUSR2)
		chr = chr | (1 << (7 - count_bit));
	count_bit++;
	if (count_bit == 8)
	{
		if (chr != '\0')
			add_char_to_string(&chr);
		else
		{
			print_msg();
			client_pid = 0;
		}
		chr = 0;
		count_bit = 0;
	}
	kill(info->si_pid, SIGUSR1);
}

int	main(void)
{
	struct sigaction	act;
	pid_t				id;

	g_string = NULL;
	id = getpid();
	ft_printf("server PID: %d\n", id);
	act.sa_sigaction = handler;
	sigemptyset(&act.sa_mask);
	act.sa_flags = SA_SIGINFO;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (1)
		pause();
}
