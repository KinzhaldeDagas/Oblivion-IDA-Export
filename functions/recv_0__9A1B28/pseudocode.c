// attributes: thunk
int __stdcall recv_0(SOCKET s, char *buf, int len, int flags)
{
  return recv(s, buf, len, flags);
}
