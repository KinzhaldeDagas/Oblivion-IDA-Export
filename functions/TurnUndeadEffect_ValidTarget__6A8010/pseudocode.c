char __thiscall TurnUndeadEffect_ValidTarget(float *this, MagicTarget *a2)
{
  Actor *ParentActor; // esi
  unsigned __int16 Level; // ax
  Actor *v6; // eax
  float v8; // [esp+18h] [ebp+4h]

  if ( a2 ) /*0x6a801b*/
  {
    ParentActor = MagicTarget_GetParentActor(a2); /*0x6a8028*/
    if ( ParentActor ) /*0x6a802c*/
    {
      if ( !ParentActor->vtbl->super.super.IsDead((TESObjectREFR *)ParentActor, 0) /*0x6a804e*/
        && !ParentActor->vtbl->super.IsDead((MobileObject *)ParentActor) )
      {
        v8 = *(this + 6); /*0x6a8058*/
        Level = Actor_GetLevel(ParentActor); /*0x6a8065*/
        if ( Calc_MagnitudeAffectsLevel(Level, v8) ) /*0x6a806e*/
        {
          v6 = (Actor *)OblivionDynamicCast( /*0x6a8089*/
                          a2,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&MagicTarget `RTTI Type Descriptor',
                          &Creature `RTTI Type Descriptor',
                          0);
          if ( v6 ) /*0x6a8093*/
          {
            if ( LOBYTE(Actor_GetActorBaseForm(v6, 0)[0xA].member.modlist.next) == 2 ) /*0x6a80a5*/
              return 1; /*0x6a80ac*/
          }
          else if ( Actor::GetDeadState(ParentActor) == 4 ) /*0x6a80b9*/
          {
            return 1; /*0x6a80c0*/
          }
        }
      }
    }
  }
  return 0; /*0x6a80a7*/
}
