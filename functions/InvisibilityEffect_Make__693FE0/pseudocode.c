ActiveEffect *__cdecl InvisibilityEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  ActiveEffect *v3; // esi
  ActiveEffect *result; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x3Cu); /*0x694009*/
  result = 0; /*0x694012*/
  if ( v3 ) /*0x69401a*/
  {
    ValueModifierEffect_constr(v3, caster, magicItem, effectItem); /*0x69402d*/
    v3->vtbl = (ActiveEffectVtbl *)&InvisibilityEffect::`vftable'; /*0x694032*/
    return v3; /*0x694038*/
  }
  return result; /*0x69403a*/
}
