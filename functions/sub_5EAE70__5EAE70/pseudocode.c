// 3DTheft: package reset/cleanup path. For no ExtraPackage case, clears process->editorPackage, resets editorPackProcedure to TRAVEL, then destroys detached dynamic package.
void __usercall sub_5EAE70(Actor *a1@<ecx>, int a2@<ebx>, int edi0@<edi>, int a4)
{
  LowProcess *process; // ecx
  TESPackage *editorPackage; // ebx
  Creature *v7; // eax
  LowProcess *v8; // ebx
  void (__thiscall **p_SetUnk02C)(LowProcess *, BSExtraData *); // ebp
  BSExtraData *PackageExtraTarget; // eax
  double v11; // st7
  TESObjectCELL *DwordAtOffset40; // eax
  LowProcess *v13; // ecx
  LowProcess_vtbl *v14; // ebx
  int v15; // eax
  ActorVtbl *vtbl; // ebx
  int v17; // eax
  LowProcess *v18; // ebx
  void (__thiscall **p_SetUnk01C)(LowProcess *, int); // ebp
  int v20; // eax
  float *v21; // [esp+18h] [ebp-24h]
  float a3; // [esp+1Ch] [ebp-20h]
  float *v23; // [esp+20h] [ebp-1Ch]
  float a5; // [esp+24h] [ebp-18h]
  int v25; // [esp+2Ch] [ebp-10h]
  TESPackage *self; // [esp+38h] [ebp-4h]
  TESPackage *retaddr; // [esp+3Ch] [ebp+0h]

  if ( a1->members.super.process ) /*0x5eae77*/
  {
    ((void (__thiscall *)(Actor *, int))a1->vtbl->CleanupCurrentPackage)(a1, a2); /*0x5eae89*/
    process = a1->members.super.process; /*0x5eae8b*/
    editorPackage = process->editorPackage; /*0x5eae90*/
    retaddr = editorPackage; /*0x5eae99*/
    if ( ((int (__thiscall *)(LowProcess *))process->Unk_5C)(process) ) /*0x5eae9d*/
    {
      if ( *(_BYTE *)(((int (__thiscall *)(LowProcess *))a1->members.super.process->Unk_5C)(a1->members.super.process) /*0x5eaec0*/
                    + 0x20) == 0x16
        && a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) == kSitSleep_None )
      {
        if ( a1->vtbl->GetMountedHorse(a1) ) /*0x5eaed0*/
        {
          v7 = a1->vtbl->GetMountedHorse(a1); /*0x5eaee0*/
          ((void (__thiscall *)(Creature *, _DWORD))v7->__vftable->Unk_E3)(v7, 0); /*0x5eaeed*/
        }
        ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->Unk_E1)(a1, 0); /*0x5eaefa*/
      }
    }
    a1->members.super.process->SetCurrentPackage(a1->members.super.process, 0); /*0x5eaf08*/
    if ( editorPackage ) /*0x5eaf0c*/
    {
      if ( TESPackage::IsTemporaryOverrideType(editorPackage) ) /*0x5eaf14*/
      {
        ((void (__thiscall *)(Actor *, int, int, int))a1->vtbl->super.super.super.ClearModified)(a1, 0x30000, edi0, v25); /*0x5eaf2e*/
        if ( ExtraDataList::GetExtraPackage(&a1->members.super.super.baseExtraList) ) /*0x5eaf35*/
        {
          a1->members.super.process->editorPackage = (TESPackage *)ExtraDataList::GetExtraPackage(&a1->members.super.super.baseExtraList); /*0x5eaf4c*/
          sub_5E8DE0(a1, a1->members.super.process->editorPackage); /*0x5eaf58*/
          a1->members.super.process->editorPackProcedure = ExtraDataList_GetPackageExtraIndex(&a1->members.super.super.baseExtraList); /*0x5eaf67*/
          v8 = a1->members.super.process; /*0x5eaf6a*/
          p_SetUnk02C = (void (__thiscall **)(LowProcess *, BSExtraData *))&v8->SetUnk02C; /*0x5eaf71*/
          PackageExtraTarget = ExtraDataList_GetPackageExtraTarget(&a1->members.super.super.baseExtraList); /*0x5eaf77*/
          (*p_SetUnk02C)(v8, PackageExtraTarget); /*0x5eaf82*/
          if ( *(_BYTE *)(a4 + 0x20) == 0x11 && !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x5eaf93*/
          {
            sub_4246F0(&a1->members.super.super.baseExtraList); /*0x5eaf9e*/
            v11 = flt_A5A04C; /*0x5eafa3*/
            *(_DWORD *)(a4 + 0x54) = 0; /*0x5eafaa*/
            a5 = v11; /*0x5eafc1*/
            v23 = a1->vtbl->super.super.GetPos(a1); /*0x5eafce*/
            a3 = flt_A5A04C; /*0x5eafd8*/
            v21 = a1->vtbl->super.super.GetPos(a1); /*0x5eafdd*/
            DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x5eafe0*/
            sub_446B90( /*0x5eafec*/
              DwordAtOffset40,
              v21,
              a3,
              v23,
              a5,
              (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_SetOwnedDoorLockedForActor,
              (int)a1);
          }
          if ( a1->members.super.process->Unk_37(a1->members.super.process) ) /*0x5eaffc*/
          {
            v13 = a1->members.super.process; /*0x5eb002*/
            v14 = v13->__vftable; /*0x5eb00d*/
            v15 = ((int (*)(void))v13->Unk_37)(); /*0x5eb00f*/
            v14->Unk_36(a1->members.super.process, v15); /*0x5eb01b*/
            a1->members.super.process->Unk_38(a1->members.super.process, 0); /*0x5eb02a*/
          }
          vtbl = a1->vtbl; /*0x5eb02c*/
          LOBYTE(v17) = ExtraDataList_GetPackageExtraComplete(&a1->members.super.super.baseExtraList); /*0x5eb030*/
          vtbl->super.super.SetProcedureCompleted((TESObjectREFR *)a1, v17); /*0x5eb03e*/
          v18 = a1->members.super.process; /*0x5eb040*/
          p_SetUnk01C = (void (__thiscall **)(LowProcess *, int))&v18->SetUnk01C; /*0x5eb047*/
          LOBYTE(v20) = ExtraDataList_GetPackageExtraActivate(&a1->members.super.super.baseExtraList); /*0x5eb04d*/
          (*p_SetUnk01C)(v18, v20); /*0x5eb058*/
          sub_4246D0(&a1->members.super.super.baseExtraList); /*0x5eb05c*/
          editorPackage = self; /*0x5eb061*/
        }
        else
        {
          a1->members.super.process->editorPackage = 0;// 3DTheft: no ExtraPackage cleanup branch clears process->editorPackage. /*0x5eb06a*/
          a1->members.super.process->editorPackProcedure = kProcedure_TRAVEL;// 3DTheft: no ExtraPackage cleanup branch resets editorPackProcedure to TRAVEL. /*0x5eb070*/
          a1->vtbl->super.super.SetProcedureCompleted((TESObjectREFR *)a1, 0); /*0x5eb07e*/
          a1->members.super.process->SetUnk01C(a1->members.super.process, 0); /*0x5eb08c*/
          a1->members.super.process->SetUnk02C(a1->members.super.process, 0); /*0x5eb09a*/
          if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x5eb0a2*/
            a1->members.super.process->Unk_06(a1->members.super.process, (UInt32)a1, 0); /*0x5eb0b5*/
        }
        if ( TESPackage_IsRuntimePackage(editorPackage) )// 3DTheft: detached dynamic package is destroyed or queued for save cleanup after editor/current package state is restored. /*0x5eb0b9*/
        {
          if ( sub_45A500(g_TESSaveLoadGame) ) /*0x5eb0c9*/
            TESSaveLoadGame_DeleteForm(g_TESSaveLoadGame, (TESForm *)editorPackage); /*0x5eb0d9*/
          else
            editorPackage->__vftable->super.Destroy((TESForm *)editorPackage, 1); /*0x5eb0e9*/
        }
      }
    }
    if ( a1->members.super.process ) /*0x5eb0eb*/
      ((void (__thiscall *)(LowProcess *, Actor *))a1->members.super.process->Unk_64)(a1->members.super.process, a1); /*0x5eb0fe*/
    if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] /*0x5eb12f*/
      && !a1->vtbl->GetMountedHorse(a1)
      && ((int (__thiscall *)(LowProcess *))a1->members.super.process->GetSitSleepState)(a1->members.super.process) == 9 )
    {
      a1->vtbl->AddPackageWakeUp(a1); /*0x5eb140*/
    }
  }
}
