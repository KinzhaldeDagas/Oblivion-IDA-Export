// local variable allocation has failed, the output may be wrong!
void __thiscall SummonCreatureEffect_PlaceSummon(
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
  Actor *ParentActor; // ebp
  void *v15; // edi

  v13 = *(this + 8); /*0x6a5c89*/
  if ( v13 && (ParentActor = MagicTarget_GetParentActor(v13)) != 0 ) /*0x6a5c9d*/
  {
    v15 = OblivionDynamicCast( /*0x6a5cba*/
            *(this + 0xE),
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESLevCreature `RTTI Type Descriptor',
            0);
    if ( v15 ) /*0x6a5cc1*/
      SummonCreatureEffect_PlaceSummon_::EvaluateLevCreature( /*0x6a5cc2*/
        ParentActor,
        (int)v15,
        (int)this,
        a2,
        a3,
        a4,
        a5,
        *(TESContainer *)&a6,
        a10,
        a11,
        a12);
    else
      SummonCreatureEffect_PlaceSummon_::CastToBoundObj((int)this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12); /*0x6a5cc1*/
  }
  else
  {
    SummonCreatureEffect_PlaceSummon_::Done(a2); /*0x6a5c8e*/
  }
}
