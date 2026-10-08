// Verified OpenEffect factory: allocates a 0x38-byte ActiveEffect-sized object, calls ActiveEffect_Ctor, installs OpenEffect_vftable, and returns the concrete OpenEffect subclass.
OpenEffect *__cdecl OpenEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  OpenEffect *v3; // esi
  OpenEffect *result; // eax

  v3 = (OpenEffect *)FormHeapAlloc(0x38u); /*0x6a3579*/
  result = 0; /*0x6a3582*/
  if ( v3 ) /*0x6a358a*/
  {
    ActiveEffect_Ctor(&v3->super, caster, magicItem, effectItem); /*0x6a359d*/
    v3->super.vtbl = (ActiveEffectVtbl *)&OpenEffect_vftable; /*0x6a35a2*/
    return v3; /*0x6a35a8*/
  }
  return result; /*0x6a35aa*/
}
