char __thiscall sub_6DE1E0(_DWORD *this, int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // esi
  int i; // ebx
  _DWORD *v7; // edx
  float **v8; // ecx

  if ( !sub_700670((NiTriBasedGeomData *)this, a2) )
    return 0;
  v4 = *(this + 2);
  if ( v4 != *(_DWORD *)(a2 + 8)
    || *(this + 3) != *(_DWORD *)(a2 + 0xC)
    || *((_BYTE *)this + 0x14) != *(_BYTE *)(a2 + 0x14) )
  {
    return 0;
  }
  v5 = 0;
  if ( !v4 )
    return 1;
  for ( i = 0; ; i += 0xC )
  {
    v7 = v5 >= *(_DWORD *)(a2 + 8) ? 0 : (_DWORD *)(i + *(_DWORD *)(a2 + 0x10));
    v8 = v5 >= v4 ? 0 : (float **)(i + *(this + 4));
    if ( !sub_6DE110(v8, v7, *(this + 3)) )
      break;
    v4 = *(this + 2);
    if ( ++v5 >= v4 )
      return 1;
  }
  return 0;
}
