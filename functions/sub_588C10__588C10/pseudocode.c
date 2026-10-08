CHAR *__thiscall sub_588C10(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // edx
  int v4; // ecx

  v2 = (_DWORD *)*(this + 6); /*0x588c10*/
  if ( !v2 ) /*0x588c16*/
    return EmptyString; /*0x588c36*/
  while ( 1 ) /*0x588c20*/
  {
    v3 = v2[2]; /*0x588c20*/
    v4 = *(unsigned __int16 *)(v3 + 0x18); /*0x588c26*/
    v2 = (_DWORD *)*v2; /*0x588c2c*/
    if ( v4 == a2 ) /*0x588c2e*/
      break; /*0x588c2e*/
    if ( v4 > a2 || !v2 ) /*0x588c34*/
      return EmptyString; /*0x588c34*/
  }
  return *(CHAR **)(v3 + 8); /*0x588c3b*/
}
