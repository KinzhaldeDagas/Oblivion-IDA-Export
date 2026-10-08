// Verified LockEffect factory: allocates an ActiveEffect-sized 0x38-byte object, calls ActiveEffect_Ctor with caster/magic/effect item, installs LockEffect_vftable, and returns it as the concrete LockEffect subclass.
LockEffect *__cdecl LockEffect_Make(MagicCaster *caster, MagicItem *magicItem, EffectItem *effectItem)
{
  LockEffect *v3; // esi
  LockEffect *result; // eax

  v3 = (LockEffect *)FormHeapAlloc(0x38u); /*0x694bf9*/
  result = 0; /*0x694c02*/
  if ( v3 ) /*0x694c0a*/
  {
    ActiveEffect_Ctor(&v3->super, caster, magicItem, effectItem); /*0x694c1d*/
    v3->super.vtbl = (ActiveEffectVtbl *)&LockEffect_vftable; /*0x694c22*/
    return v3; /*0x694c28*/
  }
  return result; /*0x694c2a*/
}
