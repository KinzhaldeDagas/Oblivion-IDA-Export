// Probable semantic identity: TESObjectDOOR::Activate. Direct Oblivion evidence: this function is the TESObjectDOOR vtable slot +0xCC target (TESFormVtbl member Unk_33), its typed parameters are TESObjectREFR* doorReference, TESObjectREFR* activatorReference, and UInt32 unk2; the body validates/links the door, checks actor access/locks, plays open/close behavior, and may select a random destination. Fallout independently labels the analogous method Activate and routes FindRandomTeleportTarget/HandlePlayerTeleport through it. Confidence remains Probable because the Oblivion shared slot itself is still named Unk_33.
bool __thiscall TESObjectDOOR_Activate(
        TESObjectDOOR *this,
        TESObjectREFR *doorReference,
        TESObjectREFR *activatorReference,
        UInt32 unk2)
{
  double v4; // st0
  double v5; // st1
  double v6; // st2
  double v7; // st3
  double v8; // st4
  double v9; // st5
  double v10; // st6
  double v11; // st7
  TeleportData *TeleportData; // ebp
  ExtraLockData *EffectiveDoorLock; // eax
  TESObjectREFR *v15; // eax
  const char *value; // ecx
  Actor *v18; // eax
  PlayerCharacter *v19; // edi
  TESObjectCELL *v20; // ebx
  ExtraLockData *v21; // ebp
  char v22; // bl
  ExtraDataList *DwordAtOffset40; // eax
  int v24; // eax
  ExtraDataList *v25; // eax
  int v26; // eax
  unsigned __int8 *key; // eax
  unsigned __int8 *v28; // eax
  int PlayerScaledLockLevel; // eax
  BSExtraData *v30; // eax
  BSExtraData *v31; // eax
  const char *v32; // eax
  int v33; // eax
  double v34; // st7
  int *sound; // ebx
  int *v36; // eax
  int *v37; // ebp
  float *v38; // eax
  BSExtraData *v39; // eax
  ActorAnimData *v40; // eax
  BSExtraData *v41; // eax
  PlayerCharacter *v42; // ecx
  int *v43; // ecx
  int *v44; // eax
  BSExtraData *v45; // eax
  NiNode *v46; // eax
  NiNode *v47; // eax
  NiNode *v48; // eax
  NiAVObject *ChildAtIndex; // eax
  NiControllerManager *v50; // eax
  NiControllerManager *v51; // edi
  NiControllerSequence *SequenceByName; // ebx
  NiControllerSequence *v53; // eax
  float *v54; // ebp
  char v55; // al
  int *v56; // ebp
  float *v57; // eax
  TESObjectCELL *v58; // ebp
  float *Head; // eax
  char *v60; // eax
  double v61; // st7
  _BYTE *v62; // eax
  float weight; // [esp+4h] [ebp-154h]
  float easeInTime; // [esp+8h] [ebp-150h]
  UInt32 v65; // [esp+Ch] [ebp-14Ch]
  float v66; // [esp+Ch] [ebp-14Ch]
  float duration; // [esp+10h] [ebp-148h]
  float durationa; // [esp+10h] [ebp-148h]
  TESObjectCELL **v69; // [esp+1Ch] [ebp-13Ch]
  float *v70; // [esp+24h] [ebp-134h]
  LowProcess *process; // [esp+28h] [ebp-130h]
  ExtraLockData *v72; // [esp+2Ch] [ebp-12Ch]
  TESForm *v73; // [esp+30h] [ebp-128h]
  TeleportData *v74; // [esp+34h] [ebp-124h]
  TESObjectREFR *v75; // [esp+44h] [ebp-114h]
  char v76[4]; // [esp+48h] [ebp-110h] BYREF
  Concurrency::details::SchedulerBase *v77; // [esp+4Ch] [ebp-10Ch]
  char v78[4]; // [esp+50h] [ebp-108h] BYREF
  char v79[256]; // [esp+54h] [ebp-104h] BYREF

  v77 = (Concurrency::details::SchedulerBase *)activatorReference; /*0x4b8a8e*/
  if ( !doorReference || (doorReference->member.super.flags & 0x2000) != 0 ) /*0x4b8aa0*/
    return 0; /*0x4b8aa0*/
  TeleportData = TESObjectREFR_GetTeleportData(doorReference); /*0x4b8aa9*/
  v73 = (TESForm *)TeleportData; /*0x4b8aad*/
  EffectiveDoorLock = TESObjectREFR_GetEffectiveDoorLock(doorReference); /*0x4b8ab1*/
  v72 = EffectiveDoorLock; /*0x4b8ab8*/
  if ( !TeleportData && !EffectiveDoorLock ) /*0x4b8ac0*/
    goto LABEL_161; /*0x4b8ac0*/
  if ( activatorReference /*0x4b8ae0*/
    && activatorReference->vtbl->IsActor(activatorReference)
    && ((int (__thiscall *)(TESObjectREFR *))activatorReference->vtbl[2].super.Unk_0C)(activatorReference) )
  {
    return 0; /*0x4b8ae4*/
  }
  if ( !TeleportData ) /*0x4b8ae8*/
  {
LABEL_161:
    if ( this->super.randomTeleport.next || this->super.randomTeleport.space ) /*0x4b8af0*/
    {
      v15 = (TESObjectREFR *)DoorTeleport_SelectRandomDestinationDoor( /*0x4b8afa*/
                               (int)this,
                               v9,
                               v10,
                               v11,
                               doorReference,
                               activatorReference);
      if ( !v15 ) /*0x4b8b01*/
      {
        value = stru_B35B34.value; /*0x4b8b0a*/
        duration = kTerrainLODQuadRayDirectionZ; /*0x4b8b10*/
        v65 = 0; /*0x4b8b13*/
LABEL_13:
        GameUI_QueueMessage(value, 0, v65, duration); /*0x4b8b15*/
        return 0; /*0x4b8b38*/
      }
      LinkDoors(doorReference, v15); /*0x4b8b3d*/
      v73 = (TESForm *)TESObjectREFR_GetTeleportData(doorReference); /*0x4b8b4e*/
      if ( !v73 ) /*0x4b8b52*/
        return 0; /*0x4b8b52*/
    }
  }
  v18 = (Actor *)OblivionDynamicCast( /*0x4b8b63*/
                   activatorReference,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
  v19 = (PlayerCharacter *)v18; /*0x4b8b68*/
  if ( v18 ) /*0x4b8b71*/
    process = v18->members.super.process; /*0x4b8b76*/
  else
    process = 0; /*0x4b8b7c*/
  if ( !v18 ) /*0x4b8b82*/
    goto LABEL_107; /*0x4b8b82*/
  if ( !Actor::CanUSeDoor_(v18) /*0x4b8bb0*/
    || v19->super.super.super.process->GetFurniture(v19->super.super.super.process)
    && v19->vtbl->super.super.super.GetSleepState((TESObjectREFR *)v19) )
  {
    return 0; /*0x4b8bb4*/
  }
  if ( v19 == reference ) /*0x4b8bc1*/
    reference->unk110 = 0; /*0x4b8bc3*/
  HIBYTE(v70) = 0; /*0x4b8bcb*/
  v74 = TESObjectREFR_GetTeleportData(doorReference); /*0x4b8bd6*/
  v20 = 0; /*0x4b8bda*/
  v21 = TESObjectREFR_GetEffectiveDoorLock(doorReference); /*0x4b8be1*/
  if ( !v21 ) /*0x4b8be5*/
  {
    v22 = 1; /*0x4b8be7*/
    goto LABEL_56; /*0x4b8be9*/
  }
  if ( v74 ) /*0x4b8bf2*/
  {
    v20 = sub_42B460(&v74->linkedDoor); /*0x4b8c03*/
    if ( v19 != reference ) /*0x4b8c05*/
    {
      if ( Shared_GetDwordAtOffset40(v19) ) /*0x4b8c09*/
      {
        DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(v19); /*0x4b8c14*/
        TESObjectCELL_GetOwner(DwordAtOffset40); /*0x4b8c1b*/
        if ( v24 ) /*0x4b8c22*/
        {
          v25 = (ExtraDataList *)Shared_GetDwordAtOffset40(v19); /*0x4b8c27*/
          if ( sub_4CAAC0(v25, (Actor *)v19) ) /*0x4b8c2e*/
          {
            if ( v20 ) /*0x4b8c39*/
            {
              TESObjectCELL_GetOwner((ExtraDataList *)v20); /*0x4b8c3d*/
              if ( v26 ) /*0x4b8c44*/
              {
                if ( !sub_4CAAC0((ExtraDataList *)v20, (Actor *)v19) ) /*0x4b8c50*/
                  goto LABEL_55; /*0x4b8c50*/
              }
            }
            goto LABEL_35; /*0x4b8c50*/
          }
        }
      }
    }
  }
  if ( TESOBjectREFR_IsOwnedBy(doorReference, (TESObjectREFR *)v19, 1) ) /*0x4b8c65*/
  {
    if ( v19 == reference ) /*0x4b8c76*/
    {
      key = (unsigned __int8 *)v21->key; /*0x4b8c78*/
      if ( key ) /*0x4b8c7d*/
      {
        if ( sub_5E4A00((int)reference, key, 0, 1, 0, (signed int *)v78) ) /*0x4b8c8b*/
        {
          HIBYTE(v70) = 0; /*0x4b8c94*/
          goto LABEL_55; /*0x4b8c99*/
        }
      }
    }
LABEL_35:
    HIBYTE(v70) = 1; /*0x4b8c56*/
LABEL_55:
    v22 = HIBYTE(v70); /*0x4b8d3e*/
    goto LABEL_56; /*0x4b8d3e*/
  }
  if ( Actor_IsGuardClass((Actor *)v19) && sub_5E6BA0((Actor *)v19) ) /*0x4b8cab*/
  {
    HIBYTE(v70) = 1; /*0x4b8cb4*/
    goto LABEL_55; /*0x4b8cb9*/
  }
  if ( v19 == reference && reference->vtbl->super.IsTresspassing((Actor *)reference) ) /*0x4b8cd0*/
  {
    if ( !v74 || v21->level == 0x64 ) /*0x4b8ce1*/
      goto LABEL_55; /*0x4b8ce1*/
    if ( v20 && TESObjectCELL_IsInterior(v20) ) /*0x4b8ced*/
    {
      if ( sub_4C9830(v20) ) /*0x4b8cfc*/
        HIBYTE(v70) = 1; /*0x4b8d05*/
      goto LABEL_55; /*0x4b8d0a*/
    }
    goto LABEL_35; /*0x4b8cf4*/
  }
  if ( !sub_5E3220(v19) ) /*0x4b8d0e*/
    goto LABEL_55; /*0x4b8d0e*/
  if ( (PlayerCharacter *)v19->super.super.super.process->GetUnk02C(v19->super.super.super.process) != reference ) /*0x4b8d2a*/
    goto LABEL_55; /*0x4b8d2a*/
  v22 = 1; /*0x4b8d3a*/
  if ( !v19->vtbl->super.IsTresspassing((Actor *)v19) ) /*0x4b8d36*/
    goto LABEL_55; /*0x4b8d3c*/
LABEL_56:
  if ( v72 && ExtraLockData_IsLocked(v72) && !v22 ) /*0x4b8d5f*/
  {
    LOBYTE(v20) = sub_5E4A00((int)v19, (unsigned __int8 *)MEMORY[0xB35EC8], 0, 1, 0, (signed int *)v76); /*0x4b8d7e*/
    if ( !(_BYTE)v20 ) /*0x4b8d82*/
      LOBYTE(v20) = sub_5E4A00((int)v19, (unsigned __int8 *)MEMORY[0xB35ECC], 0, 1, 0, (signed int *)v76); /*0x4b8d9c*/
    v28 = (unsigned __int8 *)v72->key; /*0x4b8d9e*/
    if ( v28 ) /*0x4b8da3*/
    {
      if ( unk_B35B20 || sub_5E4A00((int)v19, v28, 0, 1, 0, (signed int *)v76) ) /*0x4b8dc4*/
      {
        if ( v19 != reference ) /*0x4b8e63*/
          goto LABEL_107; /*0x4b8e63*/
        if ( !unk_B35B20 ) /*0x4b8e69*/
        {
          unk_B35B20 = (int)doorReference; /*0x4b8e78*/
          v31 = sub_4D77D0((BSExtraDataVtbl *)doorReference); /*0x4b8e7e*/
          if ( v31 ) /*0x4b8e85*/
          {
            sub_428E90(v31); /*0x4b8e89*/
            sub_4D9070(doorReference); /*0x4b8e90*/
          }
          v32 = *((const char **)v72->key + 0xA); /*0x4b8e9d*/
          if ( !v32 ) /*0x4b8ea2*/
            v32 = EmptyString; /*0x4b8ea4*/
          _sprintf(v79, "%s%s.", stru_B386A0.value, v32); /*0x4b8ebb*/
          ShowUIMessageBox( /*0x4b8ed5*/
            (char *)MEMORY[0xB38CF0].value,
            v9,
            v10,
            v11,
            v79,
            (int)sub_4B6D20,
            1,
            (char *)MEMORY[0xB38CF0].value,
            0);
          return 0; /*0x4b8edd*/
        }
        goto LABEL_103; /*0x4b8e70*/
      }
      if ( !(_BYTE)v20 ) /*0x4b8dd3*/
      {
        if ( v19 == reference ) /*0x4b8ddb*/
        {
          PlayerScaledLockLevel = ExtraLockData_GetPlayerScaledLockLevel(v72); /*0x4b8de3*/
          durationa = fConstant_2; /*0x4b8df2*/
          if ( PlayerScaledLockLevel < 0x64 ) /*0x4b8df9*/
            GameUI_QueueMessage(stru_B38698.value, 0, 1u, durationa); /*0x4b8e0d*/
          else
            GameUI_QueueMessage(stru_B38690.value, 0, 1u, durationa); /*0x4b8e02*/
        }
        return 0; /*0x4b8e02*/
      }
      if ( v19 == reference ) /*0x4b8e18*/
      {
        v30 = sub_4D77D0((BSExtraDataVtbl *)doorReference); /*0x4b8e20*/
        if ( v30 && ExtraLockData_GetPlayerScaledLockLevel((ExtraLockData *)v30[1].vtbl) >= 0x64 ) /*0x4b8e34*/
        {
          value = stru_B38690.value; /*0x4b8e3d*/
          duration = fConstant_2; /*0x4b8e43*/
          v65 = 1; /*0x4b8e46*/
          goto LABEL_13; /*0x4b8e4a*/
        }
LABEL_73:
        sub_57B6A0((int)v20, (char)v72, (int)v19, (int)doorReference, v9, v10, v11, doorReference); /*0x4b8e4f*/
        return 0; /*0x4b8e58*/
      }
    }
    else
    {
      if ( !(_BYTE)v20 ) /*0x4b8ee4*/
      {
        if ( v19 == reference ) /*0x4b8ef0*/
        {
          v33 = ExtraLockData_GetPlayerScaledLockLevel(v72); /*0x4b8ef4*/
          v34 = kTerrainLODQuadRayDirectionZ; /*0x4b8ef9*/
          easeInTime = kTerrainLODQuadRayDirectionZ; /*0x4b8f07*/
          if ( v33 < 0x64 ) /*0x4b8f0a*/
            QueueUIMessage((char)v72, v34, v10, stru_B386A8.value, easeInTime, 0, 0); /*0x4b8f1b*/
          else
            QueueUIMessage((char)v72, v34, v10, stru_B38690.value, easeInTime, 0, 0); /*0x4b8f12*/
        }
        sound = (int *)MEMORY[0xB33398]->sound; /*0x4b8f29*/
        if ( !sound ) /*0x4b8f2e*/
          return 0; /*0x4b8f2e*/
        if ( v19 == reference ) /*0x4b8f3a*/
        {
          v36 = PlaySound___(sound, "DRSLocked", 0x121, 1); /*0x4b8f43*/
        }
        else
        {
          if ( Actor::GetProcessLevel((Actor *)v19) ) /*0x4b8f47*/
            return 0; /*0x4b8f4e*/
          v36 = PlaySound___(sound, "DRSLocked", 0x102, 1); /*0x4b8f62*/
        }
        v37 = v36; /*0x4b8f67*/
        if ( v36 ) /*0x4b8f6b*/
        {
          if ( v19 != reference ) /*0x4b8f77*/
          {
            v38 = doorReference->vtbl->GetPos(doorReference); /*0x4b8f83*/
            sub_6B7360(v37, *v38, v38[1], v38[2]); /*0x4b8fb5*/
          }
          sub_6B7190(v37, 0); /*0x4b8fbe*/
          sub_6B73E0(v37); /*0x4b8fc5*/
          FormHeapFree((unsigned int)v37); /*0x4b8fcb*/
        }
        return 0; /*0x4b8fd3*/
      }
      if ( v19 == reference ) /*0x4b8fde*/
      {
        v39 = sub_4D77D0((BSExtraDataVtbl *)doorReference); /*0x4b8fe2*/
        if ( v39 && ExtraLockData_GetPlayerScaledLockLevel((ExtraLockData *)v39[1].vtbl) >= 0x64 ) /*0x4b8ffa*/
        {
          GameUI_QueueMessage(stru_B38690.value, 0, 1u, fConstant_2); /*0x4b9015*/
          sub_57DE50(0x13); /*0x4b901c*/
          return 0; /*0x4b9024*/
        }
        goto LABEL_73; /*0x4b8ffa*/
      }
    }
    v40 = v19->vtbl->super.super.super.GetAnimData((TESObjectREFR *)v19); /*0x4b9033*/
    if ( v40 ) /*0x4b9037*/
      ActorAnimData_CleanupOrPromoteQueuedIdles(v40, 1, 0); /*0x4b903f*/
    sub_520F00(MEMORY[0xB35EC8]); /*0x4b904b*/
    sub_520F40(1); /*0x4b9052*/
    sub_520F20(1); /*0x4b9059*/
    process->Unk_12(process, (UInt32)v19); /*0x4b906b*/
    sub_520F00(0); /*0x4b906f*/
    sub_520F40(0); /*0x4b9076*/
    sub_520F20(0xFFFFFFFF); /*0x4b907d*/
    v41 = sub_4D77D0((BSExtraDataVtbl *)doorReference); /*0x4b9087*/
    if ( v41 ) /*0x4b908e*/
    {
      sub_428E90(v41); /*0x4b9092*/
      sub_4D9070(doorReference); /*0x4b9099*/
    }
  }
LABEL_103:
  if ( reference == v19 && PlayerCharacter::IsJailed(reference) ) /*0x4b90a8*/
  {
    v42 = reference; /*0x4b90b6*/
    if ( !v72 ) /*0x4b90bc*/
    {
      if ( !v42->isInSEWorld ) /*0x4b9189*/
      {
        sub_65D670((int)v42, (int)v19, v9, v10, v11, 1); /*0x4b9194*/
        v66 = (float)(int)stru_B36768.value; /*0x4b91ae*/
        ((void (__stdcall *)(_DWORD))reference->vtbl->super.Unk_95)(LODWORD(v66)); /*0x4b91b1*/
      }
LABEL_119:
      v45 = sub_4D77D0((BSExtraDataVtbl *)doorReference); /*0x4b91b3*/
      if ( v45 ) /*0x4b91bc*/
      {
        sub_428E90(v45); /*0x4b91c0*/
        sub_4D9070(doorReference); /*0x4b91c7*/
      }
      if ( doorReference->vtbl->GetNiNode(doorReference) /*0x4b9212*/
        && (v46 = doorReference->vtbl->GetNiNode(doorReference), NiNode_GetChildAtIndex(v46, 0))
        && (v47 = doorReference->vtbl->GetNiNode(doorReference),
            NiNode_GetChildAtIndex(v47, 0)->members.super.m_controller) )
      {
        v48 = doorReference->vtbl->GetNiNode(doorReference); /*0x4b9228*/
        ChildAtIndex = NiNode_GetChildAtIndex(v48, 0); /*0x4b922c*/
        v50 = (NiControllerManager *)NiRTTI_Cast( /*0x4b923a*/
                                       (BSStringT *)&stru_B3CAC0,
                                       (NiObject *)ChildAtIndex->members.super.m_controller);
        v51 = v50; /*0x4b923f*/
        if ( v50 ) /*0x4b9246*/
        {
          SequenceByName = NiControllerManager_FindSequenceByName(v50, "Open"); /*0x4b925f*/
          v53 = NiControllerManager_FindSequenceByName(v51, "Close"); /*0x4b9261*/
          v54 = (float *)v53; /*0x4b9268*/
          if ( SequenceByName ) /*0x4b926a*/
          {
            if ( v53 && *((_DWORD *)SequenceByName + 0x11) != 1 && *((_DWORD *)v53 + 0x11) != 1 ) /*0x4b9289*/
            {
              sub_4D8260((int)doorReference, 4); /*0x4b9293*/
              if ( v55 ) /*0x4b929e*/
              {
                TESObjectREFR_ClearActionFlagBits(doorReference, 4u); /*0x4b9486*/
              }
              else
              {
                v54 = (float *)SequenceByName; /*0x4b92a4*/
                TESObjectREFR_SetActionFlagBits(doorReference, 4u); /*0x4b92a6*/
              }
              *((_WORD *)v51 + 4) |= 8u; /*0x4b948d*/
              BSAnimGroupSequence_Activate((BSAnimGroupSequence *)v54, 0, 0, 1.0, 0.0, 0); /*0x4b94a7*/
              v54[0x12] = -flt_A7DEB4; /*0x4b94b6*/
              return 1; /*0x4b94b9*/
            }
          }
        }
      }
      else
      {
        if ( (unsigned int)(sub_4DE660((char *)doorReference) - 1) <= 1 ) /*0x4b94cf*/
        {
          TESObjectREFR_ClearActionFlagBits(doorReference, 4u); /*0x4b94d1*/
          return 1; /*0x4b94d8*/
        }
        TESObjectREFR_SetActionFlagBits(doorReference, 4u); /*0x4b94dd*/
      }
      return 1; /*0x4b94e2*/
    }
    v42->JailedState = 0; /*0x4b90c2*/
    sub_65D670((int)reference, (int)v19, v9, v10, v11, 0); /*0x4b90d4*/
    LOBYTE(reference->unk200) = 0; /*0x4b90df*/
  }
LABEL_107:
  if ( !v72 || !v19 ) /*0x4b90f4*/
    goto LABEL_119; /*0x4b90f4*/
  if ( !PlayerCharacter::IsSleeping_(reference) /*0x4b9133*/
    && !(*(int (**)(void))(*(_DWORD *)v70 + 8))()
    && (*(int (**)(void))(*(_DWORD *)v70 + 0x47C))() != 4 )
  {
    if ( LODWORD(v74[3].x) ) /*0x4b913d*/
    {
      if ( doorReference->vtbl->GetNiNode(doorReference) ) /*0x4b9151*/
      {
        v43 = (int *)MEMORY[0xB33398]->sound; /*0x4b9160*/
        if ( v43 ) /*0x4b9165*/
        {
          if ( v19 == reference ) /*0x4b9173*/
            v44 = OSGLobals_PlaySound(v43, *(void **)(LODWORD(v74[3].x) + 0xC), 0x121, 0); /*0x4b9184*/
          else
            v44 = OSGLobals_PlaySound(v43, *(void **)(LODWORD(v74[3].x) + 0xC), 0x102, 0); /*0x4b92bc*/
          v56 = v44; /*0x4b92c1*/
          if ( v44 ) /*0x4b92c5*/
          {
            if ( v19 != reference ) /*0x4b92cd*/
            {
              v57 = doorReference->vtbl->GetPos(doorReference); /*0x4b92d9*/
              sub_6B7360(v56, *v57, v57[1], v57[2]); /*0x4b930b*/
            }
            sub_6B7190(v56, 0); /*0x4b9314*/
            sub_6B73E0(v56); /*0x4b931b*/
            FormHeapFree((unsigned int)v56); /*0x4b9321*/
          }
        }
      }
    }
    sub_633080((int)v70, v10, (Actor *)v19, (int)doorReference, 1); /*0x4b9331*/
    return 0; /*0x4b9336*/
  }
  if ( (*(int (**)(void))(*(_DWORD *)v70 + 8))() <= 1 ) /*0x4b9348*/
  {
    v11 = 0.0; /*0x4b934a*/
    v70[0x2F] = 0.0; /*0x4b934c*/
  }
  v58 = sub_42B460((TESObjectREFR **)v72); /*0x4b935b*/
  sub_42B470((TESObjectREFR **)v72); /*0x4b935d*/
  if ( (LOBYTE(v74[3].xRot) & 1) != 0 ) /*0x4b936e*/
  {
    if ( sub_4D8E40(v19) ) /*0x4b9372*/
    {
      if ( sub_4D8E40(v19) != (BSExtraDataVtbl *)doorReference ) /*0x4b9384*/
        sub_4D8E60((int *)v19, 0); /*0x4b938a*/
    }
    else
    {
      sub_4D8E60((int *)v19, (BSExtraDataVtbl *)doorReference); /*0x4b938d*/
    }
  }
  v19->super.super.super.process->Unk_35(v19->super.super.super.process, (UInt32)doorReference); /*0x4b939e*/
  if ( v19 == reference ) /*0x4b93a7*/
  {
    reference->lastActivatedLoadDoor = doorReference; /*0x4b93a9*/
    reference->isMovingToNewSpace = 1; /*0x4b93b5*/
    sub_663F00(); /*0x4b93c2*/
    TESObjectDOOR_TransitionPlayerThroughLinkedDoor(v73, v4, v7, v8, v9, v10, v11, v5, v6, doorReference); /*0x4b93cc*/
    reference->isMovingToNewSpace = 0; /*0x4b93d7*/
    return 1; /*0x4b93de*/
  }
  else
  {
    Head = (float *)EmbeddedList_GetHead((char *)v72); /*0x4b93e7*/
    TESObjectREFR_SetPosition(v75, *Head, Head[1], Head[2]); /*0x4b9407*/
    if ( v58 && TESObjectCELL_IsProcessLevel_LowHigh(v58, 0) ) /*0x4b9419*/
    {
      v60 = sub_42B430((char *)v72); /*0x4b9424*/
      TESObjectREFR_SetRotationZ(v75, *((float *)v60 + 2)); /*0x4b9432*/
      v61 = 0.0; /*0x4b9437*/
    }
    else
    {
      v61 = flt_A32048; /*0x4b943b*/
    }
    weight = v61; /*0x4b9444*/
    TESObjectREFR_SetRotationX(v75, weight); /*0x4b9447*/
    v62 = OblivionDynamicCast( /*0x4b945b*/
            v75,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
            &Actor `RTTI Type Descriptor',
            0);
    if ( v62 ) /*0x4b9465*/
      sub_5E1360(v62, 0); /*0x4b946b*/
    sub_4DD4B0((int)v72, v9, v10, v61, (Actor *)v75, v58, v69); /*0x4b9477*/
    return 1; /*0x4b947f*/
  }
}
