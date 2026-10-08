ActiveEffect *__cdecl DisintegrateArmorEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  ActiveEffect *v3; // esi

  v3 = (ActiveEffect *)FormHeapAlloc(0x3Cu); /*0x693579*/
  if ( !v3 ) /*0x69358c*/
    return 0; /*0x6935c4*/
  ActiveEffect_Ctor(v3, caster, magicItem, effectItem); /*0x69359f*/
  v3->vtbl = (ActiveEffectVtbl *)&DisintegrateArmorEffect::`vftable'; /*0x6935a4*/
  v3[1].vtbl = 0; /*0x6935aa*/
  return v3; /*0x6935b3*/
}
