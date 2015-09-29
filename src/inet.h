
#ifndef INET_H
#if defined(_WIN32) && !defined(inet_ntop)
const char *inet_ntop(int af, const void *src, char *dst, int cnt);
int inet_pton(int af, const char *src, void *dst);
#endif
#endif

