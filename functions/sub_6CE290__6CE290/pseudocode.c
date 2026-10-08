char __thiscall sub_6CE290(_BYTE *this)
{
  char result; // al
  int v3; // ecx

  result = *(this + 8) >> 5; /*0x6ce296*/
  if ( (*(this + 8) & 0x20) == 0 ) /*0x6ce29b*/
  {
    result = sub_6D0510((int)this); /*0x6ce29d*/
    v3 = *((_DWORD *)this + 0xF); /*0x6ce2a2*/
    if ( v3 ) /*0x6ce2a7*/
      return (*(char (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)v3 + 0x80))(v3, this + 0x14, this + 0x18); /*0x6ce2b9*/
  }
  return result; /*0x6ce2bb*/
}
