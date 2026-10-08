// Verified OpenEffect clone: allocates 0x38 bytes, copies the base ActiveEffect state, restores OpenEffect_vftable, invokes the base CopyTo hook, and returns the clone.
OpenEffect *__thiscall OpenEffect_Clone(OpenEffect *this)
{
  OpenEffect *v2; // edi

  v2 = (OpenEffect *)FormHeapAlloc(0x38u); /*0x6a343c*/
  if ( v2 ) /*0x6a344f*/
  {
    ActiveEffect_Ctor(&v2->super, this->super.members.caster, this->super.members.item, this->super.members.effectItem); /*0x6a345f*/
    v2->super.vtbl = (ActiveEffectVtbl *)&OpenEffect_vftable; /*0x6a3464*/
  }
  else
  {
    v2 = 0; /*0x6a346c*/
  }
  this->super.vtbl->copyTo((ActiveEffect *)this, (ActiveEffect *)v2); /*0x6a347e*/
  return v2; /*0x6a3482*/
}
