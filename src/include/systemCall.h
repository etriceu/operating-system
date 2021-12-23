#ifndef SYSTEM_CALLS_H
#define SYSTEM_CALLS_H

#include "isr.h"

#include "ata.h"
#include "keyboard.h"
#include "malloc.h"
#include "myfs.h"
#include "screen.h"
#include "system.h"

void systemCall(Registers reg);

#endif // SYSTEM_CALLS_H_INCLUDED
