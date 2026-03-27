float *__thiscall sub_58CC60(float *this, _DWORD *a2, int a3, int a4)
{
  int v5; // edi
  int v6; // esi
  int i; // eax
  float Float; // [esp+10h] [ebp+8h]

  if ( a3 < 0xFA1 || a3 >= dword_B13BC0 && a3 < 0x2710 )
    return 0;
  v5 = *((_DWORD *)this + 4);
  for ( *(_DWORD *)(v5 + 0xC) = 0x65; *(_DWORD *)(v5 + 4); v5 = *(_DWORD *)(v5 + 4) )
    ;
  v6 = FormHeapAlloc(0x18u);
  if ( v6 )
  {
    Float = Tile_GetFloat(a2, a3);
    *(float *)(v6 + 8) = Float;
    *(_DWORD *)v6 = v5;
    *(_DWORD *)(v6 + 4) = 0;
    *(_DWORD *)(v6 + 0xC) = a4;
    *(_DWORD *)(v6 + 0x10) = 0;
    *(_DWORD *)(v6 + 0x14) = 0;
  }
  else
  {
    v6 = 0;
  }
  *(_DWORD *)(v5 + 4) = v6;
  for ( i = Tile_GetPropertyByCode_(a2, (_DWORD *)a3)[5]; *(_DWORD *)(i + 0x14); i = *(_DWORD *)(i + 0x14) )
    ;
  *(_DWORD *)(i + 0x14) = v6;
  *(_DWORD *)(v6 + 0x10) = i;
  DoActionEnumeration(this, 0);
  return (float *)v6;
}
