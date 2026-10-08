char __thiscall sub_4A3E60(_DWORD *this, const char **a2)
{
  int v3; // edx
  unsigned int v4; // eax
  const char *v5; // eax

  v3 = *(this + 2); /*0x4a3e64*/
  if ( !v3 ) /*0x4a3e69*/
    return 0; /*0x4a3e69*/
  LOWORD(v4) = *(_WORD *)(v3 + 8); /*0x4a3e6b*/
  v4 = (_WORD)v4 == 0xFFFF ? strlen(*(const char **)(v3 + 4)) : (unsigned __int16)v4;
  if ( v4 ) /*0x4a3e96*/
  {
    v5 = *(const char **)(v3 + 4); /*0x4a3e98*/
    if ( !v5 ) /*0x4a3e9f*/
      v5 = EmptyString; /*0x4a3ea1*/
    if ( !CRT_StricmpLocaleDispatch(v5, *a2) ) /*0x4a3ea8*/
      return 0; /*0x4a3ecc*/
  }
  BSStringT_Set((BSStringT *)(*(this + 2) + 4), *a2, 0); /*0x4a3ebf*/
  return 1; /*0x4a3ec4*/
}
