char __thiscall sub_740A90(unsigned int *this, int a2)
{
  unsigned int v3; // edx
  _DWORD *v4; // eax
  unsigned int v5; // ecx
  int v6; // esi

  if ( !a2 ) /*0x740a97*/
    return 0; /*0x740a97*/
  v3 = *(this + 3); /*0x740a9f*/
  if ( v3 != *(_DWORD *)(a2 + 0xC) ) /*0x740aa5*/
    return 0; /*0x740aa5*/
  v4 = (_DWORD *)*(this + 4); /*0x740aa7*/
  if ( v4 ) /*0x740aac*/
  {
    if ( *(_DWORD *)(a2 + 0x10) ) /*0x740aae*/
      goto LABEL_8; /*0x740ab2*/
    return 0; /*0x740a9c*/
  }
  if ( *(_DWORD *)(a2 + 0x10) ) /*0x740ab8*/
    return 0; /*0x740abc*/
LABEL_8:
  if ( !v4 ) /*0x740ac1*/
    return 1; /*0x740ac1*/
  v5 = 0; /*0x740ac3*/
  if ( !v3 ) /*0x740ac7*/
    return 1; /*0x740ae1*/
  v6 = *(_DWORD *)(a2 + 0x10) - (_DWORD)v4; /*0x740acc*/
  while ( *v4 == *(_DWORD *)((char *)v4 + v6) ) /*0x740ad5*/
  {
    ++v5; /*0x740ad7*/
    ++v4; /*0x740ada*/
    if ( v5 >= v3 ) /*0x740adf*/
      return 1; /*0x740adf*/
  }
  return 0; /*0x740a9b*/
}
