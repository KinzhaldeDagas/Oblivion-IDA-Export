char __thiscall TurnUndeadEffect_ValidTarget(float *this, MagicTarget *a2)
{
  Actor *ParentActor; // esi
  unsigned __int16 Level; // ax
  Actor *v6; // eax
  float v8; // [esp+18h] [ebp+4h]

  if ( a2 )
  {
    ParentActor = MagicTarget_GetParentActor(a2);
    if ( ParentActor )
    {
      if ( !ParentActor->vtbl->super.super.IsDead((TESObjectREFR *)ParentActor, 0)
        && !ParentActor->vtbl->super.IsDead((MobileObject *)ParentActor) )
      {
        v8 = *(this + 6);
        Level = Actor_GetLevel(ParentActor);
        if ( Calc_MagnitudeAffectsLevel(Level, v8) )
        {
          v6 = (Actor *)OblivionDynamicCast(
                          a2,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&MagicTarget `RTTI Type Descriptor',
                          &Creature `RTTI Type Descriptor',
                          0);
          if ( v6 )
          {
            if ( LOBYTE(Actor_GetActorBaseForm(v6, 0)[0xA].member.modlist.next) == 2 )
              return 1;
          }
          else if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)ParentActor) == (struct Concurrency::details::ScheduleGroupBase *)4 )
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
