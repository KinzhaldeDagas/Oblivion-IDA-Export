ActiveEffect *__cdecl SunDamageEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  int v3; // esi

  v3 = FormHeapAlloc(0x40u); /*0x6a68b9*/
  if ( !v3 ) /*0x6a68cc*/
    return 0; /*0x6a690a*/
  ActiveEffect_Ctor((ActiveEffect *)v3, caster, magicItem, effectItem); /*0x6a68df*/
  *(float *)(v3 + 0x38) = 0.0; /*0x6a68e6*/
  *(_DWORD *)v3 = &SunDamageEffect::`vftable'; /*0x6a68e9*/
  *(_BYTE *)(v3 + 0x3D) = 0; /*0x6a68ef*/
  *(_BYTE *)(v3 + 0x3C) = 0; /*0x6a68f3*/
  return (ActiveEffect *)v3; /*0x6a68f9*/
}
