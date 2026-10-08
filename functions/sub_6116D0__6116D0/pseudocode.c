// Character current-package cleanup. DialoguePackage receives special two-participant cleanup: stop active playback, detach both actors, restore saved ExtraPackage state where present, reset procedure state, and destroy the one shared dynamic package/owned Conversation.
void __thiscall Character::CleanupCurrentPackage(Character *this)
{
  int v1; // edi
  int v2; // esi
  Character *v3; // ebx
  _DWORD *v4; // ecx
  _BYTE *v5; // eax
  DialoguePackageRuntimeView *v6; // eax
  DialoguePackageRuntimeView *v7; // edi
  Actor *Speaker; // esi
  Actor *Target; // edi
  ActorAnimData *v10; // eax
  ActorAnimData *v11; // eax
  LowProcess *process; // ecx
  LowProcess *v13; // ecx
  LowProcess *v14; // ebx
  LowProcess *v15; // ebx
  void (__thiscall **v16)(_DWORD *, BSExtraData *); // ebp
  BSExtraData *PackageExtraTarget; // eax
  ActorVtbl *vtbl; // ebp
  int v19; // eax
  void (__thiscall **p_Unk_09)(TESForm *, int); // ebp
  int v21; // eax
  LowProcess *v22; // ebp
  LowProcess *v23; // ebx
  _DWORD *v24; // ebx
  void (__thiscall **v25)(_DWORD *, BSExtraData *); // ebp
  BSExtraData *v26; // eax
  ActorVtbl *v27; // ebp
  int v28; // eax
  void (__thiscall **v29)(_DWORD *, int); // ebp
  int v30; // eax
  LowProcess *v31; // eax
  LowProcess *v32; // ecx
  int v33; // esi
  int v34; // [esp+34h] [ebp-18h]
  int v35; // [esp+38h] [ebp-14h]
  _DWORD *v37; // [esp+44h] [ebp-8h]
  TESForm *v38; // [esp+48h] [ebp-4h]
  Actor *retaddr; // [esp+4Ch] [ebp+0h]
  _DWORD *v40; // [esp+50h] [ebp+4h]

  v3 = this; /*0x6116d4*/
  if ( this->member.super.super.process ) /*0x6116d6*/
  {
    if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x6116ea*/
    {
      v4 = &v3->member.super.super.process->__vftable; /*0x6116f7*/
      v5 = (_BYTE *)v4[2]; /*0x6116fa*/
      v35 = v2; /*0x6116ff*/
      if ( v5 && v5[0x20] == 0x12 ) /*0x61170a*/
      {
        v34 = v1; /*0x611710*/
        v6 = (DialoguePackageRuntimeView *)OblivionDynamicCast( /*0x611720*/
                                             v5,
                                             0,
                                             (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
                                             &DialoguePackage `RTTI Type Descriptor',
                                             0);
        v7 = v6; /*0x611725*/
        v38 = (TESForm *)v6; /*0x61172c*/
        if ( v6 ) /*0x611730*/
        {
          if ( v6->activeSoundHandle ) /*0x611736*/
            DialoguePackage::StopActiveSpeakerDialogue(v6); /*0x61173e*/
          Speaker = DialoguePackage::GetSpeaker(v7); /*0x61174c*/
          Target = DialoguePackage::GetTarget(v7); /*0x611759*/
          sub_642B40(&qword_B3BB2C[0x94], (int)Speaker); /*0x61175b*/
          sub_642B40(&qword_B3BB2C[0x94], (int)Target); /*0x611766*/
          if ( Speaker ) /*0x61176d*/
            Speaker->members.super.process->Unk_129(Speaker->members.super.process); /*0x61177a*/
          if ( Target ) /*0x61177e*/
            Target->members.super.process->Unk_129(Target->members.super.process); /*0x61178b*/
          if ( Speaker ) /*0x61178f*/
          {
            if ( Target ) /*0x611793*/
            {
              ((void (__thiscall *)(LowProcess *, Actor *))Speaker->members.super.process->Unk_11F)( /*0x6117a1*/
                Speaker->members.super.process,
                Target);
              ((void (__thiscall *)(LowProcess *, Actor *))Target->members.super.process->Unk_11F)( /*0x6117af*/
                Target->members.super.process,
                Speaker);
              *(float *)&Speaker->members.unk0E8[6] = 1.0; /*0x6117b3*/
              *(float *)&Target->members.unk0E8[6] = 1.0; /*0x6117bb*/
              ((void (__thiscall *)(LowProcess *, _DWORD))Speaker->members.super.process->Unk_95)( /*0x6117cc*/
                Speaker->members.super.process,
                0);
              ((void (__thiscall *)(LowProcess *, _DWORD))Target->members.super.process->Unk_95)( /*0x6117db*/
                Target->members.super.process,
                0);
            }
          }
          v10 = (ActorAnimData *)((int (__thiscall *)(Actor *, int, int))Speaker->vtbl->super.super.GetAnimData)( /*0x6117e7*/
                                   Speaker,
                                   v34,
                                   v35);
          if ( v10 ) /*0x6117eb*/
            ActorAnimData_CleanupOrPromoteQueuedIdles(v10, 1, 0); /*0x6117f3*/
          v11 = Target->vtbl->super.super.GetAnimData((TESObjectREFR *)Target); /*0x611802*/
          if ( v11 ) /*0x611806*/
            ActorAnimData_CleanupOrPromoteQueuedIdles(v11, 1, 0); /*0x61180e*/
          process = Speaker->members.super.process; /*0x611813*/
          if ( process ) /*0x611818*/
            ((void (__thiscall *)(LowProcess *, _DWORD))process->Unk_77)(process, 0); /*0x611824*/
          v13 = Target->members.super.process; /*0x611826*/
          if ( v13 ) /*0x61182b*/
            ((void (__thiscall *)(LowProcess *, _DWORD))v13->Unk_77)(v13, 0); /*0x611837*/
          Actor::GetCurrentPackage(Target); /*0x61183c*/
          Actor::GetCurrentPackage(Speaker); /*0x611843*/
          Speaker->vtbl->super.super.super.ClearModified((TESForm *)Speaker, 0x30000); /*0x611854*/
          if ( ExtraDataList::GetExtraPackage(&Speaker->members.super.super.baseExtraList) ) /*0x61185b*/
          {
            v14 = Speaker->members.super.process; /*0x611868*/
            v14->editorPackage = (TESPackage *)ExtraDataList::GetExtraPackage(&Speaker->members.super.super.baseExtraList); /*0x611872*/
            sub_5E8DE0(retaddr, Speaker->members.super.process->editorPackage); /*0x611880*/
            v15 = Speaker->members.super.process; /*0x611885*/
            v15->editorPackProcedure = ExtraDataList_GetPackageExtraIndex(&Speaker->members.super.super.baseExtraList); /*0x61188f*/
            v40 = &Speaker->members.super.process->__vftable; /*0x6118a0*/
            v16 = (void (__thiscall **)(_DWORD *, BSExtraData *))(*v40 + 0xD0); /*0x6118a4*/
            PackageExtraTarget = ExtraDataList_GetPackageExtraTarget(&retaddr->members.super.super.baseExtraList); /*0x6118aa*/
            (*v16)(v40, PackageExtraTarget); /*0x6118b7*/
            vtbl = Speaker->vtbl; /*0x6118b9*/
            LOBYTE(v19) = ExtraDataList_GetPackageExtraComplete(&retaddr->members.super.super.baseExtraList); /*0x6118bd*/
            ((void (__thiscall *)(Actor *, int))vtbl->super.super.SetProcedureCompleted)(Speaker, v19); /*0x6118cb*/
            v38 = (TESForm *)Speaker->members.super.process; /*0x6118d4*/
            p_Unk_09 = (void (__thiscall **)(TESForm *, int))&v38->vtbl[4].Unk_09; /*0x6118d8*/
            LOBYTE(v21) = ExtraDataList_GetPackageExtraActivate(&retaddr->members.super.super.baseExtraList); /*0x6118de*/
            (*p_Unk_09)(v38, v21); /*0x6118eb*/
            sub_4246D0(&Speaker->members.super.super.baseExtraList); /*0x6118f0*/
            if ( !*(_BYTE *)(g_TESDataHandler + 0xCD4) ) /*0x6118fa*/
              Speaker->members.super.process->Unk_06(Speaker->members.super.process, (UInt32)Speaker, 1); /*0x61190e*/
            v3 = this; /*0x611910*/
          }
          else
          {
            Speaker->members.super.process->editorPackage = 0; /*0x6119d1*/
            Speaker->members.super.process->editorPackProcedure = kProcedure_TRAVEL; /*0x6119d7*/
            Speaker->members.super.process->SetUnk02C(Speaker->members.super.process, 0); /*0x6119e6*/
            ((void (__thiscall *)(Actor *, _DWORD))Speaker->vtbl->super.super.SetProcedureCompleted)(Speaker, 0); /*0x6119f3*/
            Speaker->members.super.process->SetUnk01C(Speaker->members.super.process, 0); /*0x611a01*/
            if ( !*(_BYTE *)(g_TESDataHandler + 0xCD4) ) /*0x611a08*/
              Speaker->members.super.process->Unk_06(Speaker->members.super.process, (UInt32)Speaker, 1); /*0x611a20*/
          }
          if ( Actor_IsInDialogueProcedure(Target) ) /*0x611916*/
          {
            Target->vtbl->super.super.super.ClearModified((TESForm *)Target, 0x30000); /*0x61192f*/
            if ( ExtraDataList::GetExtraPackage(&Target->members.super.super.baseExtraList) ) /*0x611936*/
            {
              v22 = Target->members.super.process; /*0x611943*/
              v22->editorPackage = (TESPackage *)ExtraDataList::GetExtraPackage(&Target->members.super.super.baseExtraList); /*0x61194d*/
              sub_5E8DE0((Actor *)v3, Target->members.super.process->editorPackage); /*0x611959*/
              v23 = Target->members.super.process; /*0x61195e*/
              v23->editorPackProcedure = ExtraDataList_GetPackageExtraIndex(&Target->members.super.super.baseExtraList); /*0x611968*/
              v24 = &Target->members.super.process->__vftable; /*0x61196b*/
              v25 = (void (__thiscall **)(_DWORD *, BSExtraData *))(*v24 + 0xD0); /*0x611972*/
              v26 = ExtraDataList_GetPackageExtraTarget(&Target->members.super.super.baseExtraList); /*0x611978*/
              (*v25)(v24, v26); /*0x611983*/
              v27 = Target->vtbl; /*0x611989*/
              LOBYTE(v28) = ExtraDataList_GetPackageExtraComplete(&this->member.super.super.super.baseExtraList); /*0x611990*/
              ((void (__thiscall *)(Actor *, int))v27->super.super.SetProcedureCompleted)(Target, v28); /*0x61199e*/
              v37 = &Target->members.super.process->__vftable; /*0x6119a7*/
              v29 = (void (__thiscall **)(_DWORD *, int))(*v37 + 0x394); /*0x6119ab*/
              LOBYTE(v30) = ExtraDataList_GetPackageExtraActivate(&this->member.super.super.super.baseExtraList); /*0x6119b1*/
              (*v29)(v37, v30); /*0x6119be*/
              sub_4246D0(&Target->members.super.super.baseExtraList); /*0x6119c2*/
            }
            else
            {
              v31 = Target->members.super.process; /*0x611a27*/
              if ( v31 ) /*0x611a2e*/
              {
                v31->editorPackage = 0; /*0x611a30*/
                Target->members.super.process->editorPackProcedure = kProcedure_TRAVEL; /*0x611a36*/
                Target->members.super.process->SetUnk02C(Target->members.super.process, 0); /*0x611a45*/
                ((void (__thiscall *)(Actor *, _DWORD))Target->vtbl->super.super.SetProcedureCompleted)(Target, 0); /*0x611a52*/
                Target->members.super.process->SetUnk01C(Target->members.super.process, 0); /*0x611a60*/
              }
            }
            v32 = Target->members.super.process; /*0x611a62*/
            if ( v32 ) /*0x611a67*/
            {
              if ( !*(_BYTE *)(g_TESDataHandler + 0xCD4) ) /*0x611a6f*/
                v32->Unk_06(v32, (UInt32)Target, 1); /*0x611a80*/
            }
          }
          if ( sub_45A500(g_TESSaveLoadGame) ) /*0x611a88*/
            TESSaveLoadGame_DeleteForm((char *)g_TESSaveLoadGame, v38); /*0x611a9d*/
          else
            v38->vtbl->Destroy(v38, 1); /*0x611ab4*/
        }
      }
      else
      {
        v33 = (*(int (__thiscall **)(_DWORD *, int))(*v4 + 0x4C8))(v4, 4); /*0x611ace*/
        v3->member.super.super.process->Unk_129(v3->member.super.super.process); /*0x611ad6*/
        ((void (__thiscall *)(LowProcess *, int))v3->member.super.super.process->Unk_11F)( /*0x611ae4*/
          v3->member.super.super.process,
          v33);
        *(float *)&v3->member.super.unk0E8[6] = 1.0; /*0x611ae9*/
      }
    }
  }
}
