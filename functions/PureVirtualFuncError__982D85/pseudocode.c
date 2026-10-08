void __usercall __noreturn PureVirtualFuncError(int a1@<ebp>)
{
  void (*v1)(void); // eax

  v1 = (void (*)(void))_decode_pointer((void *)dword_BA9E10[0x1F7]); /*0x982d8b*/
  if ( v1 ) /*0x982d93*/
    v1(); /*0x982d95*/
  _NMSG_WRITE(a1, 0x19); /*0x982d99*/
  _set_abort_behavior(0, 1u); /*0x982da2*/
  abort(); /*0x982daa*/
}
