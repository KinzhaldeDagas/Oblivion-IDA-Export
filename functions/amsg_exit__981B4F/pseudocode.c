int __cdecl _amsg_exit(int a1)
{
  int (__cdecl *v1)(int); // eax

  _FF_MSGBANNER();
  _NMSG_WRITE(a1);
  v1 = (int (__cdecl *)(int))_decode_pointer(off_B30AC0);
  return v1(0xFF);
}
