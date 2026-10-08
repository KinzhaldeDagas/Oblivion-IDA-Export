ActiveEffect *__cdecl DetectLifeEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  ActiveEffect *v3; // esi
  ActiveEffect *result; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x3Cu); /*0x693479*/
  result = 0; /*0x693482*/
  if ( v3 ) /*0x69348a*/
  {
    ValueModifierEffect_constr(v3, caster, magicItem, effectItem); /*0x69349d*/
    v3->vtbl = (ActiveEffectVtbl *)&DetectLifeEffect::`vftable'; /*0x6934a2*/
    return v3; /*0x6934a8*/
  }
  return result; /*0x6934aa*/
}
