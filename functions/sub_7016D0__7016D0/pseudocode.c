NiGeometry **__thiscall sub_7016D0(NiGeometry *this, NiDynamicEffectState **a2)
{
  volatile LONG *unk0B0; // eax

  unk0B0 = (volatile LONG *)this->member.unk0B0;
  *a2 = (NiDynamicEffectState *)unk0B0;
  if ( unk0B0 )
    InterlockedIncrement(unk0B0 + 1);
  return (NiGeometry **)a2;
}
