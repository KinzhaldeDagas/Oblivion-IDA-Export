// Verified tier-transition identity: MobileObject load dispatch for saved level3 calls this slot; body allocates 0x90 matching process constructor, copies/replaces current process, and registers level3. Success exit sets AL=1; no stack arguments (RET0 and no-argument loader call). Probable Fallout Moveto* lineage; internal animation/combat scheduling side effects not fully decoded in this pass.
bool __thiscall Actor_MoveToLow(Actor *self)
{
  int v1; // edi
  double v2; // st5
  double v3; // st6
  #239 *process; // ecx
  #239 *v6; // ecx
  BSShaderAccumulator *Global; // eax
  LowProcess *v8; // ecx
  int v9; // eax
  LowProcess *v10; // ecx
  TESPackage *editorPackage; // eax
  TESPackage *v12; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  unsigned int v14; // edi
  double v15; // st7
  LowProcess *v16; // ecx
  LowProcess *v17; // edi
  char v18; // bl
  TESForm *v19; // ebp
  TESPackage *v20; // ecx
  TESPackage *v21; // eax
  LowProcess *v22; // eax
  void (__thiscall *Copy)(BaseProcess *__hidden, BaseProcess *); // edx
  LowProcess *v24; // ecx
  LowProcess *v25; // ecx
  int v26; // eax
  LowProcess_vtbl *v27; // edi
  Actor *v28; // eax
  LowProcess_vtbl *v29; // edi
  void **p_lastActivatedLoadDoor; // edi
  UInt32 v31; // ebx
  float *v32; // eax
  float *v33; // eax
  LowProcess_vtbl *v34; // edi
  LowProcess *v36; // [esp+50h] [ebp-3Ch]
  float *v37; // [esp+50h] [ebp-3Ch]
  TESObjectREFR *v38; // [esp+50h] [ebp-3Ch]
  int v39; // [esp+54h] [ebp-38h]
  char v40; // [esp+6Bh] [ebp-21h]
  float v41; // [esp+6Ch] [ebp-20h]
  float v42; // [esp+6Ch] [ebp-20h]
  float v43; // [esp+6Ch] [ebp-20h]
  float v44; // [esp+6Ch] [ebp-20h]
  float v45[3]; // [esp+74h] [ebp-18h] BYREF
  unsigned int v46; // [esp+88h] [ebp-4h]

  process = (#239 *)self->members.super.process; /*0x5eb549*/
  if ( !process || (*(UInt32 (__thiscall **)(#239 *))(*(_DWORD *)process + 8))(process) != 3 )
  {
    v6 = (#239 *)self->members.super.process; /*0x5eb560*/
    if ( v6 ) /*0x5eb565*/
    {
      if ( !(*(UInt32 (__thiscall **)(#239 *))(*(_DWORD *)v6 + 8))(v6) ) /*0x5eb56c*/
      {
        Global = BSShaderAccumulator_GetOrCreateGlobal(); /*0x5eb572*/
        if ( Global ) /*0x5eb579*/
          sub_7AD1E0(Global, self->members.super.super.super.refID); /*0x5eb581*/
      }
    }
    v8 = self->members.super.process; /*0x5eb586*/
    if ( v8 ) /*0x5eb58d*/
    {
      v9 = (int)v8->GetCurrentPackage(v8); /*0x5eb597*/
      if ( v9 ) /*0x5eb59b*/
      {
        if ( *(_BYTE *)(v9 + 0x20) == 0x12 ) /*0x5eb5a0*/
        {
          if ( ((unsigned __int8 (__thiscall *)(LowProcess *))self->members.super.process->Unk_72)(self->members.super.process) ) /*0x5eb5ad*/
            sub_5EAE70(self, 0x12, v1, v39); /*0x5eb5b5*/
        }
      }
    }
    sub_674850(&qword_B3BB2C[0x75], self); /*0x5eb5c0*/
    if ( self->members.DeadState == 6 ) /*0x5eb5cc*/
    {
      Actor_HandleDeathState(self, 0); /*0x5eb5d2*/
      ((void (__stdcall *)(_DWORD))self->members.super.process->SetUnk088)(0.0); /*0x5eb5e8*/
    }
    v10 = self->members.super.process; /*0x5eb5ea*/
    if ( v10 ) /*0x5eb5ef*/
    {
      editorPackage = v10->editorPackage; /*0x5eb5f1*/
      if ( editorPackage ) /*0x5eb5f6*/
      {
        if ( editorPackage->members.type == kPackageType_Dialogue && (PlayerCharacter *)v10->GetUnk02C(v10) != reference ) /*0x5eb60d*/
          sub_5EAE70(self, 0x12, v1, v39); /*0x5eb611*/
      }
    }
    v12 = self->members.super.process->editorPackage; /*0x5eb619*/
    if ( v12 ) /*0x5eb61e*/
    {
      if ( v12->members.type == kPackageType_Alarm && !Actor_IsGuardClass(self) ) /*0x5eb628*/
      {
        if ( !Shared_GetDwordAtOffset40(reference) /*0x5eb64d*/
          || (DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference),
              !TESObjectCELL_IsInterior(DwordAtOffset40)) )
        {
          sub_5EAE70(self, 0x12, v1, v39); /*0x5eb658*/
        }
      }
    }
    v14 = self->members.super.process->GetProcessLevel(self->members.super.process); /*0x5eb669*/
    sub_5E4B00(self); /*0x5eb66b*/
    if ( v14 <= 1 ) /*0x5eb673*/
      sub_5E4FC0(self); /*0x5eb67b*/
    MagicTarget_RemoveAllEffects(&self->members.magicTarget); /*0x5eb683*/
    if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] && !sub_45A500(g_TESSaveLoadGame) ) /*0x5eb69d*/
      sub_6765A0((int)&qword_B3BB2C[0x75], (int)self); /*0x5eb6ac*/
    if ( self->vtbl->super.IsDead((MobileObject *)self) ) /*0x5eb6bb*/
    {
      sub_5E9E70((TESObjectREFR *)self); /*0x5eb6c3*/
      v15 = ((double (__thiscall *)(LowProcess *, Actor *))self->members.super.process->Unk_8E)( /*0x5eb6d4*/
              self->members.super.process,
              self);
      RunScripts((TESObjectREFR *)self, v2, v3, v15); /*0x5eb6d8*/
    }
    else if ( self->vtbl->super.super.IsDead((TESObjectREFR *)self, 0) /*0x5eb6f7*/
           && !self->members.super.process->GetProcessLevel(self->members.super.process) )
    {
      ((void (__thiscall *)(Actor *, int))self->vtbl->super.super.super.Unk_27)(self, 1); /*0x5eb709*/
    }
    sub_674550((int)self, v14); /*0x5eb712*/
    v16 = self->members.super.process; /*0x5eb717*/
    v17 = 0; /*0x5eb71a*/
    v18 = 0; /*0x5eb71c*/
    v19 = 0; /*0x5eb71e*/
    v40 = v16 ? ((int (__thiscall *)(LowProcess *))v16->GetUnk25C)(v16) : 0;
    v20 = self->members.super.process->editorPackage; /*0x5eb73c*/
    if ( v20 ) /*0x5eb746*/
    {
      if ( TESPackage::IsTemporaryOverrideType(v20) ) /*0x5eb748*/
      {
        if ( sub_5E6CD0((TESObjectREFR *)self, 0) ) /*0x5eb754*/
        {
          v18 = 1; /*0x5eb765*/
          v19 = self->vtbl->GetCombatTarget(self); /*0x5eb76f*/
        }
        v21 = self->members.super.process->editorPackage; /*0x5eb774*/
        if ( (!v21 || v21->members.type != kPackageType_Alarm) && !self->vtbl->GetCombatController(self) ) /*0x5eb78b*/
          sub_5EAE70(self, v18, 0, v39); /*0x5eb793*/
      }
    }
    v22 = (LowProcess *)FormHeapAlloc(0x90u); /*0x5eb79d*/
    v46 = 0; /*0x5eb7ab*/
    if ( v22 ) /*0x5eb7af*/
      v17 = LowProcess::LowProcess(v22); /*0x5eb7b8*/
    Copy = v17->Copy; /*0x5eb7bf*/
    v36 = self->members.super.process; /*0x5eb7c2*/
    v46 = 0xFFFFFFFF; /*0x5eb7c5*/
    Copy(v17, v36); /*0x5eb7cd*/
    v24 = self->members.super.process; /*0x5eb7cf*/
    if ( v24 ) /*0x5eb7d4*/
      ((void (__thiscall *)(LowProcess *, int))v24->Destructor)(v24, 1); /*0x5eb7dc*/
    self->members.super.process = v17; /*0x5eb7de*/
    v17->Unk_2D(v17, (UInt32)self); /*0x5eb7ec*/
    ActorProcessManager_AddMobileObject((ActorProcessManager *)&qword_B3BB2C[0x75], (MobileObject *)self, 3, 1, 0, 0); /*0x5eb7fc*/
    if ( v18 ) /*0x5eb803*/
    {
      v25 = self->members.super.process; /*0x5eb805*/
      v17 = (LowProcess *)v25->__vftable; /*0x5eb808*/
      v26 = ((int (__thiscall *)(LowProcess *, _DWORD, _DWORD, _DWORD, int))v25->GetUnk01E)(v25, 0, 0, 0, 1); /*0x5eb818*/
      ((void (__thiscall *)(LowProcess *, Actor *, TESForm *, _DWORD, _DWORD, _DWORD, int))v17[3].avDamageModifiers.magicka)( /*0x5eb82f*/
        self->members.super.process,
        self,
        v19,
        0,
        LODWORD(v45[2]),
        0,
        v26);
    }
    else if ( v40 ) /*0x5eb838*/
    {
      self->members.super.process->Unk_06(self->members.super.process, (UInt32)self, 0); /*0x5eb845*/
    }
    if ( g_TESDataHandler && !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x5eb854*/
    {
      if ( v40 ) /*0x5eb866*/
        self->members.super.process->Unk_06(self->members.super.process, (UInt32)self, 0); /*0x5eb873*/
      if ( !self->vtbl->IsInCombat(self, 1) ) /*0x5eb885*/
      {
        if ( ((unsigned __int8 (__thiscall *)(Actor *))self->vtbl->super.super.super.Unk_1E)(self) /*0x5ebac8*/
          && BYTE2(self->members.unk0B4[5])
          || (sub_5E3220(self) || sub_5E30A0((TESObjectREFR *)self))
          && (PlayerCharacter *)self->members.super.process->GetUnk02C(self->members.super.process) == reference )
        {
          v34 = self->members.super.process->__vftable; /*0x5ebacd*/
          v44 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) - dbl_A2F928; /*0x5ebae6*/
          ((void (__thiscall *)(LowProcess *, _DWORD))v34->SetCurHour)(self->members.super.process, LODWORD(v44)); /*0x5ebaf1*/
          sub_674550((int)self, 3); /*0x5ebafb*/
          ActorProcessManager_AddMobileObject( /*0x5ebb0e*/
            (ActorProcessManager *)&qword_B3BB2C[0x75],
            (MobileObject *)self,
            3,
            0,
            0,
            0);
        }
        goto LABEL_83; /*0x5ebb0e*/
      }
      if ( (PlayerCharacter *)((int (__thiscall *)(LowProcess *))self->members.super.process->Unk_F3)(self->members.super.process) == reference ) /*0x5eb89e*/
      {
        v27 = self->members.super.process->__vftable; /*0x5eb8a3*/
        v41 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) - dbl_A2FAA0; /*0x5eb8bc*/
        ((void (__thiscall *)(LowProcess *, _DWORD))v27->SetCurHour)(self->members.super.process, LODWORD(v41)); /*0x5eb8c7*/
      }
      else
      {
        if ( sub_5E6CD0((TESObjectREFR *)self, 0) || self->vtbl->IsYielding(self) || !self->vtbl->GetCombatTarget(self) ) /*0x5eb8fd*/
        {
          if ( self->vtbl->GetCombatController(self) ) /*0x5eba64*/
          {
            v38 = (TESObjectREFR *)reference; /*0x5eba78*/
            v33 = (float *)self->vtbl->GetCombatController(self); /*0x5eba7b*/
            CombatController_RemoveTarget(v33, v38); /*0x5eba7f*/
            goto LABEL_83; /*0x5eba84*/
          }
        }
        else
        {
          if ( (PlayerCharacter *)self->vtbl->GetCombatTarget(self) == reference /*0x5eb934*/
            && (signed int)reference->unk110 <= (int)stru_B37D18.value
            && Actor::CanUSeDoor_(self) )
          {
            if ( self->vtbl->GetCombatTarget(self)[3].member.modlist.data ) /*0x5eb950*/
            {
              v28 = (Actor *)self->vtbl->GetCombatTarget(self); /*0x5eb964*/
              if ( !Actor::GetProcessLevel(v28) ) /*0x5eb968*/
              {
                v29 = self->members.super.process->__vftable; /*0x5eb978*/
                v42 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) - dbl_A2F928; /*0x5eb991*/
                ((void (__thiscall *)(LowProcess *, _DWORD))v29->SetCurHour)(self->members.super.process, LODWORD(v42)); /*0x5eb99c*/
                self->vtbl->GetCombatTarget(self); /*0x5eb9a8*/
                v43 = *(float *)&dword_A46C30; /*0x5eb9b5*/
                ++reference->unk110; /*0x5eb9b9*/
                p_lastActivatedLoadDoor = (void **)&reference->lastActivatedLoadDoor; /*0x5eb9c6*/
                if ( *p_lastActivatedLoadDoor ) /*0x5eb9cc*/
                {
                  v31 = Shared_GetDwordAtOffset40(self); /*0x5eb9da*/
                  if ( v31 == Shared_GetDwordAtOffset40(*p_lastActivatedLoadDoor) ) /*0x5eb9e3*/
                  {
                    v37 = reference->lastActivatedLoadDoor->vtbl->GetPos(reference->lastActivatedLoadDoor); /*0x5eb9fc*/
                    v32 = self->vtbl->super.super.GetPos(self); /*0x5eba0a*/
                    sub_4121A0(v32, v45, v37); /*0x5eba0e*/
                    v43 = NiPoint3_Length(v45) / dbl_A3DDE0; /*0x5eba22*/
                  }
                }
                ((void (__stdcall *)(_DWORD))self->members.super.process->GetUnk028)(LODWORD(v43)); /*0x5eba39*/
                goto LABEL_83; /*0x5eba3b*/
              }
            }
          }
          ((void (__thiscall *)(Actor *, _DWORD))self->vtbl->Unk_D0)(self, 0); /*0x5eba4c*/
        }
        sub_5EAE70(self, v18, (int)v17, v39); /*0x5eba50*/
      }
LABEL_83:
      BYTE2(self->members.unk0B4[5]) = 1; /*0x5ebb13*/
    }
  }
  return 1; /*0x5ebb1c*/
}
