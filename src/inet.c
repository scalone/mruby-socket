#if defined(_WIN32) && !defined(inet_ntop)

#include <stdlib.h>

const char *inet_ntop(int af, const void *src, char *dst, int cnt)
{
  return NULL;
}

int inet_pton(int af, const char *src, void *dst)
{
  return NULL;
}
#endif

