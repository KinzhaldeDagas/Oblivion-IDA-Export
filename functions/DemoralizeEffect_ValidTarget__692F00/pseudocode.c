char __thiscall DemoralizeEffect_ValidTarget(float *this, MagicTarget *a2)
{
  Actor *ParentActor; // esi
  unsigned __int16 Level; // ax
  Actor *v6; // eax
  TESForm *ActorBaseForm; // eax
  float v9; // [esp+18h] [ebp+4h]

  if ( !a2 )
    return 0;
  ParentActor = MagicTarget_GetParentActor(a2);
  if ( !ParentActor )
    return 0;
  if ( ParentActor->vtbl->super.super.IsDead((TESObjectREFR *)ParentActor, 0) )
    return 0;
  if ( ParentActor->vtbl->super.IsDead((MobileObject *)ParentActor) )
    return 0;
  v9 = *(this + 6);
  Level = Actor_GetLevel(ParentActor);
  if ( !Calc_MagnitudeAffectsLevel(Level, v9) )
    return 0;
  v6 = (Actor *)OblivionDynamicCast(
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&MagicTarget `RTTI Type Descriptor',
                  &Creature `RTTI Type Descriptor',
                  0);
  if ( v6 )
  {
    ActorBaseForm = Actor_GetActorBaseForm(v6, 0);
    if ( ActorBaseForm && LOBYTE(ActorBaseForm[0xA].member.modlist.next) == 2 )
      return 0;
  }
  else if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)ParentActor) == (struct Concurrency::details::ScheduleGroupBase *)4 )
  {
    return 0;
  }
  return 1;
}
