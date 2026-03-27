Ni2DBuffer *__thiscall sub_722C00(NiGeometry *this, Ni2DBuffer *a2)
{
  Ni2DBuffer *result; // eax
  NiDynamicEffectState *unk0B0; // esi

  result = a2;
  if ( a2 )
    return (Ni2DBuffer *)NiSmartPointer_Set__((Ni2DBuffer **)&this->member.unk0B0, a2);
  unk0B0 = this->member.unk0B0;
  if ( unk0B0 )
  {
    result = (Ni2DBuffer *)InterlockedDecrement((volatile LONG *)unk0B0 + 1);
    if ( !result )
      result = (Ni2DBuffer *)(**(int (__thiscall ***)(NiDynamicEffectState *, int))unk0B0)(unk0B0, 1);
    this->member.unk0B0 = 0;
  }
  return result;
}
