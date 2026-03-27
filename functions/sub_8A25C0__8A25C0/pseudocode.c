NiDynamicEffectState **__thiscall sub_8A25C0(NiRenderer *this, signed int a2)
{
  NiDynamicEffectState **result; // eax

  sub_89D650(this, a2);
  result = (NiDynamicEffectState **)((int (__thiscall *)(NiRenderer *, signed int *))this->__vftable->ValidateRenderTargetGroup)(
                                      this,
                                      &a2);
  if ( result )
  {
    if ( (int)*result >= 0x1F )
      *result = 0;
    this->members.dynamicEffectState = *result;
    *result = 0;
  }
  return result;
}
