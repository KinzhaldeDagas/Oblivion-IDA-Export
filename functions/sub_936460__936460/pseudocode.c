unsigned int __thiscall sub_936460(unsigned __int8 *this, int a2, int a3, _BYTE *a4)
{
  unsigned __int8 v5; // bl
  unsigned int result; // eax
  _DWORD *v7; // edi

  v5 = *(this + 0x21); /*0x936464*/
  if ( v5 > 8u ) /*0x93646a*/
    return 0xFFFFFFFF; /*0x93646d*/
  v7 = a4; /*0x936475*/
  if ( *sub_9363E0(this, &a4, a4) ) /*0x936486*/
    return 0xFFFFFFFF; /*0x936486*/
  result = v5; /*0x93648b*/
  if ( v5 >= 8u ) /*0x936491*/
    return 0xFFFFFFFF; /*0x9364a8*/
  *((_DWORD *)this + v5) = *v7; /*0x936495*/
  ++*(this + 0x21); /*0x93649e*/
  return result; /*0x93646c*/
}
