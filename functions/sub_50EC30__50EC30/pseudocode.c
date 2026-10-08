char __thiscall sub_50EC30(_DWORD *this, char *Str2, _DWORD *a3)
{
  _DWORD *v4; // esi
  int v5; // edi

  if ( !Str2 ) /*0x50ec37*/
    return 0; /*0x50ec39*/
  v4 = this + 0x43; /*0x50ec40*/
  if ( this != (_DWORD *)0xFFFFFEF4 ) /*0x50ec49*/
  {
    while ( v4[1] || *v4 ) /*0x50ec59*/
    {
      v5 = *v4; /*0x50ec5b*/
      if ( !CRT_StricmpLocaleDispatch(*(const char **)(*v4 + 4), Str2) ) /*0x50ec6c*/
      {
        *a3 = v5; /*0x50ec81*/
        return 1; /*0x50ec85*/
      }
      v4 = (_DWORD *)v4[1]; /*0x50ec6e*/
      if ( !v4 ) /*0x50ec73*/
        return 0; /*0x50ec73*/
    }
  }
  return 0; /*0x50ec3b*/
}
