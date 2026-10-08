bool __thiscall CommandCreatureEffect_ValidTarget(float *this, MagicTarget *a2)
{
  Actor *ParentActor; // eax
  Actor *v4; // esi
  unsigned __int16 Level; // ax
  float v7; // [esp+10h] [ebp+4h]

  if ( !a2 ) /*0x6922ba*/
    return 0; /*0x6922ba*/
  ParentActor = MagicTarget_GetParentActor(a2); /*0x6922bc*/
  v4 = ParentActor; /*0x6922c1*/
  if ( !ParentActor || !Actor_IsCreature(ParentActor) ) /*0x6922c9*/
    return 0; /*0x6922d3*/
  v7 = *(this + 6); /*0x6922dd*/
  Level = Actor_GetLevel(v4); /*0x6922ea*/
  return Calc_MagnitudeAffectsLevel(Level, v7); /*0x6922d2*/
}
