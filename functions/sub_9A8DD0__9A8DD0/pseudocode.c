int __thiscall sub_9A8DD0(unsigned __int16 *this, char *Str1)
{
  unsigned int v3; // ebp
  int v4; // edi
  int v5; // esi

  v3 = *(this + 0xB); /*0x9a8dd4*/
  v4 = 0; /*0x9a8dda*/
  if ( !*(this + 0xB) ) /*0x9a8dd4*/
    return 0; /*0x9a8e06*/
  while ( 1 ) /*0x9a8de3*/
  {
    v5 = *(_DWORD *)(*((_DWORD *)this + 4) + 4 * v4); /*0x9a8de3*/
    if ( v5 ) /*0x9a8de8*/
    {
      if ( !CRT_StricmpLocaleDispatch(Str1, *(const char **)(v5 + 0xC)) ) /*0x9a8df3*/
        break; /*0x9a8df3*/
    }
    if ( ++v4 >= v3 ) /*0x9a8e04*/
      return 0; /*0x9a8e04*/
  }
  return v5; /*0x9a8e06*/
}
