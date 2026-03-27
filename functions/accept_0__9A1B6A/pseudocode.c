// attributes: thunk
SOCKET __stdcall accept_0(SOCKET s, struct sockaddr *addr, int *addrlen)
{
  return accept(s, addr, addrlen);
}
