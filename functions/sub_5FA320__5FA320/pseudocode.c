int __thiscall sub_5FA320(Actor *this, int a2)
{
  double v2; // st5
  double v3; // st6
  double v4; // st7
  LowProcess *process; // ecx
  HighProcess *v7; // edi
  int result; // eax
  LowProcess *v9; // eax
  int form; // ebx
  TESPackage *editorPackage; // eax
  TargetData *target; // eax
  LowProcess *v13; // ecx
  int v14; // ebp
  HighProcess *v19; // eax
  void (__thiscall *Copy)(BaseProcess *__hidden, BaseProcess *); // edx
  LowProcess *v21; // ecx
  void (__thiscall *Destructor)(BaseProcess *__hidden); // edx
  LowProcess *v23; // ecx
  ExtraContainerChanges_Data *ContainerChanges; // edi
  LowProcess_vtbl *v25; // ebp
  EntryData *EquippedInstance; // eax
  LowProcess_vtbl *v27; // ebp
  EntryData *v28; // eax
  LowProcess_vtbl *v29; // ebp
  EntryData *v30; // eax
  LowProcess_vtbl *v31; // ebp
  EntryData *v32; // eax
  int v33; // edx
  void (__thiscall *SetUnk0F8)(BaseProcess *__hidden); // edx
  LowProcess *v35; // ecx
  EntryData *(__thiscall *GetEquippedLightData)(BaseProcess *__hidden, bool); // edx
  LowProcess_vtbl *v37; // ebp
  int *v38; // edi
  float v39; // eax
  int v40; // edx
  NiNode *niNode; // edi
  TESForm *(__thiscall *GetBaseForm)(TESObjectREFR *); // edx
  bool v43; // bl
  ActorAnimData *v44; // eax
  ActorAnimData *v45; // edi
  NiTransform *v48; // eax
  int v49; // ecx
  NiTransform *v50; // eax
  LowProcess *v51; // edi
  int v52; // eax
  int v53; // eax
  Actor *v54; // eax
  double v55; // st7
  _DWORD *ShadowSceneNode; // eax
  volatile LONG *v57; // [esp+Ch] [ebp-124h]
  float v58; // [esp+18h] [ebp-118h]
  float v59; // [esp+18h] [ebp-118h]
  float v60; // [esp+18h] [ebp-118h]
  float v61; // [esp+18h] [ebp-118h]
  float v62; // [esp+18h] [ebp-118h]
  float v63; // [esp+1Ch] [ebp-114h]
  float v64; // [esp+1Ch] [ebp-114h]
  float v65; // [esp+1Ch] [ebp-114h]
  float v66; // [esp+1Ch] [ebp-114h]
  float v67; // [esp+1Ch] [ebp-114h]
  int v68; // [esp+38h] [ebp-F8h]
  int v69; // [esp+3Ch] [ebp-F4h]
  NiPoint3 v70; // [esp+44h] [ebp-ECh] BYREF
  NiPoint3 v71; // [esp+50h] [ebp-E0h] BYREF
  NiTransform v72; // [esp+5Ch] [ebp-D4h] BYREF
  bool v73; // [esp+93h] [ebp-9Dh]
  int v74; // [esp+94h] [ebp-9Ch]
  NiTransform v75[2]; // [esp+98h] [ebp-98h] BYREF
  unsigned int v76; // [esp+11Ch] [ebp-14h]

  _ESI = this;
  process = this->members.super.process;
  v7 = 0;
  if ( !process || (result = process->GetProcessLevel(process)) != 0 )
  {
    if ( _ESI->members.super.process )
    {
      if ( !sub_45A500(SaveLoad_CurrentSavegame) )
        _ESI->members.super.process->Unk_06(_ESI->members.super.process, (UInt32)_ESI, 1);
    }
    v73 = _ESI->vtbl->IsInCombat(_ESI, 1);
    v9 = _ESI->members.super.process;
    form = 0;
    if ( v9 )
    {
      editorPackage = v9->editorPackage;
      if ( editorPackage )
      {
        target = editorPackage->members.target;
        if ( target )
          form = (int)sub_569E60(target).form;
      }
    }
    LOBYTE(v75[0].rot.data[0][1]) = sub_5E6CD0((TESObjectREFR *)_ESI, 0);
    v13 = _ESI->members.super.process;
    v14 = 3;
    v74 = 3;
    if ( v13 )
    {
      v74 = v13->GetProcessLevel(v13);
      sub_674550(3, v2, v3, v4, (int)_ESI, v74);
      v14 = v74;
    }
    __asm
    {
      fld     dword ptr [esi+20h]
      fcomp   qword ptr ds:0A3A5B0h
      fnstsw  ax
    }
    if ( __SETP__(HIBYTE(_AX) & 0x44, 0) )
    {
      __asm
      {
        fld     dword ptr [esi+2Ch]
        fld     dword ptr ds:0B3F9A8h
        fucompp
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 0x44, 0) )
        goto LABEL_19;
      __asm
      {
        fld     dword ptr [esi+30h]
        fld     dword ptr ds:0B3F9ACh
        fucompp
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 0x44, 0) )
        goto LABEL_19;
      __asm
      {
        fld     dword ptr [esi+34h]
        fld     dword ptr ds:0B3F9B0h
        fucompp
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 0x44, 0) )
      {
LABEL_19:
        if ( sub_45A500(SaveLoad_CurrentSavegame) || v14 < 2 || v14 > 3 )
        {
LABEL_21:
          sub_5EB370((TESObjectREFR *)_ESI);
LABEL_22:
          v19 = (HighProcess *)FormHeapAlloc(0x2ECu);
          v74 = (int)v19;
          v76 = 0;
          if ( v19 )
            v7 = HighProcess::HighProcess(v19);
          Copy = v7->Copy;
          LODWORD(v72.rot.data[2][0]) = _ESI->members.super.process;
          v76 = 0xFFFFFFFF;
          Copy(v7, (BaseProcess *)LODWORD(v72.rot.data[2][0]));
          v21 = _ESI->members.super.process;
          if ( v21 )
          {
            Destructor = v21->Destructor;
            LODWORD(v72.rot.data[1][2]) = 1;
            Destructor(v21);
          }
          _ESI->members.super.process = v7;
          if ( v7->GetIsAlerted(v7) )
          {
            v23 = _ESI->members.super.process;
            if ( v23 )
              v23->SetCombatMode(v23, 1);
          }
          sub_673A90((int)_ESI, 0, 0, 0, 0);
          sub_634CB0(v7, _ESI);
          v7->Unk_17(v7);
          ContainerChanges = ExtraDataList_GetContainerChanges(&_ESI->members.super.super.baseExtraList);
          if ( ContainerChanges )
          {
            if ( v14 != 1 )
            {
              v25 = _ESI->members.super.process->__vftable;
              v72.rot.data[1][0] = 0.0;
              EquippedInstance = (EntryData *)ContainerExtraData_GetEquippedInstance(
                                                (ExtraDataList *****)ContainerChanges,
                                                9,
                                                0);
              v25->SetEquippedWeaponData(_ESI->members.super.process, EquippedInstance);
              v27 = _ESI->members.super.process->__vftable;
              v28 = (EntryData *)ContainerExtraData_GetEquippedInstance((ExtraDataList *****)ContainerChanges, 0xC, 0);
              v27->setEquippedAmmoData(_ESI->members.super.process, v28);
              v29 = _ESI->members.super.process->__vftable;
              v30 = (EntryData *)ContainerExtraData_GetEquippedInstance((ExtraDataList *****)ContainerChanges, 0xD, 0);
              v29->SetEquippedShieldData(_ESI->members.super.process, v30);
              v31 = _ESI->members.super.process->__vftable;
              v32 = (EntryData *)ContainerExtraData_GetEquippedInstance((ExtraDataList *****)ContainerChanges, 0xE, 0);
              v31->SetEquippedLightData(_ESI->members.super.process, v32);
              ContainerChanges = (ExtraContainerChanges_Data *)ContainerExtraData_GetEquippedInstance(
                                                                 (ExtraDataList *****)ContainerChanges,
                                                                 9,
                                                                 0);
              v4 = sub_612A90(_ESI, (void **)&ContainerChanges->objList);
              __asm { fstp    [esp+0E0h+var_BC] }
              if ( ContainerChanges )
              {
                ContainerEntryExtraData_DestroyDataTable((unsigned int *)ContainerChanges, v33);
                FormHeapFree((unsigned int)ContainerChanges);
              }
              __asm { fld     [esp+0D8h+var_BC] }
              SetUnk0F8 = _ESI->members.super.process->SetUnk0F8;
              __asm { fstp    [esp+0DCh+var_DC] }
              ((void (__cdecl *)(_DWORD))SetUnk0F8)(LODWORD(v71.y));
              v35 = _ESI->members.super.process;
              GetEquippedLightData = v35->GetEquippedLightData;
              LODWORD(v71.x) = 1;
              ((void (__thiscall *)(LowProcess *))GetEquippedLightData)(v35);
              v14 = LODWORD(v72.rot.data[1][0]);
            }
          }
          _ESI->members.super.process->Unk_13(_ESI->members.super.process);
          sub_5E6E00(_ESI, (int)ContainerChanges, v3);
          if ( HIBYTE(v72.rot.data[0][2]) )
          {
            if ( !_ESI->vtbl->GetCombatController(_ESI) )
            {
              sub_5EAE70(_ESI, form, (int)ContainerChanges, SLODWORD(v71.x));
              v37 = _ESI->members.super.process->__vftable;
              v38 = (int *)_ESI->members.super.process;
              v39 = COERCE_FLOAT(((int (__thiscall *)(int *, int, int))v37->GetUnk01E)(v38, 1, 1));
              v40 = *v38;
              v70.x = v39;
              v69 = (*(int (__thiscall **)(int *))(v40 + 0x148))(v38);
              v68 = 0;
              ((void (__thiscall *)(LowProcess *, Actor *, int, _DWORD, _DWORD))v37->Unk_89)(
                _ESI->members.super.process,
                _ESI,
                form,
                0,
                LODWORD(v72.rot.data[1][2]));
              v14 = 0;
            }
          }
          niNode = (NiNode *)_ESI->members.super.super.niNode;
          GetBaseForm = _ESI->vtbl->super.super.GetBaseForm;
          LODWORD(v70.x) = niNode;
          v43 = 1;
          if ( GetBaseForm((TESObjectREFR *)_ESI)->member.type == kFormType_Creature )
          {
            if ( niNode )
              v43 = ((unsigned __int8 (__thiscall *)(Actor *))_ESI->vtbl->Unk_9E)(_ESI) != 0;
          }
          if ( LOBYTE(_ESI->members.unk0B4[3])
            || _ESI->vtbl->super.super.IsDead((TESObjectREFR *)_ESI, 0)
            && v43
            && !sub_41FFA0(&_ESI->members.super.super.baseExtraList)
            && !sub_4212C0(&_ESI->members.super.super.baseExtraList) )
          {
            Actor_HandleDeathSTate____(_ESI, 0);
            LOBYTE(_ESI->members.unk0B4[3]) = 1;
          }
          ((void (__thiscall *)(Actor *, _DWORD))_ESI->vtbl->super.super.Unk_5E)(_ESI, 0);
          if ( niNode )
          {
            if ( v14 == 1 )
            {
              if ( ((int (__thiscall *)(LowProcess *))_ESI->members.super.process->GetSitSleepState)(_ESI->members.super.process) )
              {
                if ( !_ESI->vtbl->GetMountedHorse(_ESI) )
                  sub_88CE30(niNode, 1, 1, 0);
              }
            }
          }
          if ( !LOBYTE(_ESI->members.unk0B4[3]) )
            goto LABEL_63;
          if ( !niNode )
          {
LABEL_65:
            HideEquipment((TESObjectREFR *)_ESI, v2, v3, v4, 0, 0);
            v51 = _ESI->members.super.process;
            if ( v51 )
            {
              v52 = (int)v51->GetCurrentPackage(_ESI->members.super.process);
              if ( v52 )
              {
                if ( *(_BYTE *)(v52 + 0x20) == 6 )
                  v51->SetCurrentPackProcedure(v51, kProcedure_TRAVEL);
              }
            }
            if ( !_ESI->vtbl->super.super.IsDead((TESObjectREFR *)_ESI, 0) && (v14 == 3 || v14 == 2) )
              sub_5EDA20((TESObjectREFR *)_ESI, 0);
            if ( v51 )
            {
              if ( v51->GetUnk020(v51) )
              {
                if ( v51->GetUnk02C(v51) )
                {
                  v53 = (int)v51->GetUnk02C(v51);
                  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v53 + 0x190))(v53) )
                  {
                    v54 = (Actor *)v51->GetUnk02C(v51);
                    if ( v54 )
                    {
                      if ( Actor::GetProcessLevel(v54) )
                      {
                        v55 = ((double (__thiscall *)(LowProcess *, _DWORD))v51->SetUnk020)(v51, 0);
                        sub_674550(v14, v2, v3, v55, (int)_ESI, 0);
                        v51->SetUnk020(v51, 1);
                      }
                    }
                  }
                }
              }
            }
            result = (int)_ESI->vtbl->super.super.GetNiNode((TESObjectREFR *)_ESI);
            if ( result )
            {
              v57 = (volatile LONG *)_ESI->vtbl->super.super.GetNiNode((TESObjectREFR *)_ESI);
              ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
              result = (int)ShadowSceneNodeAddShadowCaster(ShadowSceneNode, v57);
            }
            goto LABEL_82;
          }
          _ESI->vtbl->super.Unk_72((MobileObject *)_ESI);
          if ( !_ESI->vtbl->super.super.GetAnimData((TESObjectREFR *)_ESI)
            || (v44 = _ESI->vtbl->super.super.GetAnimData((TESObjectREFR *)_ESI), !sub_470D00(v44, 0x20)) )
          {
            if ( LOBYTE(_ESI->members.unk0B4[3]) )
            {
              Actor_HandleDeathSTate____(_ESI, 1u);
              _ESI->vtbl->super.GetZRotation((MobileObject *)_ESI);
              __asm { fstp    [esp+114h+var_114]; float }
              NiMatrix33_InitRotationTransform((float *)v75, v67);
              __asm
              {
                fldz
                fst     [esp+110h+var_E0]
              }
              __asm { fld1 }
              __asm { fstp    [esp+114h+var_DC] }
              __asm { fstp    [esp+118h+var_D8] }
              v50 = sub_7101F0(v75, &v72, &v71);
              __asm { fldz }
              v71.x = v50->rot.data[0][0];
              __asm { fstp    [esp+118h+var_118]; float }
              v71.y = v50->rot.data[0][1];
              v71.z = v50->rot.data[0][2];
              sub_8AB440((int)niNode, (int)&v71, 1, v62, 1);
            }
            goto LABEL_62;
          }
          __asm { fldz }
          __asm { fstp    [esp+114h+var_114]; float }
          v45 = _ESI->vtbl->super.super.GetAnimData((TESObjectREFR *)_ESI);
          sub_470FC0(v45, 5, v63);
          __asm { fldz }
          __asm { fstp    [esp+118h+var_118] }
          sub_474AB0((int)v45, v2, v3, v4, 0, 0x20, 0xFFFFFFFF, v58, 0xFFFFFFFF);
          _EBP = sub_4706E0(v45, 0);
          Actor_HandleDeathSTate____(_ESI, 2u);
          if ( _EBP )
          {
            if ( !((unsigned __int8 (__thiscall *)(Actor *))_ESI->vtbl->Unk_9E)(_ESI) )
            {
              __asm { fld     dword ptr [ebp+30h] }
              __asm { fstp    dword ptr [ebp+48h] }
              *(float *)&_EBP[9].data = _ET1;
              __asm
              {
                fld     dword ptr [ebp+30h]
                fstp    [esp+118h+var_114]; float
                fldz
                fstp    [esp+118h+var_118]; float
              }
              sub_476D10((AnimSequenceSingle *)v45, (int)v45, v2, v3, v4, (int)_ESI, v59, v64);
              sub_474510(v45, (TESObjectREFR *)_ESI);
              sub_5F5D10((PlayerCharacter *)_ESI, v2, v3, v4);
              v14 = v68;
              niNode = (NiNode *)v69;
LABEL_62:
              _ESI->members.super.process->Unk_08(_ESI->members.super.process);
              LOBYTE(_ESI->members.unk0B4[3]) = 0;
LABEL_63:
              if ( niNode )
                sub_5EE1B0(_ESI, v4);
              goto LABEL_65;
            }
            v4 = sub_51AE20((int)_EBP[0xD].data, 1u);
            __asm { fstp    [esp+118h+var_114]; float }
            __asm
            {
              fldz
              fstp    [esp+118h+var_118]; float
            }
            sub_476D10((AnimSequenceSingle *)v45, (int)v45, v2, v3, v4, (int)_ESI, v60, v65);
            sub_474510(v45, (TESObjectREFR *)_ESI);
            __asm { fld     dword ptr [esi+28h] }
            __asm { fstp    [esp+114h+var_114]; float }
            NiMatrix33_InitRotationTransform(v72.rot.data[2], v66);
            __asm
            {
              fldz
              fst     [esp+110h+var_EC]
            }
            __asm { fld1 }
            __asm { fstp    [esp+114h+var_E8] }
            __asm { fstp    [esp+118h+var_E4] }
            v48 = sub_7101F0((NiTransform *)v72.rot.data[2], (NiTransform *)v72.rot.data[1], &v70);
            __asm { fldz }
            v70.x = v48->rot.data[0][0];
            v70.y = v48->rot.data[0][1];
            __asm { fstp    [esp+118h+var_118]; float }
            v49 = (int)_ESI->members.super.super.niNode;
            v70.z = v48->rot.data[0][2];
            sub_8AB440(v49, (int)&v70, 1, v61, 0);
          }
          sub_5F5D10((PlayerCharacter *)_ESI, v2, v3, v4);
          v14 = v68;
          niNode = (NiNode *)v69;
          goto LABEL_62;
        }
      }
    }
    else
    {
      __asm { fldz }
      __asm { fstp    [esp+0B8h+var_B8]; float }
      sub_4D89D0(v72.rot.data[2][1]);
    }
    if ( sub_5EB400(_ESI, v3) )
      goto LABEL_22;
    goto LABEL_21;
  }
LABEL_82:
  LOBYTE(result) = 1;
  return result;
}
