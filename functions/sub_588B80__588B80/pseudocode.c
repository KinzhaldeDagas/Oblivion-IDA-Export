bool __thiscall sub_588B80(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // edx
  int v4; // ecx

  v2 = (_DWORD *)*(this + 6); /*0x588b80*/
  if ( !v2 ) /*0x588b86*/
    return 0; /*0x588ba6*/
  while ( 1 ) /*0x588b90*/
  {
    v3 = v2[2]; /*0x588b90*/
    v4 = *(unsigned __int16 *)(v3 + 0x18); /*0x588b96*/
    v2 = (_DWORD *)*v2; /*0x588b9c*/
    if ( v4 == a2 ) /*0x588b9e*/
      break; /*0x588b9e*/
    if ( v4 > a2 || !v2 ) /*0x588ba4*/
      return 0; /*0x588ba4*/
  }
  return *(_BYTE *)(v3 + 0x1A) || 0.0 != *(float *)(v3 + 4); /*0x588ba8*/
}
