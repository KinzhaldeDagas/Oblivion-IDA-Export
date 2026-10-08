ActiveEffect *__cdecl ParalysisEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  ActiveEffect *v3; // esi
  ActiveEffect *result; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x3Cu); /*0x6a37d9*/
  result = 0; /*0x6a37e2*/
  if ( v3 ) /*0x6a37ea*/
  {
    ValueModifierEffect_constr(v3, caster, magicItem, effectItem); /*0x6a37fd*/
    v3->vtbl = (ActiveEffectVtbl *)&ParalysisEffect::`vftable'; /*0x6a3802*/
    return v3; /*0x6a3808*/
  }
  return result; /*0x6a380a*/
}
