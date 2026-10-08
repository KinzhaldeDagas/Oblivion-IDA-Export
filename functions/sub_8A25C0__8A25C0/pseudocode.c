NiDynamicEffectState **__thiscall sub_8A25C0(NiRenderer *this, signed int a2)
{
  NiDynamicEffectState **result; // eax

  sub_89D650(this, a2); /*0x8a25c8*/
  result = (NiDynamicEffectState **)((int (__thiscall *)(NiRenderer *, signed int *))this->__vftable->ValidateRenderTargetGroup)( /*0x8a25d9*/
                                      this,
                                      &a2);
  if ( result ) /*0x8a25dd*/
  {
    if ( (int)*result >= 0x1F ) /*0x8a25e2*/
      *result = 0; /*0x8a25e4*/
    this->members.dynamicEffectState = *result; /*0x8a25ec*/
    *result = 0; /*0x8a25ef*/
  }
  return result; /*0x8a25f5*/
}
