ActiveEffect *__cdecl ChameleonEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  ActiveEffect *v3; // esi
  ActiveEffect *result; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x3Cu); /*0x692069*/
  result = 0; /*0x692072*/
  if ( v3 ) /*0x69207a*/
  {
    ValueModifierEffect_constr(v3, caster, magicItem, effectItem); /*0x69208d*/
    v3->vtbl = (ActiveEffectVtbl *)&ChameleonEffect::`vftable'; /*0x692092*/
    return v3; /*0x692098*/
  }
  return result; /*0x69209a*/
}
