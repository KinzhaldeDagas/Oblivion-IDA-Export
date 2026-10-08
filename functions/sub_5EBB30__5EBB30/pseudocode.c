// Verified tier-transition identity: MobileObject load dispatch for saved level2 calls this slot; body allocates 0xa8 matching process constructor, copies/replaces current process, and registers level2. Success exit sets AL=1; no stack arguments (RET0 and no-argument loader call). Probable Fallout Moveto* lineage; internal animation/combat scheduling side effects not fully decoded in this pass.
bool __thiscall Actor_MoveToMiddleLow(Actor *self)
{
  int v1; // edi
  double v2; // st5
  double v3; // st6
  double v4; // st7
  #239 *process; // ecx
  MiddleLowProcess *v7; // ebx
  #239 *v8; // ecx
  BSShaderAccumulator *Global; // eax
  LowProcess *v10; // ecx
  int v11; // eax
  LowProcess_vtbl *v12; // edi
  double v13; // st7
  LowProcess *v14; // eax
  TESPackage *editorPackage; // ecx
  LowProcess *v16; // ecx
  TESObjectREFR *v17; // ebp
  MiddleLowProcess *v18; // eax
  LowProcess *v19; // eax
  TESPackage *v20; // eax
  Actor *v21; // ecx
  TESPackage *v22; // eax
  LowProcess *v23; // ecx
  LowProcess *v24; // ecx
  int v25; // eax
  Actor *v26; // eax
  LowProcess_vtbl *v27; // edi
  UInt32 DwordAtOffset40; // edi
  float *v29; // eax
  float *v30; // eax
  LowProcess_vtbl *v31; // edi
  float *v33; // [esp+50h] [ebp-3Ch]
  TESObjectREFR *v34; // [esp+50h] [ebp-3Ch]
  int v35; // [esp+54h] [ebp-38h]
  char v36; // [esp+6Ah] [ebp-22h]
  char v37; // [esp+6Bh] [ebp-21h]
  float v38; // [esp+6Ch] [ebp-20h]
  float v39; // [esp+70h] [ebp-1Ch]
  float v40; // [esp+70h] [ebp-1Ch]
  float v41; // [esp+70h] [ebp-1Ch]
  float v42[3]; // [esp+74h] [ebp-18h] BYREF
  unsigned int v43; // [esp+88h] [ebp-4h]

  sub_674850(&qword_B3BB2C[0x75], self); /*0x5ebb5f*/
  process = (#239 *)self->members.super.process; /*0x5ebb64*/
  v7 = 0; /*0x5ebb67*/
  if ( !process || (*(UInt32 (__thiscall **)(#239 *))(*(_DWORD *)process + 8))(process) != 2 ) /*0x5ebb77*/
  {
    v8 = (#239 *)self->members.super.process; /*0x5ebb7d*/
    if ( v8 ) /*0x5ebb82*/
    {
      if ( !(*(UInt32 (__thiscall **)(#239 *))(*(_DWORD *)v8 + 8))(v8) ) /*0x5ebb89*/
      {
        Global = BSShaderAccumulator_GetOrCreateGlobal(); /*0x5ebb8f*/
        if ( Global ) /*0x5ebb96*/
          sub_7AD1E0(Global, self->members.super.super.super.refID); /*0x5ebb9e*/
      }
    }
    v10 = self->members.super.process; /*0x5ebba3*/
    if ( v10 ) /*0x5ebba8*/
    {
      v11 = (int)v10->GetCurrentPackage(v10); /*0x5ebbb2*/
      if ( v11 ) /*0x5ebbb6*/
      {
        if ( *(_BYTE *)(v11 + 0x20) == 0x12 ) /*0x5ebbbc*/
        {
          if ( ((unsigned __int8 (__thiscall *)(LowProcess *))self->members.super.process->Unk_72)(self->members.super.process) ) /*0x5ebbc9*/
            sub_5EAE70(self, 0, v1, v35); /*0x5ebbd1*/
        }
      }
    }
    v12 = (LowProcess_vtbl *)self->members.super.process->GetProcessLevel(self->members.super.process); /*0x5ebbe2*/
    sub_5E4B00(self, v4); /*0x5ebbe4*/
    if ( (unsigned int)v12 <= 1 ) /*0x5ebbec*/
      sub_5E4FC0(self); /*0x5ebbf4*/
    MagicTarget_RemoveAllEffects(&self->members.magicTarget); /*0x5ebbfc*/
    if ( self->vtbl->super.IsDead((MobileObject *)self) ) /*0x5ebc0b*/
    {
      sub_5E9E70((TESObjectREFR *)self); /*0x5ebc13*/
      v13 = ((double (__thiscall *)(LowProcess *, Actor *))self->members.super.process->Unk_8E)( /*0x5ebc24*/
              self->members.super.process,
              self);
      RunScripts((TESObjectREFR *)self, v2, v3, v13); /*0x5ebc28*/
    }
    else if ( self->vtbl->super.super.IsDead((TESObjectREFR *)self, 0) /*0x5ebc46*/
           && !self->members.super.process->GetProcessLevel(self->members.super.process) )
    {
      ((void (__thiscall *)(Actor *, int))self->vtbl->super.super.super.Unk_27)(self, 1); /*0x5ebc58*/
    }
    sub_674550((int)self, (int)v12); /*0x5ebc61*/
    if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x5ebc6b*/
    {
      if ( !sub_45A500(g_TESSaveLoadGame) ) /*0x5ebc79*/
        sub_6765A0((int)&qword_B3BB2C[0x75], (int)self); /*0x5ebc88*/
      v14 = self->members.super.process; /*0x5ebc8d*/
      if ( v14 ) /*0x5ebc92*/
      {
        editorPackage = v14->editorPackage; /*0x5ebc94*/
        if ( editorPackage ) /*0x5ebc99*/
        {
          if ( editorPackage->members.type == kPackageType_Wander ) /*0x5ebc9f*/
            v14->editorPackProcedure = kProcedure_TRAVEL; /*0x5ebca1*/
        }
      }
    }
    if ( self->members.DeadState == 6 ) /*0x5ebcab*/
    {
      Actor_HandleDeathState(self, 0); /*0x5ebcb0*/
      ((void (__stdcall *)(_DWORD))self->members.super.process->SetUnk088)(0.0); /*0x5ebcc6*/
    }
    v16 = self->members.super.process; /*0x5ebcc8*/
    if ( v16 ) /*0x5ebccd*/
      v36 = ((int (__thiscall *)(LowProcess *))v16->GetUnk25C)(v16); /*0x5ebcd9*/
    else
      v36 = 0; /*0x5ebcdf*/
    v37 = 0; /*0x5ebce8*/
    v17 = 0; /*0x5ebcec*/
    v18 = (MiddleLowProcess *)FormHeapAlloc(0xA8u); /*0x5ebcee*/
    v43 = 0; /*0x5ebcfc*/
    if ( v18 ) /*0x5ebd00*/
      v7 = MiddleLowProcess::MiddleLowProcess(v18); /*0x5ebd09*/
    v19 = self->members.super.process; /*0x5ebd0b*/
    v43 = 0xFFFFFFFF; /*0x5ebd10*/
    if ( !v19 ) /*0x5ebd1d*/
      goto LABEL_53; /*0x5ebd1d*/
    v20 = v19->editorPackage; /*0x5ebd23*/
    if ( !v20 || !TESPackage::IsTemporaryOverrideType(v20) ) /*0x5ebd30*/
      goto LABEL_53; /*0x5ebd37*/
    if ( (PlayerCharacter *)((int (__thiscall *)(LowProcess *))self->members.super.process->Unk_F3)(self->members.super.process) == reference ) /*0x5ebd50*/
    {
      v12 = self->members.super.process->__vftable; /*0x5ebd55*/
      v39 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) - dbl_A2FAA0; /*0x5ebd6e*/
      ((void (__thiscall *)(LowProcess *, _DWORD))v12->SetCurHour)(self->members.super.process, LODWORD(v39)); /*0x5ebd79*/
LABEL_53:
      v7->Copy(v7, self->members.super.process); /*0x5ebe3b*/
      v23 = self->members.super.process; /*0x5ebe48*/
      if ( v23 ) /*0x5ebe4d*/
        ((void (__thiscall *)(LowProcess *, int))v23->Destructor)(v23, 1); /*0x5ebe55*/
      self->members.super.process = v7; /*0x5ebe65*/
      ActorProcessManager_AddMobileObject((ActorProcessManager *)&qword_B3BB2C[0x75], (MobileObject *)self, 2, 1, 0, 0); /*0x5ebe68*/
      if ( v37 && v17 ) /*0x5ebe76*/
      {
        v24 = self->members.super.process; /*0x5ebe78*/
        v12 = v24->__vftable; /*0x5ebe7b*/
        v25 = ((int (__thiscall *)(LowProcess *, _DWORD, _DWORD, _DWORD, int))v24->GetUnk01E)(v24, 0, 0, 0, 1); /*0x5ebe8b*/
        ((void (__thiscall *)(LowProcess *, Actor *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, int))v12->Unk_89)( /*0x5ebea2*/
          self->members.super.process,
          self,
          v17,
          0,
          LODWORD(v42[2]),
          0,
          v25);
      }
      else if ( v36 ) /*0x5ebeab*/
      {
        self->members.super.process->Unk_06(self->members.super.process, (UInt32)self, 0); /*0x5ebeb8*/
      }
      if ( g_TESDataHandler ) /*0x5ebeba*/
      {
        if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] ) /*0x5ebec7*/
        {
          if ( v36 ) /*0x5ebed9*/
            self->members.super.process->Unk_06(self->members.super.process, (UInt32)self, 0); /*0x5ebee6*/
          if ( self->vtbl->IsInCombat(self, 1) ) /*0x5ebef4*/
          {
            if ( !sub_5E6CD0((TESObjectREFR *)self, 0) && !self->vtbl->IsYielding(self) ) /*0x5ebf19*/
            {
              if ( self->vtbl->GetCombatTarget(self) ) /*0x5ebf2d*/
              {
                if ( !self->vtbl->GetCombatTarget(self)[3].member.modlist.data /*0x5ebf5b*/
                  || (v26 = (Actor *)self->vtbl->GetCombatTarget(self), Actor::GetProcessLevel(v26)) )
                {
                  if ( self->vtbl->GetCombatController(self) ) /*0x5ec0a3*/
                  {
                    v34 = (TESObjectREFR *)reference; /*0x5ec0bb*/
                    v30 = (float *)self->vtbl->GetCombatController(self); /*0x5ec0be*/
                    CombatController_RemoveTarget(v30, v34); /*0x5ec0c2*/
                  }
                }
                else if ( (PlayerCharacter *)self->vtbl->GetCombatTarget(self) == reference /*0x5ebf95*/
                       && (signed int)reference->unk110 <= (int)stru_B37D18.value
                       && Actor::CanUSeDoor_(self) )
                {
                  v27 = self->members.super.process->__vftable; /*0x5ebfa8*/
                  v40 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) - dbl_A2FAA0; /*0x5ebfc1*/
                  ((void (__thiscall *)(LowProcess *, _DWORD))v27->SetCurHour)( /*0x5ebfcc*/
                    self->members.super.process,
                    LODWORD(v40));
                  ((void (__thiscall *)(LowProcess *, Actor *))self->members.super.process->Unk_64)( /*0x5ebfda*/
                    self->members.super.process,
                    self);
                  self->vtbl->GetCombatTarget(self); /*0x5ebfe6*/
                  v38 = *(float *)&dword_A46C30; /*0x5ebff3*/
                  ++reference->unk110; /*0x5ebff7*/
                  if ( reference->lastActivatedLoadDoor ) /*0x5ec003*/
                  {
                    DwordAtOffset40 = Shared_GetDwordAtOffset40(reference->lastActivatedLoadDoor); /*0x5ec019*/
                    if ( Shared_GetDwordAtOffset40(self) == DwordAtOffset40 ) /*0x5ec022*/
                    {
                      v33 = reference->lastActivatedLoadDoor->vtbl->GetPos(reference->lastActivatedLoadDoor); /*0x5ec03b*/
                      v29 = self->vtbl->super.super.GetPos(self); /*0x5ec049*/
                      sub_4121A0(v29, v42, v33); /*0x5ec04d*/
                      v38 = NiPoint3_Length(v42) / dbl_A3DDE0; /*0x5ec061*/
                    }
                  }
                  ((void (__stdcall *)(_DWORD))self->members.super.process->GetUnk028)(LODWORD(v38)); /*0x5ec078*/
                }
                else
                {
                  ((void (__thiscall *)(Actor *, _DWORD))self->vtbl->Unk_D0)(self, 0); /*0x5ec08b*/
                  sub_5EAE70(self, (int)v7, (int)v12, v35); /*0x5ec08f*/
                }
              }
            }
          }
          else if ( ((unsigned __int8 (__thiscall *)(Actor *))self->vtbl->super.super.super.Unk_1E)(self) /*0x5ec109*/
                 && BYTE2(self->members.unk0B4[5])
                 || (sub_5E3220(self) || sub_5E30A0((TESObjectREFR *)self))
                 && (PlayerCharacter *)self->members.super.process->GetUnk02C(self->members.super.process) == reference )
          {
            v31 = self->members.super.process->__vftable; /*0x5ec10e*/
            v41 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) - dbl_A2FAA0; /*0x5ec127*/
            ((void (__thiscall *)(LowProcess *, _DWORD))v31->SetCurHour)(self->members.super.process, LODWORD(v41)); /*0x5ec132*/
            sub_674550((int)self, 2); /*0x5ec13c*/
            ActorProcessManager_AddMobileObject( /*0x5ec14f*/
              (ActorProcessManager *)&qword_B3BB2C[0x75],
              (MobileObject *)self,
              2,
              0,
              0,
              0);
          }
          BYTE2(self->members.unk0B4[5]) = 1; /*0x5ec154*/
        }
      }
      return 1; /*0x5ec154*/
    }
    if ( !sub_5E6CD0((TESObjectREFR *)self, 0) && !self->vtbl->IsInCombat(self, 1) ) /*0x5ebd99*/
    {
      if ( !sub_5E6BA0(self) ) /*0x5ebda1*/
        sub_5EAE70(v21, (int)v7, (int)v12, v35); /*0x5ebdae*/
      goto LABEL_53; /*0x5ebdb3*/
    }
    if ( !self->vtbl->GetCombatController(self) ) /*0x5ebdc2*/
      v37 = 1; /*0x5ebdc8*/
    v17 = self->members.super.process->GetUnk02C(self->members.super.process); /*0x5ebdde*/
    if ( sub_5E6CD0((TESObjectREFR *)self, 0) ) /*0x5ebde0*/
    {
      if ( v17 ) /*0x5ebdf0*/
        goto LABEL_53; /*0x5ebdf0*/
      v22 = self->members.super.process->GetCurrentPackage(self->members.super.process); /*0x5ebdfd*/
      if ( v22 ) /*0x5ebe01*/
      {
        if ( v22->members.type == kPackageType_Flee ) /*0x5ebe07*/
        {
          if ( LOBYTE(v22[1].members.target) ) /*0x5ebe09*/
            v17 = sub_628140((int *)v22, (TESObjectREFR *)self); /*0x5ebe17*/
        }
      }
    }
    if ( !v17 ) /*0x5ebe1b*/
    {
      if ( self->vtbl->GetCombatTarget(self) ) /*0x5ebe27*/
        v17 = (TESObjectREFR *)self->vtbl->GetCombatTarget(self); /*0x5ebe39*/
    }
    goto LABEL_53; /*0x5ebe39*/
  }
  return 1; /*0x5ec15d*/
}
