// Verified tier-transition identity: MobileObject load dispatch for saved level1 calls this slot; body allocates 0x18c matching process constructor, copies/replaces current process, and registers level1. Success exit sets AL=1; no stack arguments (RET0 and no-argument loader call). Probable Fallout Moveto* lineage; internal animation/combat scheduling side effects not fully decoded in this pass.
bool __thiscall Actor_MoveToMiddleHigh(Actor *self)
{
  int editorPackage; // edi
  double v2; // st5
  double v3; // st6
  #239 *process; // ecx
  #239 *v6; // ecx
  BSShaderAccumulator *Global; // eax
  LowProcess *v8; // ecx
  int v9; // ebp
  LowProcess *v10; // ecx
  int v11; // eax
  TESPackage *v12; // eax
  TESPackage *v13; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  int v15; // ebp
  double v16; // st7
  LowProcess *v17; // ecx
  char v18; // bl
  MiddleHighProcess *v19; // eax
  MiddleHighProcess *v20; // edi
  void (__thiscall *Copy)(BaseProcess *__hidden, BaseProcess *); // edx
  #239 *v22; // ecx
  LowProcess *v23; // ecx
  NiNode *v24; // edi
  ExtraContainerChanges_Data *ContainerChanges; // edi
  UInt32 (__thiscall **p_SetEquippedWeaponData)(BaseProcess *__hidden, EntryData *); // ebp
  _DWORD *EquippedInstance; // eax
  UInt32 (__thiscall **p_setEquippedAmmoData)(BaseProcess *__hidden, EntryData *); // ebp
  EntryData *v29; // eax
  UInt32 (__thiscall **p_SetEquippedShieldData)(BaseProcess *__hidden, EntryData *); // ebp
  EntryData *v31; // eax
  UInt32 (__thiscall **p_SetEquippedLightData)(BaseProcess *__hidden, EntryData *); // ebp
  EntryData *v33; // eax
  int v34; // edx
  void (__thiscall **p_SetCurHour)(BaseProcess *__hidden, float); // edi
  Actor *v36; // eax
  void (__thiscall **v37)(BaseProcess *__hidden, float); // edi
  double v38; // st7
  float *v39; // eax
  float *v40; // eax
  void (__thiscall **v41)(BaseProcess *__hidden, float); // edi
  int ProcessLevel; // eax
  void (__thiscall *Unk_D7)(Actor *); // edx
  TESObjectREFR *v44; // edi
  TESObjectCELL *v45; // eax
  float *v47; // [esp+8Ch] [ebp-4Ch]
  float a3; // [esp+90h] [ebp-48h]
  float *v49; // [esp+94h] [ebp-44h]
  float a5; // [esp+98h] [ebp-40h]
  LowProcess *v51; // [esp+A0h] [ebp-38h]
  float *v52; // [esp+A0h] [ebp-38h]
  TESObjectREFR *v53; // [esp+A0h] [ebp-38h]
  int v54; // [esp+A4h] [ebp-34h]
  int v55; // [esp+B8h] [ebp-20h]
  float v56; // [esp+B8h] [ebp-20h]
  float v57; // [esp+BCh] [ebp-1Ch]
  float v58; // [esp+BCh] [ebp-1Ch]
  float v59; // [esp+BCh] [ebp-1Ch]
  float v60; // [esp+BCh] [ebp-1Ch]
  float v61[3]; // [esp+C0h] [ebp-18h] BYREF
  unsigned int v62; // [esp+D4h] [ebp-4h]

  sub_674850(&qword_B3BB2C[0x75], self); /*0x5f1b7f*/
  process = (#239 *)self->members.super.process; /*0x5f1b84*/
  if ( !process || (*(UInt32 (__thiscall **)(#239 *))(*(_DWORD *)process + 8))(process) != 1 ) /*0x5f1b95*/
  {
    v6 = (#239 *)self->members.super.process; /*0x5f1b9b*/
    if ( v6 ) /*0x5f1ba0*/
    {
      if ( !(*(UInt32 (__thiscall **)(#239 *))(*(_DWORD *)v6 + 8))(v6) ) /*0x5f1ba7*/
      {
        Global = BSShaderAccumulator_GetOrCreateGlobal(); /*0x5f1bad*/
        if ( Global ) /*0x5f1bb4*/
          sub_7AD1E0(Global, self->members.super.super.super.refID); /*0x5f1bbc*/
      }
    }
    v8 = self->members.super.process; /*0x5f1bc1*/
    if ( v8 ) /*0x5f1bc8*/
    {
      editorPackage = (int)v8->editorPackage; /*0x5f1bca*/
      if ( editorPackage ) /*0x5f1bcf*/
      {
        v9 = *(_DWORD *)(editorPackage + 0x18); /*0x5f1bd9*/
        if ( *(_DWORD *)(*(_DWORD *)(4 * v9 + 0xB152B0) + 4 * v8->GetCurrentPackProcedure(v8)) == 0x2B /*0x5f1c18*/
          && (PlayerCharacter *)self->members.super.process->GetUnk02C(self->members.super.process) == reference
          || *(_BYTE *)(editorPackage + 0x20) == 0x12
          && (PlayerCharacter *)self->members.super.process->GetUnk02C(self->members.super.process) != reference )
        {
          sub_5EAE70(self, 0x12, editorPackage, v54); /*0x5f1c1c*/
        }
      }
    }
    v10 = self->members.super.process; /*0x5f1c21*/
    if ( v10 ) /*0x5f1c26*/
    {
      v11 = (int)v10->GetCurrentPackage(v10); /*0x5f1c30*/
      if ( v11 ) /*0x5f1c34*/
      {
        if ( *(_BYTE *)(v11 + 0x20) == 0x12 ) /*0x5f1c39*/
        {
          if ( ((unsigned __int8 (__thiscall *)(LowProcess *))self->members.super.process->Unk_72)(self->members.super.process) ) /*0x5f1c46*/
            sub_5EAE70(self, 0x12, editorPackage, v54); /*0x5f1c4e*/
        }
      }
    }
    v12 = (TESPackage *)((int (__thiscall *)(LowProcess *))self->members.super.process->Unk_5C)(self->members.super.process); /*0x5f1c5e*/
    if ( v12 ) /*0x5f1c62*/
    {
      if ( TESPackage_IsRuntimePackage(v12) ) /*0x5f1c66*/
      {
        v13 = self->members.super.process->editorPackage; /*0x5f1c72*/
        if ( v13 ) /*0x5f1c77*/
        {
          if ( v13->members.type != kPackageType_Alarm /*0x5f1c8e*/
            && (v13->members.packageFlags & 0x200) != 0
            && (v13->members.packageFlags & 1) != 0 )
          {
            if ( Shared_GetDwordAtOffset40(self) ) /*0x5f1c92*/
            {
              DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(self); /*0x5f1c9e*/
              if ( TESObjectCELL_IsOwnedByActor(DwordAtOffset40, self) ) /*0x5f1ca5*/
                sub_5EAE70(self, 0x12, editorPackage, v54); /*0x5f1cb0*/
            }
          }
        }
      }
    }
    v15 = self->members.super.process->GetProcessLevel(self->members.super.process); /*0x5f1cbf*/
    v55 = v15; /*0x5f1ccb*/
    if ( self->vtbl->super.IsDead((MobileObject *)self) ) /*0x5f1ccf*/
    {
      sub_5E9E70((TESObjectREFR *)self); /*0x5f1cd7*/
      v16 = ((double (__thiscall *)(LowProcess *, Actor *))self->members.super.process->Unk_8E)( /*0x5f1ce8*/
              self->members.super.process,
              self);
      RunScripts((TESObjectREFR *)self, v2, v3, v16); /*0x5f1cec*/
    }
    else if ( self->vtbl->super.super.IsDead((TESObjectREFR *)self, 0) /*0x5f1d0b*/
           && !self->members.super.process->GetProcessLevel(self->members.super.process) )
    {
      ((void (__thiscall *)(Actor *, int))self->vtbl->super.super.super.Unk_27)(self, 1); /*0x5f1d1d*/
    }
    while ( !self->vtbl->GetMountedHorse(self) ) /*0x5f1d29*/
    {
      if ( self->vtbl->super.super.GetSleepState((TESObjectREFR *)self) == kSitSleep_None ) /*0x5f1d3a*/
        break; /*0x5f1d3e*/
      if ( self->vtbl->super.super.GetSleepState((TESObjectREFR *)self) == kSitSleep_Sitting ) /*0x5f1d4f*/
        break; /*0x5f1d4f*/
      if ( self->vtbl->super.super.GetSleepState((TESObjectREFR *)self) == kSitSleep_Sleeping ) /*0x5f1d60*/
        break; /*0x5f1d60*/
      if ( !self->members.super.process->GetFurniture(self->members.super.process) ) /*0x5f1d6d*/
        break; /*0x5f1d71*/
      ((void (__thiscall *)(LowProcess *, Actor *))self->members.super.process->Unk_6B)( /*0x5f1d7f*/
        self->members.super.process,
        self);
    }
    if ( !self->vtbl->GetMountedHorse(self) ) /*0x5f1d9b*/
    {
      if ( self->vtbl->super.super.GetSleepState((TESObjectREFR *)self) ) /*0x5f1dab*/
      {
        if ( self->vtbl->super.super.GetSleepState((TESObjectREFR *)self) != kSitSleep_Sitting /*0x5f1dde*/
          && self->vtbl->super.super.GetSleepState((TESObjectREFR *)self) != kSitSleep_Sleeping
          && !self->members.super.process->GetFurniture(self->members.super.process) )
        {
          ((void (__stdcall *)(#239 *, UInt32, UInt32, UInt32))self->members.super.process->SetSleepState)( /*0x5f1df6*/
            (#239 *)self,
            0,
            0,
            0x7Fu);
        }
      }
    }
    if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] && !sub_45A500(g_TESSaveLoadGame) ) /*0x5f1e0c*/
      sub_6765A0((int)&qword_B3BB2C[0x75], (int)self); /*0x5f1e1b*/
    sub_674550((int)self, v15); /*0x5f1e27*/
    if ( self->members.DeadState == 6 ) /*0x5f1e33*/
    {
      Actor_HandleDeathState(self, 0); /*0x5f1e39*/
      ((void (__stdcall *)(_DWORD))self->members.super.process->SetUnk088)(0.0); /*0x5f1e4f*/
    }
    v17 = self->members.super.process; /*0x5f1e51*/
    if ( v17 ) /*0x5f1e56*/
      v18 = ((int (__thiscall *)(LowProcess *))v17->GetUnk25C)(v17); /*0x5f1e62*/
    else
      v18 = 0; /*0x5f1e66*/
    v19 = (MiddleHighProcess *)FormHeapAlloc(0x18Cu); /*0x5f1e6d*/
    v62 = 0; /*0x5f1e7b*/
    if ( v19 ) /*0x5f1e83*/
      v20 = MiddleHighProcess::MiddleHighProcess(v19); /*0x5f1e8c*/
    else
      v20 = 0; /*0x5f1e90*/
    Copy = v20->Copy; /*0x5f1e97*/
    v51 = self->members.super.process; /*0x5f1e9a*/
    v62 = 0xFFFFFFFF; /*0x5f1e9d*/
    Copy(v20, v51); /*0x5f1ea5*/
    v22 = (#239 *)self->members.super.process; /*0x5f1ea7*/
    if ( v22 ) /*0x5f1eac*/
      (**(void (__thiscall ***)(#239 *, UInt8))v22)(v22, 1u); /*0x5f1eb4*/
    self->members.super.process = v20; /*0x5f1eb6*/
    if ( v20->GetIsAlerted(v20) ) /*0x5f1ec3*/
    {
      v23 = self->members.super.process; /*0x5f1ec9*/
      if ( v23 ) /*0x5f1ece*/
        v23->SetCombatMode(v23, 1); /*0x5f1eda*/
    }
    v24 = self->vtbl->super.super.GetNiNode(self); /*0x5f1ee8*/
    if ( v24 ) /*0x5f1eec*/
    {
      if ( v15 == 1 ) /*0x5f1ef1*/
      {
        if ( ((int (__thiscall *)(LowProcess *))self->members.super.process->GetSitSleepState)(self->members.super.process) ) /*0x5f1efe*/
        {
          if ( !self->vtbl->GetMountedHorse(self) ) /*0x5f1f0e*/
            sub_88CE30(v24, 0, 1, 0); /*0x5f1f18*/
        }
      }
    }
    ActorProcessManager_AddMobileObject((ActorProcessManager *)&qword_B3BB2C[0x75], (MobileObject *)self, 1, 1, 0, 0); /*0x5f1f2e*/
    ContainerChanges = ExtraDataList_GetContainerChanges(&self->members.super.super.baseExtraList); /*0x5f1f3b*/
    if ( ContainerChanges ) /*0x5f1f3f*/
    {
      if ( v15 ) /*0x5f1f47*/
      {
        p_SetEquippedWeaponData = &self->members.super.process->SetEquippedWeaponData; /*0x5f1f5a*/
        EquippedInstance = ContainerExtraData_GetEquippedInstance((ExtraDataList *****)ContainerChanges, 9, 0); /*0x5f1f60*/
        ((void (__thiscall *)(LowProcess *, _DWORD *, _DWORD))*p_SetEquippedWeaponData)( /*0x5f1f6c*/
          self->members.super.process,
          EquippedInstance,
          0);
        p_setEquippedAmmoData = &self->members.super.process->setEquippedAmmoData; /*0x5f1f79*/
        v29 = (EntryData *)ContainerExtraData_GetEquippedInstance((ExtraDataList *****)ContainerChanges, 0xC, 0); /*0x5f1f7f*/
        (*p_setEquippedAmmoData)(self->members.super.process, v29); /*0x5f1f8b*/
        p_SetEquippedShieldData = &self->members.super.process->SetEquippedShieldData; /*0x5f1f98*/
        v31 = (EntryData *)ContainerExtraData_GetEquippedInstance((ExtraDataList *****)ContainerChanges, 0xD, 0); /*0x5f1f9e*/
        (*p_SetEquippedShieldData)(self->members.super.process, v31); /*0x5f1faa*/
        p_SetEquippedLightData = &self->members.super.process->SetEquippedLightData; /*0x5f1fb7*/
        v33 = (EntryData *)ContainerExtraData_GetEquippedInstance((ExtraDataList *****)ContainerChanges, 0xE, 0); /*0x5f1fbd*/
        (*p_SetEquippedLightData)(self->members.super.process, v33); /*0x5f1fc9*/
        ContainerChanges = (ExtraContainerChanges_Data *)ContainerExtraData_GetEquippedInstance( /*0x5f1fd6*/
                                                           (ExtraDataList *****)ContainerChanges,
                                                           9,
                                                           0);
        v57 = sub_612A90(self, (void **)&ContainerChanges->objList); /*0x5f1fdf*/
        ((void (__thiscall *)(LowProcess *, _DWORD))self->members.super.process->SetUnk0F8)( /*0x5f1ff9*/
          self->members.super.process,
          LODWORD(v57));
        if ( ContainerChanges ) /*0x5f1ffd*/
        {
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)ContainerChanges, v34); /*0x5f2001*/
          FormHeapFree((unsigned int)ContainerChanges); /*0x5f2007*/
        }
        v15 = v55; /*0x5f200f*/
      }
    }
    if ( g_TESDataHandler ) /*0x5f2013*/
    {
      if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x5f2020*/
      {
        if ( v18 ) /*0x5f202f*/
          self->members.super.process->Unk_06(self->members.super.process, (UInt32)self, 0); /*0x5f203c*/
        if ( self->vtbl->IsInCombat(self, 1) ) /*0x5f204a*/
        {
          if ( (PlayerCharacter *)((int (__thiscall *)(LowProcess *))self->members.super.process->Unk_F3)(self->members.super.process) == reference ) /*0x5f2067*/
          {
            p_SetCurHour = &self->members.super.process->SetCurHour; /*0x5f2073*/
            v58 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) - dbl_A2FAA0; /*0x5f2087*/
            ((void (__thiscall *)(LowProcess *, _DWORD))*p_SetCurHour)(self->members.super.process, LODWORD(v58)); /*0x5f2092*/
          }
          else if ( !sub_5E6CD0((TESObjectREFR *)self, 0) && !self->vtbl->IsYielding(self) ) /*0x5f20b4*/
          {
            if ( self->vtbl->GetCombatTarget(self) ) /*0x5f20c8*/
            {
              if ( !self->vtbl->GetCombatTarget(self)[3].member.modlist.data /*0x5f20f6*/
                || (v36 = (Actor *)self->vtbl->GetCombatTarget(self), Actor::GetProcessLevel(v36)) )
              {
                if ( self->vtbl->GetCombatController(self) ) /*0x5f2219*/
                {
                  v53 = (TESObjectREFR *)reference; /*0x5f2231*/
                  v40 = (float *)self->vtbl->GetCombatController(self); /*0x5f2234*/
                  CombatController_RemoveTarget(v40, v53); /*0x5f2238*/
                }
              }
              else if ( (PlayerCharacter *)self->vtbl->GetCombatTarget(self) == reference /*0x5f2130*/
                     && (signed int)reference->unk110 < (int)stru_B37D18.value
                     && Actor::CanUSeDoor_(self) )
              {
                ((void (__thiscall *)(LowProcess *, Actor *))self->members.super.process->Unk_64)( /*0x5f214c*/
                  self->members.super.process,
                  self);
                v37 = &self->members.super.process->SetCurHour; /*0x5f2158*/
                v59 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) - dbl_A432F0; /*0x5f216c*/
                ((void (__thiscall *)(LowProcess *, _DWORD))*v37)(self->members.super.process, LODWORD(v59)); /*0x5f2177*/
                v38 = *(float *)&dword_A46C30; /*0x5f217e*/
                ++reference->unk110; /*0x5f2184*/
                v56 = v38; /*0x5f218b*/
                if ( reference->lastActivatedLoadDoor ) /*0x5f2194*/
                {
                  v52 = reference->lastActivatedLoadDoor->vtbl->GetPos(reference->lastActivatedLoadDoor); /*0x5f21b1*/
                  v39 = self->vtbl->super.super.GetPos(self); /*0x5f21bf*/
                  sub_4121A0(v39, v61, v52); /*0x5f21c3*/
                  v56 = NiPoint3_Length(v61) / dbl_A3DDE0; /*0x5f21d7*/
                }
                ((void (__stdcall *)(_DWORD))self->members.super.process->GetUnk028)(LODWORD(v56)); /*0x5f21ee*/
              }
              else
              {
                ((void (__thiscall *)(Actor *, _DWORD))self->vtbl->Unk_D0)(self, 0); /*0x5f2201*/
                sub_5EAE70(self, v18, (int)ContainerChanges, v54); /*0x5f2205*/
              }
            }
          }
        }
        else if ( ((unsigned __int8 (__thiscall *)(Actor *))self->vtbl->super.super.super.Unk_1E)(self) /*0x5f2281*/
               && BYTE2(self->members.unk0B4[5])
               || (sub_5E3220(self) || sub_5E30A0((TESObjectREFR *)self))
               && (PlayerCharacter *)self->members.super.process->GetUnk02C(self->members.super.process) == reference )
        {
          v41 = &self->members.super.process->SetCurHour; /*0x5f228d*/
          v60 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) - dbl_A30E48; /*0x5f22a1*/
          ((void (__thiscall *)(LowProcess *, _DWORD))*v41)(self->members.super.process, LODWORD(v60)); /*0x5f22ac*/
          sub_674550((int)self, 1); /*0x5f22b6*/
          ProcessLevel = Actor::GetProcessLevel(self); /*0x5f22c3*/
          ActorProcessManager_AddMobileObject( /*0x5f22cf*/
            (ActorProcessManager *)&qword_B3BB2C[0x75],
            (MobileObject *)self,
            ProcessLevel,
            0,
            0,
            0);
        }
        Unk_D7 = self->vtbl->Unk_D7; /*0x5f22d6*/
        BYTE2(self->members.unk0B4[5]) = 1; /*0x5f22de*/
        if ( ((unsigned __int8 (__thiscall *)(Actor *))Unk_D7)(self) ) /*0x5f22e5*/
        {
          v44 = self->members.super.process->GetUnk02C(self->members.super.process); /*0x5f22fc*/
          if ( v44 ) /*0x5f2300*/
          {
            if ( v44->vtbl->IsActor(v44) /*0x5f231c*/
              && !((unsigned __int8 (__thiscall *)(TESObjectREFR *))v44->vtbl[2].super.super.ClearComponentReferences)(v44) )
            {
              sub_5EAE70(self, v18, (int)v44, v54); /*0x5f2324*/
              a5 = flt_A5B6C0; /*0x5f2340*/
              v49 = self->vtbl->super.super.GetPos(self); /*0x5f234b*/
              a3 = flt_A5B6C0; /*0x5f2357*/
              v47 = self->vtbl->super.super.GetPos(self); /*0x5f235c*/
              v45 = (TESObjectCELL *)Shared_GetDwordAtOffset40(self); /*0x5f235f*/
              sub_446B90( /*0x5f236b*/
                v45,
                v47,
                a3,
                v49,
                a5,
                (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))TESObjectREFR_SetOwnedDoorLockedForActor,
                (int)self);
            }
          }
        }
      }
    }
    if ( !self->vtbl->super.super.IsDead((TESObjectREFR *)self, 0) && (v15 == 3 || v15 == 2) ) /*0x5f238a*/
      sub_5EDA20((TESObjectREFR *)self, 0); /*0x5f2390*/
  }
  return 1; /*0x5f2397*/
}
