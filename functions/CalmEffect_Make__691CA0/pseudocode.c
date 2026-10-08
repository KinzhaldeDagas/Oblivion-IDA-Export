ActiveEffect *__cdecl CalmEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  ActiveEffect *v3; // esi
  ActiveEffect *result; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x3Cu); /*0x691cc9*/
  result = 0; /*0x691cd2*/
  if ( v3 ) /*0x691cda*/
  {
    ValueModifierEffect_constr(v3, caster, magicItem, effectItem); /*0x691ced*/
    v3->vtbl = (ActiveEffectVtbl *)&CalmEffect::`vftable'; /*0x691cf2*/
    return v3; /*0x691cf8*/
  }
  return result; /*0x691cfa*/
}
