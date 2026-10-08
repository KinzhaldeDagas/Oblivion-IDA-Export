ActiveEffect *__cdecl SoulTrapEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  ActiveEffect *v3; // esi
  ActiveEffect *result; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x38u); /*0x6a4d39*/
  result = 0; /*0x6a4d42*/
  if ( v3 ) /*0x6a4d4a*/
  {
    ActiveEffect_Ctor(v3, caster, magicItem, effectItem); /*0x6a4d5d*/
    v3->vtbl = (ActiveEffectVtbl *)&SoulTrapEffect::`vftable'; /*0x6a4d62*/
    return v3; /*0x6a4d68*/
  }
  return result; /*0x6a4d6a*/
}
