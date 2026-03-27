bool __thiscall CommandCreatureEffect_ValidTarget(float *this, MagicTarget *a2)
{
  Actor *ParentActor; // eax
  Actor *v4; // esi
  unsigned __int16 Level; // ax
  float v7; // [esp+10h] [ebp+4h]

  if ( !a2 )
    return 0;
  ParentActor = MagicTarget_GetParentActor(a2);
  v4 = ParentActor;
  if ( !ParentActor || !Actor_IsCreature(ParentActor) )
    return 0;
  v7 = *(this + 6);
  Level = Actor_GetLevel(v4);
  return Calc_MagnitudeAffectsLevel(Level, v7);
}
