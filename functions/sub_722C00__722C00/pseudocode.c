Ni2DBuffer *__thiscall sub_722C00(NiGeometry *this, Ni2DBuffer *a2)
{
  Ni2DBuffer *result; // eax
  NiDynamicEffectState *unk0B0; // esi

  result = a2; /*0x722c00*/
  if ( a2 ) /*0x722c09*/
    return (Ni2DBuffer *)NiSmartPointer_Set__((Ni2DBuffer **)&this->member.unk0B0, a2); /*0x722c12*/
  unk0B0 = this->member.unk0B0; /*0x722c1c*/
  if ( unk0B0 ) /*0x722c24*/
  {
    result = (Ni2DBuffer *)InterlockedDecrement((volatile LONG *)unk0B0 + 1); /*0x722c2a*/
    if ( !result ) /*0x722c32*/
      result = (Ni2DBuffer *)(**(int (__thiscall ***)(NiDynamicEffectState *, int))unk0B0)(unk0B0, 1); /*0x722c40*/
    this->member.unk0B0 = 0; /*0x722c42*/
  }
  return result; /*0x722c17*/
}
