// Verified tier-transition identity: MobileObject load dispatch for saved level0 calls this slot; body allocates 0x2ec matching process constructor, copies/replaces current process, and registers level0. Success exit sets AL=1; no stack arguments (RET0 and no-argument loader call). Probable Fallout Moveto* lineage; internal animation/combat scheduling side effects not fully decoded in this pass.
bool __thiscall Actor_MoveToHigh(Actor *self)
{
  double v1; // st5
  double v2; // st6
  LowProcess *process; // ecx
  HighProcess *v5; // edi
  LowProcess *v6; // eax
  int form; // ebx
  TESPackage *editorPackage; // eax
  TargetData *target; // eax
  LowProcess *v10; // ecx
  int v11; // ebp
  HighProcess *v16; // eax
  void (__thiscall *Copy)(BaseProcess *__hidden, BaseProcess *); // edx
  LowProcess *v18; // ecx
  void (__thiscall *Destructor)(BaseProcess *__hidden); // edx
  LowProcess *v20; // ecx
  ExtraContainerChanges_Data *ContainerChanges; // edi
  LowProcess_vtbl *v22; // ebp
  EntryData *EquippedInstance; // eax
  LowProcess_vtbl *v24; // ebp
  EntryData *v25; // eax
  LowProcess_vtbl *v26; // ebp
  EntryData *v27; // eax
  LowProcess_vtbl *v28; // ebp
  EntryData *v29; // eax
  int v30; // edx
  void (__thiscall *SetUnk0F8)(BaseProcess *__hidden); // edx
  LowProcess *v32; // ecx
  EntryData *(__thiscall *GetEquippedLightData)(BaseProcess *__hidden, bool); // edx
  double v34; // st7
  double RequiredNoteTime; // st7
  LowProcess_vtbl *v36; // ebp
  int *v37; // edi
  float v38; // eax
  int v39; // edx
  NiNode *niNode; // edi
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // edx
  bool v42; // bl
  ActorAnimData *v43; // eax
  ActorAnimData *v44; // edi
  NiTransform *v47; // eax
  _DWORD *v48; // ecx
  NiTransform *v49; // eax
  LowProcess *v50; // edi
  int v51; // eax
  int v52; // eax
  Actor *v53; // eax
  _DWORD *ShadowSceneNode; // eax
  volatile LONG *v56; // [esp+Ch] [ebp-124h]
  float deltaTime; // [esp+18h] [ebp-118h]
  float deltaTimea; // [esp+18h] [ebp-118h]
  float deltaTimeb; // [esp+18h] [ebp-118h]
  float deltaTimec; // [esp+18h] [ebp-118h]
  float deltaTimed; // [esp+18h] [ebp-118h]
  float easeOutTime; // [esp+1Ch] [ebp-114h]
  float easeOutTimea; // [esp+1Ch] [ebp-114h]
  float easeOutTimeb; // [esp+1Ch] [ebp-114h]
  float easeOutTimec; // [esp+1Ch] [ebp-114h]
  float easeOutTimed; // [esp+1Ch] [ebp-114h]
  int v67; // [esp+38h] [ebp-F8h]
  int v68; // [esp+3Ch] [ebp-F4h]
  NiPoint3 v69; // [esp+44h] [ebp-ECh] BYREF
  NiPoint3 v70; // [esp+50h] [ebp-E0h] BYREF
  _BYTE v71[12]; // [esp+5Ch] [ebp-D4h] BYREF
  int v72; // [esp+68h] [ebp-C8h] BYREF
  int v73; // [esp+70h] [ebp-C0h]
  NiMatrix33 v74; // [esp+74h] [ebp-BCh] BYREF
  NiTransform v75[2]; // [esp+98h] [ebp-98h] BYREF
  unsigned int v76; // [esp+11Ch] [ebp-14h]

  _ESI = self; /*0x5fa34d*/
  process = self->members.super.process; /*0x5fa34f*/
  v5 = 0; /*0x5fa352*/
  if ( !process || process->GetProcessLevel(process) ) /*0x5fa35d*/
  {
    if ( _ESI->members.super.process ) /*0x5fa367*/
    {
      if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x5fa372*/
        _ESI->members.super.process->Unk_06(_ESI->members.super.process, (UInt32)_ESI, 1); /*0x5fa386*/
    }
    HIBYTE(v74.data[2][1]) = _ESI->vtbl->IsInCombat(_ESI, 1); /*0x5fa396*/
    v6 = _ESI->members.super.process; /*0x5fa39a*/
    form = 0; /*0x5fa39d*/
    if ( v6 ) /*0x5fa3a1*/
    {
      editorPackage = v6->editorPackage; /*0x5fa3a3*/
      if ( editorPackage ) /*0x5fa3a8*/
      {
        target = editorPackage->members.target; /*0x5fa3aa*/
        if ( target ) /*0x5fa3af*/
          form = (int)sub_569E60(target).form; /*0x5fa3b8*/
      }
    }
    LOBYTE(v75[0].rot.data[0][1]) = sub_5E6CD0((TESObjectREFR *)_ESI, 0); /*0x5fa3cb*/
    v10 = _ESI->members.super.process; /*0x5fa3d0*/
    v11 = 3; /*0x5fa3d5*/
    LODWORD(v74.data[2][2]) = 3; /*0x5fa3da*/
    if ( v10 ) /*0x5fa3de*/
    {
      LODWORD(v74.data[2][2]) = v10->GetProcessLevel(v10); /*0x5fa3ee*/
      sub_674550((int)_ESI, SLODWORD(v74.data[2][2])); /*0x5fa3f2*/
      v11 = LODWORD(v74.data[2][2]); /*0x5fa3f7*/
    }
    __asm /*0x5fa3fb*/
    {
      fld     dword ptr [esi+20h]
      fcomp   qword ptr ds:0A3A5B0h
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x5fa409*/
    {
      __asm /*0x5fa41a*/
      {
        fld     dword ptr [esi+2Ch]
        fld     dword ptr ds:0B3F9A8h
        fucompp
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x5fa42a*/
        goto LABEL_19; /*0x5fa42a*/
      __asm /*0x5fa42c*/
      {
        fld     dword ptr [esi+30h]
        fld     dword ptr ds:0B3F9ACh
        fucompp
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x5fa43c*/
        goto LABEL_19; /*0x5fa43c*/
      __asm /*0x5fa43e*/
      {
        fld     dword ptr [esi+34h]
        fld     dword ptr ds:0B3F9B0h
        fucompp
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x5fa44b*/
      {
LABEL_19:
        if ( sub_45A500(g_TESSaveLoadGame) || v11 < 2 || v11 > 3 ) /*0x5fa467*/
        {
LABEL_21:
          sub_5EB370((TESObjectREFR *)_ESI); /*0x5fa474*/
LABEL_22:
          v16 = (HighProcess *)FormHeapAlloc(0x2ECu); /*0x5fa47b*/
          LODWORD(v74.data[2][2]) = v16; /*0x5fa488*/
          v76 = 0; /*0x5fa48e*/
          if ( v16 ) /*0x5fa495*/
            v5 = HighProcess::HighProcess(v16); /*0x5fa49e*/
          Copy = v5->Copy; /*0x5fa4a5*/
          LODWORD(v74.data[0][0]) = _ESI->members.super.process; /*0x5fa4a8*/
          v76 = 0xFFFFFFFF; /*0x5fa4ab*/
          Copy(v5, (BaseProcess *)LODWORD(v74.data[0][0])); /*0x5fa4b6*/
          v18 = _ESI->members.super.process; /*0x5fa4b8*/
          if ( v18 ) /*0x5fa4bd*/
          {
            Destructor = v18->Destructor; /*0x5fa4c1*/
            v73 = 1; /*0x5fa4c3*/
            Destructor(v18); /*0x5fa4c5*/
          }
          _ESI->members.super.process = v5; /*0x5fa4c7*/
          if ( v5->GetIsAlerted(v5) ) /*0x5fa4d4*/
          {
            v20 = _ESI->members.super.process; /*0x5fa4da*/
            if ( v20 ) /*0x5fa4df*/
              v20->SetCombatMode(v20, 1); /*0x5fa4eb*/
          }
          ActorProcessManager_AddMobileObject( /*0x5fa4fb*/
            (ActorProcessManager *)&qword_B3BB2C[0x75],
            (MobileObject *)_ESI,
            0,
            0,
            0,
            0);
          sub_634CB0(v5, _ESI); /*0x5fa503*/
          v5->Unk_17(v5); /*0x5fa50f*/
          ContainerChanges = ExtraDataList_GetContainerChanges(&_ESI->members.super.super.baseExtraList); /*0x5fa519*/
          if ( ContainerChanges ) /*0x5fa51d*/
          {
            if ( v11 != 1 ) /*0x5fa526*/
            {
              v22 = _ESI->members.super.process->__vftable; /*0x5fa52f*/
              v72 = 0; /*0x5fa531*/
              EquippedInstance = (EntryData *)ContainerExtraData_GetEquippedInstance( /*0x5fa539*/
                                                (ExtraDataList *****)ContainerChanges,
                                                9,
                                                0);
              v22->SetEquippedWeaponData(_ESI->members.super.process, EquippedInstance); /*0x5fa548*/
              v24 = _ESI->members.super.process->__vftable; /*0x5fa54d*/
              v25 = (EntryData *)ContainerExtraData_GetEquippedInstance((ExtraDataList *****)ContainerChanges, 0xC, 0); /*0x5fa555*/
              v24->setEquippedAmmoData(_ESI->members.super.process, v25); /*0x5fa564*/
              v26 = _ESI->members.super.process->__vftable; /*0x5fa569*/
              v27 = (EntryData *)ContainerExtraData_GetEquippedInstance((ExtraDataList *****)ContainerChanges, 0xD, 0); /*0x5fa571*/
              v26->SetEquippedShieldData(_ESI->members.super.process, v27); /*0x5fa580*/
              v28 = _ESI->members.super.process->__vftable; /*0x5fa585*/
              v29 = (EntryData *)ContainerExtraData_GetEquippedInstance((ExtraDataList *****)ContainerChanges, 0xE, 0); /*0x5fa58d*/
              v28->SetEquippedLightData(_ESI->members.super.process, v29); /*0x5fa59c*/
              ContainerChanges = (ExtraContainerChanges_Data *)ContainerExtraData_GetEquippedInstance( /*0x5fa5a9*/
                                                                 (ExtraDataList *****)ContainerChanges,
                                                                 9,
                                                                 0);
              sub_612A90(_ESI, (void **)&ContainerChanges->objList); /*0x5fa5ad*/
              __asm { fstp    [esp+0E0h+var_BC.data]; int } /*0x5fa5b2*/
              if ( ContainerChanges ) /*0x5fa5bb*/
              {
                ContainerEntryExtraData_DestroyDataTable((unsigned int *)ContainerChanges, v30); /*0x5fa5bf*/
                FormHeapFree((unsigned int)ContainerChanges); /*0x5fa5c5*/
              }
              __asm { fld     [esp+0D8h+var_BC.data] } /*0x5fa5d0*/
              SetUnk0F8 = _ESI->members.super.process->SetUnk0F8; /*0x5fa5d6*/
              __asm { fstp    [esp+0DCh+var_DC]; float } /*0x5fa5dd*/
              ((void (__cdecl *)(_DWORD))SetUnk0F8)(LODWORD(v70.y)); /*0x5fa5e0*/
              v32 = _ESI->members.super.process; /*0x5fa5e2*/
              GetEquippedLightData = v32->GetEquippedLightData; /*0x5fa5e7*/
              LODWORD(v70.x) = 1; /*0x5fa5ed*/
              ((void (__thiscall *)(LowProcess *))GetEquippedLightData)(v32); /*0x5fa5ef*/
              v11 = v72; /*0x5fa5f1*/
            }
          }
          v34 = ((double (__thiscall *)(LowProcess *))_ESI->members.super.process->Unk_13)(_ESI->members.super.process); /*0x5fa5fd*/
          RequiredNoteTime = sub_5E6E00(_ESI, (int)ContainerChanges, v2, v34); /*0x5fa601*/
          if ( v71[0xB] ) /*0x5fa60b*/
          {
            if ( !_ESI->vtbl->GetCombatController(_ESI) ) /*0x5fa617*/
            {
              sub_5EAE70(_ESI, form, (int)ContainerChanges, SLODWORD(v70.x)); /*0x5fa61f*/
              v36 = _ESI->members.super.process->__vftable; /*0x5fa627*/
              v37 = (int *)_ESI->members.super.process; /*0x5fa629*/
              v38 = COERCE_FLOAT(((int (__thiscall *)(int *, int, int))v36->GetUnk01E)(v37, 1, 1)); /*0x5fa637*/
              v39 = *v37; /*0x5fa639*/
              v69.x = v38; /*0x5fa63d*/
              v68 = (*(int (__thiscall **)(int *))(v39 + 0x148))(v37); /*0x5fa652*/
              v67 = 0; /*0x5fa653*/
              ((void (__thiscall *)(LowProcess *, Actor *, int, _DWORD, int))v36->Unk_89)( /*0x5fa65d*/
                _ESI->members.super.process,
                _ESI,
                form,
                0,
                v73);
              v11 = 0; /*0x5fa65f*/
            }
          }
          niNode = (NiNode *)_ESI->members.super.super.niNode; /*0x5fa665*/
          GetBaseForm = _ESI->vtbl->super.super.GetBaseForm; /*0x5fa668*/
          LODWORD(v69.x) = niNode; /*0x5fa670*/
          v42 = 1; /*0x5fa674*/
          if ( GetBaseForm((TESObjectREFR *)_ESI)->member.type == kFormType_Creature ) /*0x5fa67c*/
          {
            if ( niNode ) /*0x5fa680*/
              v42 = ((unsigned __int8 (__thiscall *)(Actor *))_ESI->vtbl->Unk_9E)(_ESI) != 0; /*0x5fa692*/
          }
          if ( LOBYTE(_ESI->members.unk0B4[3]) /*0x5fa6c3*/
            || _ESI->vtbl->super.super.IsDead((TESObjectREFR *)_ESI, 0)
            && v42
            && !ExtraDataList_GetRagDollData(&_ESI->members.super.super.baseExtraList)
            && !ExtraDataList_GetSavedHavokData(&_ESI->members.super.super.baseExtraList) )
          {
            Actor_HandleDeathState(_ESI, 0); /*0x5fa6d0*/
            LOBYTE(_ESI->members.unk0B4[3]) = 1; /*0x5fa6d5*/
          }
          ((void (__thiscall *)(Actor *, _DWORD))_ESI->vtbl->super.super.Unk_5E)(_ESI, 0); /*0x5fa6e8*/
          if ( niNode ) /*0x5fa6ec*/
          {
            if ( v11 == 1 ) /*0x5fa6f1*/
            {
              if ( ((int (__thiscall *)(LowProcess *))_ESI->members.super.process->GetSitSleepState)(_ESI->members.super.process) ) /*0x5fa6fe*/
              {
                if ( !_ESI->vtbl->GetMountedHorse(_ESI) ) /*0x5fa70e*/
                  sub_88CE30(niNode, 1, 1, 0); /*0x5fa718*/
              }
            }
          }
          if ( !LOBYTE(_ESI->members.unk0B4[3]) ) /*0x5fa727*/
            goto LABEL_63; /*0x5fa727*/
          if ( !niNode ) /*0x5fa72f*/
          {
LABEL_65:
            HideEquipment((TESObjectREFR *)_ESI, v1, v2, RequiredNoteTime, 0, 0); /*0x5fa93b*/
            v50 = _ESI->members.super.process; /*0x5fa946*/
            if ( v50 ) /*0x5fa94b*/
            {
              v51 = (int)v50->GetCurrentPackage(_ESI->members.super.process); /*0x5fa957*/
              if ( v51 ) /*0x5fa95b*/
              {
                if ( *(_BYTE *)(v51 + 0x20) == 6 ) /*0x5fa961*/
                  v50->SetCurrentPackProcedure(v50, kProcedure_TRAVEL); /*0x5fa96f*/
              }
            }
            if ( !_ESI->vtbl->super.super.IsDead((TESObjectREFR *)_ESI, 0) && (v11 == 3 || v11 == 2) ) /*0x5fa98b*/
              sub_5EDA20((TESObjectREFR *)_ESI, 0); /*0x5fa991*/
            if ( v50 ) /*0x5fa998*/
            {
              if ( v50->GetUnk020(v50) ) /*0x5fa9a8*/
              {
                if ( v50->GetUnk02C(v50) ) /*0x5fa9b8*/
                {
                  v52 = (int)v50->GetUnk02C(v50); /*0x5fa9c8*/
                  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v52 + 0x190))(v52) ) /*0x5fa9d4*/
                  {
                    v53 = (Actor *)v50->GetUnk02C(v50); /*0x5fa9e4*/
                    if ( v53 ) /*0x5fa9e8*/
                    {
                      if ( Actor::GetProcessLevel(v53) ) /*0x5fa9ec*/
                      {
                        v50->SetUnk020(v50, 0); /*0x5faa01*/
                        sub_674550((int)_ESI, 0); /*0x5faa0b*/
                        v50->SetUnk020(v50, 1); /*0x5faa1c*/
                      }
                    }
                  }
                }
              }
            }
            if ( _ESI->vtbl->super.super.GetNiNode((TESObjectREFR *)_ESI) ) /*0x5faa28*/
            {
              v56 = (volatile LONG *)_ESI->vtbl->super.super.GetNiNode((TESObjectREFR *)_ESI); /*0x5faa3a*/
              ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x5faa3d*/
              ShadowSceneNodeAddShadowCaster(ShadowSceneNode, v56);// Direct retail AddShadowCaster caller in mobile/actor NiNode lifecycle. /*0x5faa47*/
            }
            return 1; /*0x5faa47*/
          }
          _ESI->vtbl->super.Unk_72((MobileObject *)_ESI); /*0x5fa73f*/
          if ( !_ESI->vtbl->super.super.GetAnimData((TESObjectREFR *)_ESI) /*0x5fa765*/
            || (v43 = _ESI->vtbl->super.super.GetAnimData((TESObjectREFR *)_ESI), !ActorAnimData_HasAnimKey(v43, 0x20u)) )
          {
            if ( LOBYTE(_ESI->members.unk0B4[3]) ) /*0x5fa8a2*/
            {
              Actor_HandleDeathState(_ESI, 1u); /*0x5fa8af*/
              _ESI->vtbl->super.GetZRotation((MobileObject *)_ESI); /*0x5fa8be*/
              __asm { fstp    [esp+114h+easeOutTime]; angleZ } /*0x5fa8c5*/
              NiMatrix33_InitRotationZ(&v75[0].rot, easeOutTimed); /*0x5fa8c8*/
              __asm /*0x5fa8cd*/
              {
                fldz
                fst     [esp+110h+var_E0]
              }
              __asm { fld1 }
              __asm { fstp    [esp+114h+var_DC] }
              __asm { fstp    [esp+118h+var_D8] }
              v49 = sub_7101F0(v75, (NiTransform *)v71, &v70); /*0x5fa8ee*/
              __asm { fldz } /*0x5fa8f5*/
              v70.x = v49->rot.data[0][0]; /*0x5fa8fa*/
              __asm { fstp    [esp+118h+deltaTime]; float } /*0x5fa8fe*/
              v70.y = v49->rot.data[0][1]; /*0x5fa90a*/
              v70.z = v49->rot.data[0][2]; /*0x5fa913*/
              sub_8AB440(niNode, &v70.x, 1, deltaTimed, 1); /*0x5fa917*/
            }
            goto LABEL_62; /*0x5fa917*/
          }
          __asm { fldz } /*0x5fa77e*/
          __asm { fstp    [esp+114h+easeOutTime]; easeOutTime }
          v44 = _ESI->vtbl->super.super.GetAnimData((TESObjectREFR *)_ESI); /*0x5fa784*/
          ActorAnimData_ClearSlot(v44, 5, easeOutTime); /*0x5fa78a*/
          __asm { fldz } /*0x5fa78f*/
          __asm { fstp    [esp+118h+deltaTime] }
          ActorAnimData_RestorePlaySavedSlot((int)v44, 0, 0x20u, 0xFFFFFFFF, deltaTime, 0xFFFFFFFF); /*0x5fa79f*/
          _EBP = ActorAnimData_GetNormalizedSequenceSlot(v44, 0); /*0x5fa7b1*/
          Actor_HandleDeathState(_ESI, 2u); /*0x5fa7b3*/
          if ( _EBP ) /*0x5fa7ba*/
          {
            if ( !((unsigned __int8 (__thiscall *)(Actor *))_ESI->vtbl->Unk_9E)(_ESI) ) /*0x5fa7ca*/
            {
              __asm { fld     dword ptr [ebp+30h] } /*0x5fa7d0*/
              __asm { fstp    dword ptr [ebp+48h] }
              *((float *)_EBP + 0x12) = _ET1; /*0x5fa7d6*/
              __asm /*0x5fa7db*/
              {
                fld     dword ptr [ebp+30h]
                fstp    [esp+118h+easeOutTime]; explicitTimeOrMinusOne
                fldz
                fstp    [esp+118h+deltaTime]; deltaTime
              }
              ActorAnimData_Update(v44, _ESI, deltaTimea, easeOutTimea); /*0x5fa7e8*/
              ActorAnimData_ApplyToActor(v44, (TESObjectREFR *)_ESI); /*0x5fa7f0*/
              sub_5F5D10((TESObjectREFR *)_ESI, v1, v2, RequiredNoteTime); /*0x5fa7f7*/
              v11 = v67; /*0x5fa7fc*/
              niNode = (NiNode *)v68; /*0x5fa800*/
LABEL_62:
              _ESI->members.super.process->Unk_08(_ESI->members.super.process); /*0x5fa91f*/
              LOBYTE(_ESI->members.unk0B4[3]) = 0; /*0x5fa929*/
LABEL_63:
              if ( niNode ) /*0x5fa932*/
                sub_5EE1B0(_ESI, RequiredNoteTime); /*0x5fa936*/
              goto LABEL_65; /*0x5fa936*/
            }
            RequiredNoteTime = TESAnimGroup_GetRequiredNoteTime(*((CAS_TESAnimGroup_Decoded **)_EBP + 0x1A), 1); /*0x5fa80e*/
            __asm { fstp    [esp+118h+easeOutTime]; explicitTimeOrMinusOne } /*0x5fa816*/
            __asm
            {
              fldz
              fstp    [esp+118h+deltaTime]; deltaTime
            }
            ActorAnimData_Update(v44, _ESI, deltaTimeb, easeOutTimeb); /*0x5fa822*/
            ActorAnimData_ApplyToActor(v44, (TESObjectREFR *)_ESI); /*0x5fa82a*/
            __asm { fld     dword ptr [esi+28h] } /*0x5fa82f*/
            __asm { fstp    [esp+114h+easeOutTime]; angleZ }
            NiMatrix33_InitRotationZ(&v74, easeOutTimec); /*0x5fa83a*/
            __asm /*0x5fa83f*/
            {
              fldz
              fst     [esp+110h+var_EC]
            }
            __asm { fld1 }
            __asm { fstp    [esp+114h+var_E8] }
            __asm { fstp    [esp+118h+var_E4] }
            v47 = sub_7101F0((NiTransform *)&v74, (NiTransform *)&v72, &v69); /*0x5fa85d*/
            __asm { fldz } /*0x5fa864*/
            v69.x = v47->rot.data[0][0]; /*0x5fa866*/
            v69.y = v47->rot.data[0][1]; /*0x5fa870*/
            __asm { fstp    [esp+118h+deltaTime]; float } /*0x5fa874*/
            v48 = _ESI->members.super.super.niNode; /*0x5fa87a*/
            v69.z = v47->rot.data[0][2]; /*0x5fa885*/
            sub_8AB440(v48, &v69.x, 1, deltaTimec, 0); /*0x5fa889*/
          }
          sub_5F5D10((TESObjectREFR *)_ESI, v1, v2, RequiredNoteTime); /*0x5fa893*/
          v11 = v67; /*0x5fa898*/
          niNode = (NiNode *)v68; /*0x5fa89c*/
          goto LABEL_62; /*0x5fa8a0*/
        }
      }
    }
    else
    {
      __asm { fldz } /*0x5fa40b*/
      __asm { fstp    [esp+0B8h+var_BC.data+4]; radians }
      TESObjectREFR_SetRotationX((TESObjectREFR *)_ESI, v74.data[0][1]); /*0x5fa413*/
    }
    if ( sub_5EB400(_ESI, v2, v1) ) /*0x5fa46b*/
      goto LABEL_22; /*0x5fa472*/
    goto LABEL_21; /*0x5fa472*/
  }
  return 1; /*0x5faa4e*/
}
