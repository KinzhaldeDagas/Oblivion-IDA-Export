ActiveEffect *__cdecl TurnUndeadEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  int v3; // esi

  v3 = FormHeapAlloc(0x3Cu); /*0x6a7f59*/
  if ( !v3 ) /*0x6a7f6c*/
    return 0; /*0x6a7fa1*/
  ActiveEffect_Ctor((ActiveEffect *)v3, caster, magicItem, effectItem); /*0x6a7f7f*/
  *(_DWORD *)v3 = &TurnUndeadEffect::`vftable'; /*0x6a7f84*/
  *(_BYTE *)(v3 + 0x38) = 0; /*0x6a7f8a*/
  return (ActiveEffect *)v3; /*0x6a7f90*/
}
