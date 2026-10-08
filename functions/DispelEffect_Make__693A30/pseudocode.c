ActiveEffect *__cdecl DispelEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  ActiveEffect *v3; // esi
  ActiveEffect *result; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x38u); /*0x693a59*/
  result = 0; /*0x693a62*/
  if ( v3 ) /*0x693a6a*/
  {
    ActiveEffect_Ctor(v3, caster, magicItem, effectItem); /*0x693a7d*/
    v3->vtbl = (ActiveEffectVtbl *)&DispelEffect::`vftable'; /*0x693a82*/
    return v3; /*0x693a88*/
  }
  return result; /*0x693a8a*/
}
