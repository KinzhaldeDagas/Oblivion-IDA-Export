char __thiscall sub_593C90(void **this, int a2)
{
  if ( !sub_57D2F0(*(this + 0x28)) )
    return 0;
  sub_57FF50((char *)*(this + 0x28), a2);
  sub_593710((char **)this);
  *((_BYTE *)this + 0xA4) = 2;
  return 1;
}
