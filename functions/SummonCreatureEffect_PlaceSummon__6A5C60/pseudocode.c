int __thiscall SummonCreatureEffect_PlaceSummon(
        MagicTarget **this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  MagicTarget *v13; // ecx

  v13 = *(this + 8);
  if ( !v13 || !MagicTarget_GetParentActor(v13) )
    return SummonCreatureEffect_PlaceSummon_::Done(a2);
  if ( OblivionDynamicCast(
         *(this + 0xE),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESLevCreature `RTTI Type Descriptor',
         0) )
  {
    return SummonCreatureEffect_PlaceSummon_::EvaluateLevCreature();
  }
  return SummonCreatureEffect_PlaceSummon_::CastToBoundObj((int)this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
