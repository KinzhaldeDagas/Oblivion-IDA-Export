int __thiscall sub_9A9620(unsigned __int16 *this, char *Str1)
{
  unsigned int v3; // ebx
  int v4; // esi
  int v5; // eax

  v3 = *(this + 0xB); /*0x9a9626*/
  v4 = 0; /*0x9a962a*/
  if ( !*(this + 0xB) ) /*0x9a9626*/
    return 0xFFFFFFFF; /*0x9a9656*/
  while ( 1 ) /*0x9a9637*/
  {
    v5 = *(_DWORD *)(*((_DWORD *)this + 4) + 4 * v4); /*0x9a9637*/
    if ( v5 ) /*0x9a963c*/
    {
      if ( !CRT_StricmpLocaleDispatch(Str1, *(const char **)(v5 + 0xC)) ) /*0x9a9643*/
        break; /*0x9a9643*/
    }
    if ( ++v4 >= v3 ) /*0x9a9654*/
      return 0xFFFFFFFF; /*0x9a9654*/
  }
  return v4; /*0x9a9656*/
}
