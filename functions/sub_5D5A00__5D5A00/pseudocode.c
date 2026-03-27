int __thiscall sub_5D5A00(_DWORD *this)
{
  int v1; // eax
  int v2; // edi
  _DWORD *v3; // esi
  _DWORD *v4; // ecx

  v1 = *(this + 0xA);
  v2 = 0;
  if ( !v1 )
    return 0;
  v3 = *(_DWORD **)(v1 + 0x34);
  while ( v3 )
  {
    v4 = (_DWORD *)v3[2];
    v3 = (_DWORD *)*v3;
    if ( v4 )
    {
      if ( Tile_GetFloat(v4, 0xFB1) == fConstant_2 )
        ++v2;
    }
  }
  return v2;
}
