double __thiscall EffectItemList_MagickaCost(_DWORD *this)
{
  _DWORD *v1; // esi
  double v3; // st7
  int v4; // ecx
  int v5; // esi
  double v6; // st7
  float v7; // [esp+8h] [ebp-4h]

  v1 = this;
  if ( !*(this + 2) && !*(this + 1) )
    return 0.0;
  v3 = 0.0;
  v7 = 0.0;
  if ( !this )
    return (float)FloatFloor(v7);
  do
  {
    v4 = v1[1];
    if ( (*(_DWORD *)(*(_DWORD *)(v4 + 0x1C) + 0x58) & 0x400000) == 0 )
    {
      EffectItem_MagickaCost((float *)v4);
      v3 = v3 + v7;
      v7 = v3;
    }
    v5 = v1[2];
    if ( !v5 )
      break;
    v1 = (_DWORD *)(v5 - 4);
  }
  while ( v1 );
  v6 = 0.0;
  if ( v7 >= 0.0 )
    return (float)FloatFloor(v7);
  return (float)v6;
}
