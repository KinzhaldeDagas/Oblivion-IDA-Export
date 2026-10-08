char __thiscall sub_6C6110(_DWORD *this, int a2)
{
  _DWORD *v2; // eax

  v2 = *(_DWORD **)(a2 + 0x58); /*0x6c6114*/
  if ( !v2 ) /*0x6c6119*/
    return 1; /*0x6c612b*/
  while ( v2 != this ) /*0x6c6122*/
  {
    v2 = (_DWORD *)v2[0x16]; /*0x6c6124*/
    if ( !v2 ) /*0x6c6129*/
      return 1; /*0x6c6129*/
  }
  return 0; /*0x6c612d*/
}
