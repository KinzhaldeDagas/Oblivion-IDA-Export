void __usercall sub_5F01B0(TESObjectREFR *a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  ActorAnimData *v4; // eax
  ActorAnimData *v5; // edi
  unsigned int v6; // eax
  ActorAnimData *AnimDataByPerspective; // edi
  unsigned int v8; // eax

  if ( !((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))a1->vtbl->GetSleepState)( /*0x5f01bc*/
          a1,
          a3,
          a2) )
  {
    v4 = a1->vtbl->GetAnimData(a1); /*0x5f01d1*/
    v5 = v4; /*0x5f01d3*/
    if ( v4 ) /*0x5f01d7*/
    {
      ActorAnimData_ClearSlot(v4, 5, 0.0); /*0x5f01e3*/
      LOWORD(v6) = Actor_LoadAnimGroup_((Actor *)a1, 0, 0, 0); /*0x5f01f4*/
      ActorAnimData_PlayAnimGroup(v5, v6, 0, 0xFFFFFFFF); /*0x5f01fc*/
      Actor_SetCurrentActionWithBowVisualCleanup((Actor *)a1, kActorCurrentAction_None, 0); /*0x5f0207*/
    }
    if ( a1 == (TESObjectREFR *)reference ) /*0x5f0214*/
    {
      AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(reference, reference->isThirdPerson); /*0x5f022a*/
      if ( AnimDataByPerspective ) /*0x5f022e*/
      {
        LOWORD(v8) = Actor_LoadAnimGroup_((Actor *)a1, 0, 0, 0); /*0x5f023c*/
        ActorAnimData_PlayAnimGroup(AnimDataByPerspective, v8, 0, 0xFFFFFFFF); /*0x5f0244*/
        ActorAnimData_ClearSlot(AnimDataByPerspective, 5, 0.0); /*0x5f0253*/
      }
    }
  }
}
