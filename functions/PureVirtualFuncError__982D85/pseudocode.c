void __noreturn PureVirtualFuncError()
{
  void (*v0)(void); // eax

  v0 = (void (*)(void))_decode_pointer(dword_BAA5EC);
  if ( v0 )
    v0();
  _NMSG_WRITE(0x19);
  _set_abort_behavior(0, 1u);
  abort();
}
