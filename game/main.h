#ifndef _EPOLL_H_
#define _EPOLL_H_

#include <arpa/inet.h>
#include <fcntl.h>              // fcntl
#include <errno.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/epoll.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>


#define MAX_EVENTS 256
#define MAX_FD 1024 * 1024

#define DEBUG


void io_loop(int listen_sock, int epollfd);
void process_request(int client,int epoll_fd);

#endif


