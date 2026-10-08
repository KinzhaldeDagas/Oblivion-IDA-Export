// Verified LockEffect clone: allocates 0x38 bytes, copies base ActiveEffect state, restores LockEffect_vftable, invokes the base CopyTo hook, and returns the clone.
LockEffect *__thiscall LockEffect_Clone(LockEffect *this)
{
  LockEffect *v2; // edi

  v2 = (LockEffect *)FormHeapAlloc(0x38u); /*0x694b6c*/
  if ( v2 ) /*0x694b7f*/
  {
    ActiveEffect_Ctor(&v2->super, this->super.members.caster, this->super.members.item, this->super.members.effectItem); /*0x694b8f*/
    v2->super.vtbl = (ActiveEffectVtbl *)&LockEffect_vftable; /*0x694b94*/
  }
  else
  {
    v2 = 0; /*0x694b9c*/
  }
  ((void (__thiscall *)(LockEffect *, LockEffect *))this->super.vtbl[0xB].noDef)(this, v2); /*0x694bae*/
  return v2; /*0x694bb2*/
}
