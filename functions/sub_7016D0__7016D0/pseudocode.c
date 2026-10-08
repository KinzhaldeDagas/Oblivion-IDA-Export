NiGeometry **__thiscall sub_7016D0(NiGeometry *this, NiDynamicEffectState **a2)
{
  volatile LONG *unk0B0; // eax

  unk0B0 = (volatile LONG *)this->member.unk0B0; /*0x7016d1*/
  *a2 = (NiDynamicEffectState *)unk0B0; /*0x7016e6*/
  if ( unk0B0 ) /*0x7016e8*/
    InterlockedIncrement(unk0B0 + 1); /*0x7016ee*/
  return (NiGeometry **)a2; /*0x7016f6*/
}
