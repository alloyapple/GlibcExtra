//
// Created by color on 3/30/19.
//

#include "include/shim.h"

int fcntl_set(int fd, int cmd, int flag) {
    return fcntl(fd, cmd, flag);
}

int fcntl_get(int fd, int cmd) {
    return fcntl(fd, cmd);
}