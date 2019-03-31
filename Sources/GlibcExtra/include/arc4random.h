//
// Created by color on 3/31/19.
//

#ifndef GLIBCEXTRA_ARC4RANDOM_H
#define GLIBCEXTRA_ARC4RANDOM_H

#include <stdint.h>

void arc4random_stir(void);
void arc4random_addrandom(unsigned char *, int);
unsigned int arc4random(void);
uint32_t arc4random_uniform(uint32_t upper);

#endif //GLIBCEXTRA_ARC4RANDOM_H
