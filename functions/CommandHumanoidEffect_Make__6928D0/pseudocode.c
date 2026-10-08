ActiveEffect *__cdecl CommandHumanoidEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  ActiveEffect *v3; // esi
  ActiveEffect *result; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x38u); /*0x6928f9*/
  result = 0; /*0x692902*/
  if ( v3 ) /*0x69290a*/
  {
    CommandEffect_constr(v3, caster, magicItem, effectItem); /*0x69291d*/
    v3->vtbl = (ActiveEffectVtbl *)&CommandHumanoidEffect::`vftable'; /*0x692922*/
    return v3; /*0x692928*/
  }
  return result; /*0x69292a*/
}
