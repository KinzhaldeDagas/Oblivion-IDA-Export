void __usercall _FF_MSGBANNER(int a1@<ebp>)
{
  if ( _set_error_mode(3) == 1 || !_set_error_mode(3) && dword_B30DA8 == 1 ) /*0x98d778*/
  {
    _NMSG_WRITE(a1, 0xFC); /*0x98d77f*/
    _NMSG_WRITE(a1, 0xFF); /*0x98d789*/
  }
}
