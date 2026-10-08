int __usercall _amsg_exit@<eax>(int a1@<ebp>, int a2)
{
  int (__cdecl *v2)(int); // eax

  _FF_MSGBANNER(a1); /*0x981b4f*/
  _NMSG_WRITE(a1, a2); /*0x981b58*/
  v2 = (int (__cdecl *)(int))_decode_pointer(off_B30AC0); /*0x981b63*/
  return v2(0xFF); /*0x981b72*/
}
