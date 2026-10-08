ActiveEffect *__cdecl VampirismEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  ActiveEffect *v3; // esi
  ActiveEffect *result; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x38u); /*0x6a8af9*/
  result = 0; /*0x6a8b02*/
  if ( v3 ) /*0x6a8b0a*/
  {
    ActiveEffect_Ctor(v3, caster, magicItem, effectItem); /*0x6a8b1d*/
    v3->vtbl = (ActiveEffectVtbl *)&VampirismEffect::`vftable'; /*0x6a8b22*/
    return v3; /*0x6a8b28*/
  }
  return result; /*0x6a8b2a*/
}
