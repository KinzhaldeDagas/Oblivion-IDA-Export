char __thiscall sub_593C90(void **this, int a2)
{
  if ( !sub_57D2F0(*(this + 0x28)) ) /*0x593c99*/
    return 0; /*0x593cc6*/
  sub_57FF50((char *)*(this + 0x28), a2); /*0x593cad*/
  sub_593710((char **)this); /*0x593cb4*/
  *((_BYTE *)this + 0xA4) = 2; /*0x593cb9*/
  return 1; /*0x593cc2*/
}
