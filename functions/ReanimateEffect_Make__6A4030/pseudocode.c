ActiveEffect *__cdecl ReanimateEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  ActiveEffect *v3; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x60u); /*0x6a4053*/
  if ( v3 ) /*0x6a4069*/
    return ReanimateEffect_constr(v3, caster, magicItem, effectItem); /*0x6a407c*/
  else
    return 0; /*0x6a4091*/
}
