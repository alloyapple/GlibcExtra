//
// Created by color on 3/30/19.
//

#ifndef GLIBCEXTRA_SHIM_H
#define GLIBCEXTRA_SHIM_H

#include <sys/wait.h>
#include <string.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <linux/netlink.h>
#include <stdio.h>
#include <sys/time.h>
#include <sys/syscall.h>
#include <unistd.h>

#include <sys/socket.h>
#include <linux/if_packet.h>
#include <linux/tipc.h>
#include <net/ethernet.h>

#include <sys/ioctl.h>
#include <net/if.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/epoll.h>

#include <pty.h>
#include <sys/stat.h>
#include <fcntl.h>

int fcntl0(int fd, int cmd);
int fcntl1(int fd, int cmd, int flag);


#endif //GLIBCEXTRA_SHIM_H
