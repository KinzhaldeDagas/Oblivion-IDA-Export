ActiveEffect *__cdecl FrenzyEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  int v3; // esi

  v3 = FormHeapAlloc(0x40u); /*0x693df9*/
  if ( !v3 ) /*0x693e0c*/
    return 0; /*0x693e41*/
  ValueModifierEffect_constr((ActiveEffect *)v3, caster, magicItem, effectItem); /*0x693e1f*/
  *(_DWORD *)v3 = &FrenzyEffect::`vftable'; /*0x693e24*/
  *(_BYTE *)(v3 + 0x3C) = 0; /*0x693e2a*/
  return (ActiveEffect *)v3; /*0x693e30*/
}
