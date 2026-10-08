double __thiscall EffectItem_MagickaCost(float *this)
{
  float v2; // ecx
  int v3; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // edx
  int v7; // eax
  double v8; // st7
  float v10; // [esp+20h] [ebp-4h]

  if ( *(this + 8) >= 0.0 ) /*0x41381e*/
    return EffectItem_MagickaCost_::Return((int)this); /*0x41381e*/
  v2 = *(this + 7); /*0x413820*/
  v3 = *(_DWORD *)(LODWORD(v2) + 0x58); /*0x413823*/
  v4 = *((_DWORD *)this + 4); /*0x413830*/
  if ( (v3 & 0x100) != 0 ) /*0x413833*/
    v5 = 0; /*0x413835*/
  else
    v5 = *((_DWORD *)this + 1); /*0x413839*/
  if ( (v3 & 0x80) != 0 ) /*0x413844*/
    v6 = 0; /*0x413846*/
  else
    v6 = *((_DWORD *)this + 3); /*0x41384a*/
  if ( (v3 & 0x200) != 0 || !v4 ) /*0x413856*/
    v7 = 0; /*0x41385d*/
  else
    v7 = *((_DWORD *)this + 2); /*0x413858*/
  v8 = *(float *)(LODWORD(v2) + 0x5C); /*0x41385f*/
  LOBYTE(v2) = v4 == 2; /*0x413865*/
  v10 = v8; /*0x413868*/
  *(this + 8) = Calc_BaseMagickaCost(v10, v7, v6, v5, v2); /*0x413880*/
  return EffectItem_MagickaCost_::Return((int)this);
}
