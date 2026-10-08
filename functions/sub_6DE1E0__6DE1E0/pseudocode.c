char __thiscall sub_6DE1E0(_DWORD *this, int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // esi
  int i; // ebx
  _DWORD *v7; // edx
  float **v8; // ecx

  if ( !sub_700670((NiTriBasedGeomData *)this, a2) ) /*0x6de1e9*/
    return 0; /*0x6de1e9*/
  v4 = *(this + 2); /*0x6de1f9*/
  if ( v4 != *(_DWORD *)(a2 + 8) /*0x6de20f*/
    || *(this + 3) != *(_DWORD *)(a2 + 0xC)
    || *((_BYTE *)this + 0x14) != *(_BYTE *)(a2 + 0x14) )
  {
    return 0; /*0x6de1f3*/
  }
  v5 = 0; /*0x6de213*/
  if ( !v4 ) /*0x6de217*/
    return 1; /*0x6de256*/
  for ( i = 0; ; i += 0xC )
  {
    v7 = v5 >= *(_DWORD *)(a2 + 8) ? 0 : (_DWORD *)(i + *(_DWORD *)(a2 + 0x10));
    v8 = v5 >= v4 ? 0 : (float **)(i + *(this + 4));
    if ( !sub_6DE110(v8, v7, *(this + 3)) ) /*0x6de240*/
      break; /*0x6de240*/
    v4 = *(this + 2); /*0x6de249*/
    if ( ++v5 >= v4 ) /*0x6de254*/
      return 1; /*0x6de254*/
  }
  return 0; /*0x6de1f2*/
}
