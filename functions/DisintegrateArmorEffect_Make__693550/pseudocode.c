ActiveEffect *__cdecl DisintegrateArmorEffect_Make(MagicCaster *a1, MagicItem *a2, EffectItem *a3)
{
  ActiveEffect *v3; // esi

  v3 = (ActiveEffect *)FormHeapAlloc(0x3Cu);
  if ( !v3 )
    return 0;
  ActiveEffect::ActiveEffect(v3, a1, a2, a3);
  v3->vtbl = (ActiveEffectVtbl *)&DisintegrateArmorEffect::`vftable';
  v3[1].vtbl = 0;
  return v3;
}
