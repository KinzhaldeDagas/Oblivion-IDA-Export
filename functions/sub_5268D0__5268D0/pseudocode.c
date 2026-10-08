void __userpurge sub_5268D0(
        BSExtraDataVtbl *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *actorRef,
        ActorAnimData *animData)
{
  ActorAnimData *v6; // ebx
  Actor *v9; // eax
  Actor *v10; // ebp
  LowProcess *process; // ecx
  TESPackage *CurrentPackage; // eax
  UInt32 packageFlags; // eax
  bool v14; // bl
  LowProcess *v15; // ecx
  char v16; // [esp+10h] [ebp-4h]
  char actorRefa; // [esp+18h] [ebp+4h]

  v6 = animData; /*0x5268d2*/
  sub_47AB90((ActorSkinInfo *)animData, (TESForm *)a1[0x1D].Destructor, (int)a1[5].Destructor & 1); /*0x5268eb*/
  v9 = (Actor *)OblivionDynamicCast( /*0x526903*/
                  actorRef,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  v10 = v9; /*0x526908*/
  if ( v9 ) /*0x52690f*/
  {
    process = v9->members.super.process; /*0x526911*/
    if ( process ) /*0x526916*/
      ((void (__thiscall *)(LowProcess *, int))process->SetUnk16C)(process, 1); /*0x526922*/
  }
  if ( !actorRef->member.niNode ) /*0x526924*/
  {
    v16 = 1; /*0x526930*/
    actorRefa = 1; /*0x526935*/
    CurrentPackage = Actor::GetCurrentPackage(v10); /*0x52693a*/
    if ( CurrentPackage ) /*0x526941*/
    {
      packageFlags = CurrentPackage->members.packageFlags; /*0x526943*/
      v16 = (packageFlags & 0x100000) == 0; /*0x526950*/
      actorRefa = (packageFlags & 0x200000) == 0; /*0x52695c*/
    }
    v14 = 1; /*0x52696a*/
    if ( (g_TESSaveLoadGame->flags & 2) != 0 ) /*0x526970*/
      v14 = (sub_4533F0(g_TESSaveLoadGame, (int)actorRef, 1) & 0x8000000) == 0; /*0x526981*/
    if ( (!actorRef->vtbl->IsDead(actorRef, 0) || (sub_4533F0(g_TESSaveLoadGame, (int)actorRef, 1) & 0x40) == 0) && v14 ) /*0x5269a9*/
      sub_5227A0(a1, a2, a3, a4, actorRef, v16, actorRefa, 0, 0); /*0x5269bc*/
    v6 = animData; /*0x5269c1*/
  }
  if ( !bUSeMultithreadedFaceGen || !useFaceGenHeads ) /*0x5269ce*/
    TESNPC_ReconcileFaceGenNodesForActor((int)a1, a4, (TESChildCELL *)actorRef, v6); /*0x5269db*/
  TESNPC_InitWorn((TESNPC *)a1, actorRef, v6); /*0x5269e4*/
  if ( v6 != (ActorAnimData *)Actor_GetSkinInfoByPerspective((Actor *)reference, 1) ) /*0x5269f8*/
    sub_524510(actorRef, 0); /*0x5269ff*/
  if ( v10 ) /*0x526a06*/
  {
    v15 = v10->members.super.process; /*0x526a08*/
    if ( v15 ) /*0x526a0d*/
      ((void (__thiscall *)(LowProcess *, _DWORD))v15->SetUnk16C)(v15, 0); /*0x526a19*/
  }
}
