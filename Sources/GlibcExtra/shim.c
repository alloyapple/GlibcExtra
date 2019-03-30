//
// Created by color on 3/30/19.
//

#include "include/shim.h"

int fcntl_int(int fd, int cmd, int flag) {
    return fcntl(fd, cmd, flag);
}