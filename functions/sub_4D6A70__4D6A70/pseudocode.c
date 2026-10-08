double __thiscall sub_4D6A70(_DWORD *this)
{
  int v1; // esi
  int v2; // eax

  if ( !this ) /*0x4d6a74*/
    return (float)0.0; /*0x4d6a74*/
  v1 = *(this + 2); /*0x4d6a76*/
  if ( !v1 ) /*0x4d6a7b*/
    return (float)0.0; /*0x4d6aa6*/
  v2 = sub_8A98D0((_DWORD **)*(this + 2)); /*0x4d6a7f*/
  if ( !v2 ) /*0x4d6a86*/
    v2 = *(_DWORD *)(v1 + 0x50); /*0x4d6a88*/
  return *(float *)(v2 + 0xB4); /*0x4d6a9e*/
}
