ActiveEffect *__cdecl CommandCreatureEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  ActiveEffect *v3; // esi
  ActiveEffect *result; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x38u); /*0x692329*/
  result = 0; /*0x692332*/
  if ( v3 ) /*0x69233a*/
  {
    CommandEffect_constr(v3, caster, magicItem, effectItem); /*0x69234d*/
    v3->vtbl = (ActiveEffectVtbl *)&CommandCreatureEffect::`vftable'; /*0x692352*/
    return v3; /*0x692358*/
  }
  return result; /*0x69235a*/
}
