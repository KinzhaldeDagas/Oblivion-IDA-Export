ActiveEffect *__cdecl DarknessEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  ActiveEffect *v3; // esi
  ActiveEffect *result; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x3Cu); /*0x692cb9*/
  result = 0; /*0x692cc2*/
  if ( v3 ) /*0x692cca*/
  {
    ValueModifierEffect_constr(v3, caster, magicItem, effectItem); /*0x692cdd*/
    v3->vtbl = (ActiveEffectVtbl *)&DarknessEffect::`vftable'; /*0x692ce2*/
    return v3; /*0x692ce8*/
  }
  return result; /*0x692cea*/
}
