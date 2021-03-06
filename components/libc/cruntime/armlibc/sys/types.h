#ifndef __TYPES_H__
#define __TYPES_H__

#include <stdint.h>

typedef int32_t clockid_t;
typedef int32_t key_t;       /* Used for interprocess communication. */
typedef int32_t pid_t;       /* Used for process IDs and process group IDs. */
typedef long ssize_t;    /* Used for a count of bytes or an error indication. */
typedef void* dev_t;

typedef int mode_t;
typedef long off_t;
typedef unsigned int size_t;

#endif
