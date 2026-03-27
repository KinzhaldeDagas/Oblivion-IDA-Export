int __thiscall EffectItem_MagickaCost(float *this)
{
  float v2; // ecx
  int v3; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // edx
  int v7; // eax
  double v8; // st7
  float v10; // [esp+20h] [ebp-4h]

  if ( *(this + 8) >= 0.0 )
    return EffectItem_MagickaCost_::Return();
  v2 = *(this + 7);
  v3 = *(_DWORD *)(LODWORD(v2) + 0x58);
  v4 = *((_DWORD *)this + 4);
  if ( (v3 & 0x100) != 0 )
    v5 = 0;
  else
    v5 = *((_DWORD *)this + 1);
  if ( (v3 & 0x80) != 0 )
    v6 = 0;
  else
    v6 = *((_DWORD *)this + 3);
  if ( (v3 & 0x200) != 0 || !v4 )
    v7 = 0;
  else
    v7 = *((_DWORD *)this + 2);
  v8 = *(float *)(LODWORD(v2) + 0x5C);
  LOBYTE(v2) = v4 == 2;
  v10 = v8;
  *(this + 8) = Calc_BaseMagickaCost(v10, v7, v6, v5, v2);
  return EffectItem_MagickaCost_::Return();
}
