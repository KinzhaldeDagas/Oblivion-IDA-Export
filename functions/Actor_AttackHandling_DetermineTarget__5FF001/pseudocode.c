int __userpurge Actor_AttackHandling_::DetermineTarget@<eax>(
        TESObjectREFR *a1@<ebx>,
        int a2@<ebp>,
        int *a3@<edi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        float a20)
{
  TESObjectREFR *ActorWithinReach; // esi
  int v21; // ecx
  int v22; // eax

  if ( a1 )
  {
    ActorWithinReach = a1;
  }
  else
  {
    a4 = a20;
    ActorWithinReach = (TESObjectREFR *)GetActorWithinReach__(a3, (int)a3, a20);
  }
  if ( !ActorWithinReach )
  {
    if ( (a3 != (int *)TESDataHandler_g_PlayerRef || !sub_5F9620((TESObjectREFR *)a3, a5, a6)) && !a15 )
    {
      if ( a2 )
        JUMPOUT(0x5FEC7D);
      JUMPOUT(0x5FEC7A);
    }
    return Actor_AttackHandling_::Done(a7, a8, a9);
  }
  if ( BaseExtraList_HasGhost(&ActorWithinReach->member.baseExtraList) )
  {
    v21 = a3[0x16];
    if ( v21 )
    {
      if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)v21 + 0xEC))(v21, 1) )
        JUMPOUT(0x5FEC6D);
    }
    JUMPOUT(0x5FEC6B);
  }
  if ( ActorWithinReach->vtbl->IsDead(ActorWithinReach, 0) )
    return Actor_AttackHandling_::Done(a7, a8, a9);
  if ( !a15 )
  {
    if ( (*(int (__thiscall **)(int *))(*a3 + 0x330))(a3) )
    {
      v22 = (*(int (__thiscall **)(int *))(*a3 + 0x330))(a3);
      CombatController_TransmitDisease_(v22, (int)a1, a2, a4, ActorWithinReach);
    }
  }
  return Actor_AttackHandling_::___Check(
           (int)a3,
           (int)ActorWithinReach,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18);
}
