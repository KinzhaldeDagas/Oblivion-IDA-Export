ActiveEffect *__cdecl NightEyeEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  ActiveEffect *v3; // esi
  ActiveEffect *result; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x3Cu); /*0x6a2e59*/
  result = 0; /*0x6a2e62*/
  if ( v3 ) /*0x6a2e6a*/
  {
    ValueModifierEffect_constr(v3, caster, magicItem, effectItem); /*0x6a2e7d*/
    v3->vtbl = (ActiveEffectVtbl *)&NightEyeEffect::`vftable'; /*0x6a2e82*/
    return v3; /*0x6a2e88*/
  }
  return result; /*0x6a2e8a*/
}
