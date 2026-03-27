void __usercall sub_5F01B0(TESObjectREFR *a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  ActorAnimData *v5; // eax
  int v6; // edi
  _DWORD *v7; // eax
  _DWORD *AnimData; // edi
  _DWORD *v9; // eax

  if ( !((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))a1->vtbl->GetSleepState)(
          a1,
          a3,
          a2) )
  {
    v5 = a1->vtbl->GetAnimData(a1);
    v6 = (int)v5;
    if ( v5 )
    {
      sub_470FC0(v5, 5, 0.0);
      LOWORD(v7) = Actor_LoadAnimGroup_(a1, 0, 0, 0);
      ActorAnimData_PlayAnimGroup(v6, v7, 0, 0xFFFFFFFF);
      HighPRocess_DoAction_____((PlayerCharacter *)a1, 0xFFFFFFFF, 0);
    }
    if ( a1 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      AnimData = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, TESDataHandler_g_PlayerRef->isThirdPerson);
      if ( AnimData )
      {
        LOWORD(v9) = Actor_LoadAnimGroup_(a1, 0, 0, 0);
        ActorAnimData_PlayAnimGroup((int)AnimData, v9, 0, 0xFFFFFFFF);
        sub_470FC0(AnimData, 5, 0.0);
      }
    }
  }
}
