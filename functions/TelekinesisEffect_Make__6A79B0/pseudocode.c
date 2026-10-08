ActiveEffect *__cdecl TelekinesisEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  ActiveEffect *v3; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x50u); /*0x6a79d3*/
  if ( v3 ) /*0x6a79e9*/
    return TelekinesisEffect_constr(v3, caster, magicItem, effectItem); /*0x6a79fc*/
  else
    return 0; /*0x6a7a11*/
}
