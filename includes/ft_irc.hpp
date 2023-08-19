/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_irc.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guribeir <guribeir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:20:48 by etachott          #+#    #+#             */
/*   Updated: 2023/08/19 19:49:26 by etachott         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IRC_HPP
#define FT_IRC_HPP

#define LOG(x) std::cout << x << std::endl;
#define ERROR(x) std::cerr << x << std::endl;
#define CLIENT_LIMIT 1024
#define TIMEOUT 1000
#define BUFFER_SIZE 512

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <signal.h>
#include <fcntl.h>
#include <errno.h>
#include <poll.h>

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>

#include "Client.hpp"

typedef struct sockaddr_in sockAddrIn;
typedef struct sockaddr sockAddr;
typedef struct pollfd pollfd;

int		getPort(char *input);
int		setupTCP(int port);
void	mainLoop(int sockfd);
Client	intantiateNewClient(int serverfd, int clientfd, pollfd pollfds[CLIENT_LIMIT]);
void	treatClientMessage(int currClientfd);

#endif
