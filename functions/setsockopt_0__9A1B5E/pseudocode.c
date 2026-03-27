// attributes: thunk
int __stdcall setsockopt_0(SOCKET s, int level, int optname, const char *optval, int optlen)
{
  return setsockopt(s, level, optname, optval, optlen);
}
