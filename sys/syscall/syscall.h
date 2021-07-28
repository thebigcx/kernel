#pragma once

#include <arch/x86_64/system.h>
#include <kernel/syscall.h>

#define SYS_READ        0
#define SYS_WRITE       1
#define SYS_OPEN        2
#define SYS_CLOSE       3
#define SYS_MMAP        4
#define SYS_IOCTL       5
#define SYS_STAT        6
#define SYS_FORK        7
#define SYS_EXECVE      8
#define SYS_WAITID      9
#define SYS_EXIT        10
#define SYS_NANOSLEEP   11
#define SYS_LSEEK       12
#define SYS_CREATETHREAD 13
#define SYS_EXITTHREAD  14
#define SYS_KILLTHREAD  15
#define SYS_JOINTHREAD  16
#define SYS_KILL     	17
#define SYS_GETPID      18

#define SEEK_SET        1
#define SEEK_CUR        2
#define SEEK_END        3

void syscall_handler(reg_ctx_t* regs);
