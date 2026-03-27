int __cdecl SunDamageEffect_Make(MagicCaster *a1, MagicItem *a2, EffectItem *a3)
{
  int v3; // esi

  v3 = FormHeapAlloc(0x40u);
  if ( !v3 )
    return 0;
  ActiveEffect::ActiveEffect((ActiveEffect *)v3, a1, a2, a3);
  *(float *)(v3 + 0x38) = 0.0;
  *(_DWORD *)v3 = &SunDamageEffect::`vftable';
  *(_BYTE *)(v3 + 0x3D) = 0;
  *(_BYTE *)(v3 + 0x3C) = 0;
  return v3;
}
