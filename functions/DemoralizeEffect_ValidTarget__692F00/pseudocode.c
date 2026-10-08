char __thiscall DemoralizeEffect_ValidTarget(float *this, MagicTarget *a2)
{
  Actor *ParentActor; // esi
  unsigned __int16 Level; // ax
  Actor *v6; // eax
  TESForm *ActorBaseForm; // eax
  float v9; // [esp+18h] [ebp+4h]

  if ( !a2 ) /*0x692f0b*/
    return 0; /*0x692f0b*/
  ParentActor = MagicTarget_GetParentActor(a2); /*0x692f18*/
  if ( !ParentActor ) /*0x692f1c*/
    return 0; /*0x692f1c*/
  if ( ParentActor->vtbl->super.super.IsDead((TESObjectREFR *)ParentActor, 0) ) /*0x692f2a*/
    return 0; /*0x692f2a*/
  if ( ParentActor->vtbl->super.IsDead((MobileObject *)ParentActor) ) /*0x692f3a*/
    return 0; /*0x692f3a*/
  v9 = *(this + 6); /*0x692f44*/
  Level = Actor_GetLevel(ParentActor); /*0x692f51*/
  if ( !Calc_MagnitudeAffectsLevel(Level, v9) ) /*0x692f5a*/
    return 0; /*0x692f64*/
  v6 = (Actor *)OblivionDynamicCast( /*0x692f75*/
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&MagicTarget `RTTI Type Descriptor',
                  &Creature `RTTI Type Descriptor',
                  0);
  if ( v6 ) /*0x692f7f*/
  {
    ActorBaseForm = Actor_GetActorBaseForm(v6, 0); /*0x692f85*/
    if ( ActorBaseForm && LOBYTE(ActorBaseForm[0xA].member.modlist.next) == 2 ) /*0x692f95*/
      return 0; /*0x692f95*/
  }
  else if ( Actor::GetDeadState(ParentActor) == 4 ) /*0x692fa9*/
  {
    return 0; /*0x692f9c*/
  }
  return 1; /*0x692f97*/
}
