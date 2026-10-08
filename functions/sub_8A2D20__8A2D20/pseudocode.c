double __thiscall sub_8A2D20(_DWORD *this)
{
  int v1; // esi
  int v2; // eax

  if ( !this ) /*0x8a2d24*/
    return (float)0.0; /*0x8a2d24*/
  v1 = *(this + 2); /*0x8a2d26*/
  if ( !v1 ) /*0x8a2d2b*/
    return (float)0.0; /*0x8a2d56*/
  v2 = sub_8A98D0((_DWORD **)*(this + 2)); /*0x8a2d2f*/
  if ( !v2 ) /*0x8a2d36*/
    v2 = *(_DWORD *)(v1 + 0x50); /*0x8a2d38*/
  return *(float *)(v2 + 0xB8); /*0x8a2d4e*/
}
