void __usercall _FF_MSGBANNER(int a1@<ebp>)
{
  if ( _set_error_mode(3) == 1 || !_set_error_mode(3) && dword_B30DA8 == 1 )
  {
    _NMSG_WRITE(a1, 0xFC);
    _NMSG_WRITE(a1, 0xFF);
  }
}
