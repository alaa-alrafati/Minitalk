/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalrofat <aalrofat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 14:38:45 by aalrofat          #+#    #+#             */
/*   Updated: 2025/12/28 14:38:45 by aalrofat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

static int	g_ack;

static void	ack_handler(int sig)
{
	(void)sig;
	g_ack = 1;
}

static int	error_and_return(char *msg)
{
	ft_putstr_fd(msg, 2);
	exit(1);
}

void	send_message(int server_pid, unsigned char chr)
{
	int	bit;

	bit = 0;
	while (bit <= 7)
	{
		g_ack = 0;
		if ((1 << (7 - bit) & chr) != 0)
		{
			if (kill(server_pid, SIGUSR2) == -1)
				error_and_return("Error: Server PID Failed\n");
		}
		else
		{
			if (kill(server_pid, SIGUSR1) == -1)
				error_and_return("Error: Server PID Failed\n");
		}
		while (g_ack == 0)
			pause();
		bit++;
	}
}

int	main(int argc, char **argv)
{
	int	server_pid;
	int	x;

	if (argc != 3)
		error_and_return("Error: invalid arguments\n./client PID MESSAGE\n");
	server_pid = ft_atoi(argv[1]);
	if (server_pid <= 0)
		error_and_return("Error: Wrong Server PID\n");
	x = 0;
	while (argv[1][x])
	{
		if (!ft_isdigit (argv[1][x++]))
			error_and_return("Error: Wrong Server PID\n");
	}
	signal(SIGUSR1, ack_handler);
	x = 0;
	while (argv[2][x] != '\0')
	{
		send_message(server_pid, argv[2][x]);
		x++;
	}
	send_message(server_pid, '\0');
	return (0);
}
