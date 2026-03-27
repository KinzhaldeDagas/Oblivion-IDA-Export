// attributes: thunk
int __stdcall send_0(SOCKET s, const char *buf, int len, int flags)
{
  return send(s, buf, len, flags);
}
