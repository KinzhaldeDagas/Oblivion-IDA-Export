double __thiscall EffectItemList_MagickaCost(_DWORD *this)
{
  _DWORD *v1; // esi
  int v3; // ecx
  int v4; // esi
  double v5; // st7
  float v6; // [esp+8h] [ebp-4h]

  v1 = this; /*0x415242*/
  if ( !*(this + 2) && !*(this + 1) ) /*0x41524a*/
    return 0.0; /*0x415250*/
  v6 = 0.0; /*0x415259*/
  if ( !this ) /*0x41525d*/
    return (float)FloatFloor(v6); /*0x41525d*/
  do /*0x415288*/
  {
    v3 = v1[1]; /*0x415260*/
    if ( (*(_DWORD *)(*(_DWORD *)(v3 + 0x1C) + 0x58) & 0x400000) == 0 ) /*0x41526f*/
      v6 = EffectItem_MagickaCost((float *)v3) + v6; /*0x41527a*/
    v4 = v1[2]; /*0x41527e*/
    if ( !v4 ) /*0x415283*/
      break; /*0x415283*/
    v1 = (_DWORD *)(v4 - 4); /*0x415285*/
  }
  while ( v1 ); /*0x415288*/
  v5 = 0.0; /*0x41528a*/
  if ( v6 >= 0.0 ) /*0x415295*/
    return (float)FloatFloor(v6); /*0x4152a1*/
  return (float)v5; /*0x415252*/
}
