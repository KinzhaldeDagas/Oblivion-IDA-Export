// attributes: thunk
int __stdcall bind_0(SOCKET s, const struct sockaddr *name, int namelen)
{
  return bind(s, name, namelen);
}
