// attributes: thunk
int __stdcall select_0(int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, const struct timeval *timeout)
{
  return select(nfds, readfds, writefds, exceptfds, timeout);
}
