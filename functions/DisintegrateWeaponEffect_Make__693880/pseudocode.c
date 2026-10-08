// Verified (Oblivion): factory creates ActiveEffect objects with the DisintegrateWeaponEffect vtable. Its existence corroborates, but does not alone prove, the effect-code interpretation at 0x45574944.
ActiveEffect *__cdecl DisintegrateWeaponEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  ActiveEffect *v3; // esi
  ActiveEffect *result; // eax

  v3 = (ActiveEffect *)FormHeapAlloc(0x38u); /*0x6938a9*/
  result = 0; /*0x6938b2*/
  if ( v3 ) /*0x6938ba*/
  {
    ActiveEffect_Ctor(v3, caster, magicItem, effectItem); /*0x6938cd*/
    v3->vtbl = (ActiveEffectVtbl *)&DisintegrateWeaponEffect::`vftable'; /*0x6938d2*/
    return v3; /*0x6938d8*/
  }
  return result; /*0x6938da*/
}
