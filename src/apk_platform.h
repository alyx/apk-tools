#if defined __linux__ || defined __linux
#include <sys/xattr.h>
#elif defined __FreeBSD__ || defined BSD
#include <sys/types.h>
#include <sys/extattr.h>
#define flistxattr(x, y, z) extattr_list_fd(x, y, z)
#define fgetattr(w, x, y, z) extattr_get_fd(w, x, y, z)
#endif