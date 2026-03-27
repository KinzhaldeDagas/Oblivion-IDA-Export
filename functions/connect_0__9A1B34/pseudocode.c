// attributes: thunk
int __stdcall connect_0(SOCKET s, const struct sockaddr *name, int namelen)
{
  return connect(s, name, namelen);
}
