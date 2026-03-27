int __thiscall sub_5F1B50(Actor *this, int a2, int arg4)
{
  int editorPackage; // edi
  double v4; // st5
  double v5; // st6
  double v6; // st7
  #239 *process; // ecx
  int result; // eax
  #239 *v10; // ecx
  BSShaderAccumulator *inited; // eax
  LowProcess *v12; // ecx
  int v13; // ebp
  LowProcess *v14; // ecx
  int v15; // eax
  TESPackage *v16; // eax
  TESPackage *v17; // eax
  TESObjectCELL *ParentCell; // eax
  UInt32 v19; // ebp
  LowProcess *v20; // ecx
  char v21; // bl
  MiddleHighProcess *v22; // eax
  MiddleHighProcess *v23; // edi
  void (__thiscall *Copy)(BaseProcess *__hidden, BaseProcess *); // edx
  #239 *v25; // ecx
  LowProcess *v26; // ecx
  NiNode *v27; // edi
  ExtraContainerChanges_Data *ContainerChanges; // edi
  UInt32 (__thiscall **p_SetEquippedWeaponData)(BaseProcess *__hidden, EntryData *); // ebp
  _DWORD *EquippedInstance; // eax
  UInt32 (__thiscall **p_setEquippedAmmoData)(BaseProcess *__hidden, EntryData *); // ebp
  EntryData *v32; // eax
  UInt32 (__thiscall **p_SetEquippedShieldData)(BaseProcess *__hidden, EntryData *); // ebp
  EntryData *v34; // eax
  UInt32 (__thiscall **p_SetEquippedLightData)(BaseProcess *__hidden, EntryData *); // ebp
  EntryData *v36; // eax
  int v37; // edx
  void (__thiscall **p_SetCurHour)(BaseProcess *__hidden, float); // edi
  Actor *v39; // eax
  void (__thiscall **v40)(BaseProcess *__hidden, float); // edi
  double v41; // st7
  float *v42; // eax
  CombatController *v43; // eax
  void (__thiscall **v44)(BaseProcess *__hidden, float); // edi
  double v45; // st7
  int ProcessLevel; // eax
  void (__thiscall *Unk_D7)(Actor *); // edx
  TESObjectREFR *v48; // edi
  TESObjectCELL *v49; // eax
  float *v50; // [esp+8Ch] [ebp-4Ch]
  float a3; // [esp+90h] [ebp-48h]
  float *v52; // [esp+94h] [ebp-44h]
  float a5; // [esp+98h] [ebp-40h]
  LowProcess *v54; // [esp+A0h] [ebp-38h]
  float *v55; // [esp+A0h] [ebp-38h]
  TESObjectREFR *v56; // [esp+A0h] [ebp-38h]
  int v57; // [esp+A4h] [ebp-34h]
  UInt32 v58; // [esp+B8h] [ebp-20h]
  float v59; // [esp+B8h] [ebp-20h]
  float v60; // [esp+BCh] [ebp-1Ch]
  float v61; // [esp+BCh] [ebp-1Ch]
  float v62; // [esp+BCh] [ebp-1Ch]
  float v63; // [esp+BCh] [ebp-1Ch]
  float v64[3]; // [esp+C0h] [ebp-18h] BYREF
  unsigned int v65; // [esp+D4h] [ebp-4h]

  sub_674850(&ActorProcessManager_ptr, this);
  process = (#239 *)this->members.super.process;
  if ( !process || (result = (*(UInt32 (__thiscall **)(#239 *))(*(_DWORD *)process + 8))(process), result != 1) )
  {
    v10 = (#239 *)this->members.super.process;
    if ( v10 )
    {
      if ( !(*(UInt32 (__thiscall **)(#239 *))(*(_DWORD *)v10 + 8))(v10) )
      {
        inited = InitBSShaderAccumulator();
        if ( inited )
          sub_7AD1E0(inited, this->members.super.super.super.refID);
      }
    }
    v12 = this->members.super.process;
    if ( v12 )
    {
      editorPackage = (int)v12->editorPackage;
      if ( editorPackage )
      {
        v13 = *(_DWORD *)(editorPackage + 0x18);
        if ( *(_DWORD *)(*(_DWORD *)(4 * v13 + 0xB152B0) + 4 * v12->GetCurrentPackProcedure(v12)) == 0x2B
          && (PlayerCharacter *)this->members.super.process->GetUnk02C(this->members.super.process) == TESDataHandler_g_PlayerRef
          || *(_BYTE *)(editorPackage + 0x20) == 0x12
          && (PlayerCharacter *)this->members.super.process->GetUnk02C(this->members.super.process) != TESDataHandler_g_PlayerRef )
        {
          sub_5EAE70(this, 0x12, editorPackage, v57);
        }
      }
    }
    v14 = this->members.super.process;
    if ( v14 )
    {
      v15 = (int)v14->GetCurrentPackage(v14);
      if ( v15 )
      {
        if ( *(_BYTE *)(v15 + 0x20) == 0x12 )
        {
          if ( ((unsigned __int8 (__thiscall *)(LowProcess *))this->members.super.process->Unk_72)(this->members.super.process) )
            sub_5EAE70(this, 0x12, editorPackage, v57);
        }
      }
    }
    v16 = (TESPackage *)((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_5C)(this->members.super.process);
    if ( v16 )
    {
      if ( sub_5660A0(v16) )
      {
        v17 = this->members.super.process->editorPackage;
        if ( v17 )
        {
          if ( v17->members.type != 0xF
            && (v17->members.packageFlags & 0x200) != 0
            && (v17->members.packageFlags & 1) != 0 )
          {
            if ( TESObjectREFR_GetParentCell((TESObjectREFR *)this) )
            {
              ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
              if ( sub_4CAAC0((ExtraDataList *)ParentCell, this) )
                sub_5EAE70(this, 0x12, editorPackage, v57);
            }
          }
        }
      }
    }
    v19 = this->members.super.process->GetProcessLevel(this->members.super.process);
    v58 = v19;
    if ( this->vtbl->super.IsDead((MobileObject *)this) )
    {
      sub_5E9E70((TESObjectREFR *)this);
      v6 = ((double (__thiscall *)(LowProcess *, Actor *))this->members.super.process->Unk_8E)(
             this->members.super.process,
             this);
      RunScripts((TESObjectREFR *)this, v4, v5, v6);
    }
    else if ( this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0)
           && !this->members.super.process->GetProcessLevel(this->members.super.process) )
    {
      ((void (__thiscall *)(Actor *, int))this->vtbl->super.super.super.Unk_27)(this, 1);
    }
    while ( !this->vtbl->GetMountedHorse(this) )
    {
      if ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_None )
        break;
      if ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_Sitting )
        break;
      if ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) == kSitSleep_Sleeping )
        break;
      if ( !this->members.super.process->GetFurniture(this->members.super.process) )
        break;
      ((void (__thiscall *)(LowProcess *, Actor *))this->members.super.process->Unk_6B)(
        this->members.super.process,
        this);
    }
    if ( !this->vtbl->GetMountedHorse(this) )
    {
      if ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) )
      {
        if ( this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) != kSitSleep_Sitting
          && this->vtbl->super.super.GetSleepState((TESObjectREFR *)this) != kSitSleep_Sleeping
          && !this->members.super.process->GetFurniture(this->members.super.process) )
        {
          ((void (__stdcall *)(#239 *, UInt32, UInt32, UInt32))this->members.super.process->SetSleepState)(
            (#239 *)this,
            0,
            0,
            0x7Fu);
        }
      }
    }
    if ( !*(_BYTE *)(TESDataHandler + 0xCD4) && !sub_45A500(SaveLoad_CurrentSavegame) )
      sub_6765A0((int)&ActorProcessManager_ptr, (int)this);
    sub_674550(v19, v4, v5, v6, (int)this, v19);
    if ( this->members.DeadState == 6 )
    {
      Actor_HandleDeathSTate____(this, 0);
      ((void (__stdcall *)(_DWORD))this->members.super.process->SetUnk088)(0.0);
    }
    v20 = this->members.super.process;
    if ( v20 )
      v21 = ((int (__thiscall *)(LowProcess *))v20->GetUnk25C)(v20);
    else
      v21 = 0;
    v22 = (MiddleHighProcess *)FormHeapAlloc(0x18Cu);
    v65 = 0;
    if ( v22 )
      v23 = MiddleHighProcess::MiddleHighProcess(v22);
    else
      v23 = 0;
    Copy = v23->Copy;
    v54 = this->members.super.process;
    v65 = 0xFFFFFFFF;
    Copy(v23, v54);
    v25 = (#239 *)this->members.super.process;
    if ( v25 )
      (**(void (__thiscall ***)(#239 *, UInt8))v25)(v25, 1u);
    this->members.super.process = v23;
    if ( v23->GetIsAlerted(v23) )
    {
      v26 = this->members.super.process;
      if ( v26 )
        v26->SetCombatMode(v26, 1);
    }
    v27 = this->vtbl->super.super.GetNiNode(this);
    if ( v27 )
    {
      if ( v19 == 1 )
      {
        if ( ((int (__thiscall *)(LowProcess *))this->members.super.process->GetSitSleepState)(this->members.super.process) )
        {
          if ( !this->vtbl->GetMountedHorse(this) )
            sub_88CE30(v27, 0, 1, 0);
        }
      }
    }
    sub_673A90((int)this, 1, 1, 0, 0);
    ContainerChanges = ExtraDataList_GetContainerChanges(&this->members.super.super.baseExtraList);
    if ( ContainerChanges )
    {
      if ( v19 )
      {
        p_SetEquippedWeaponData = &this->members.super.process->SetEquippedWeaponData;
        EquippedInstance = ContainerExtraData_GetEquippedInstance((ExtraDataList *****)ContainerChanges, 9, 0);
        ((void (__thiscall *)(LowProcess *, _DWORD *, _DWORD))*p_SetEquippedWeaponData)(
          this->members.super.process,
          EquippedInstance,
          0);
        p_setEquippedAmmoData = &this->members.super.process->setEquippedAmmoData;
        v32 = (EntryData *)ContainerExtraData_GetEquippedInstance((ExtraDataList *****)ContainerChanges, 0xC, 0);
        (*p_setEquippedAmmoData)(this->members.super.process, v32);
        p_SetEquippedShieldData = &this->members.super.process->SetEquippedShieldData;
        v34 = (EntryData *)ContainerExtraData_GetEquippedInstance((ExtraDataList *****)ContainerChanges, 0xD, 0);
        (*p_SetEquippedShieldData)(this->members.super.process, v34);
        p_SetEquippedLightData = &this->members.super.process->SetEquippedLightData;
        v36 = (EntryData *)ContainerExtraData_GetEquippedInstance((ExtraDataList *****)ContainerChanges, 0xE, 0);
        (*p_SetEquippedLightData)(this->members.super.process, v36);
        ContainerChanges = (ExtraContainerChanges_Data *)ContainerExtraData_GetEquippedInstance(
                                                           (ExtraDataList *****)ContainerChanges,
                                                           9,
                                                           0);
        v60 = sub_612A90(this, (void **)&ContainerChanges->objList);
        ((void (__thiscall *)(LowProcess *, _DWORD))this->members.super.process->SetUnk0F8)(
          this->members.super.process,
          LODWORD(v60));
        if ( ContainerChanges )
        {
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)ContainerChanges, v37);
          FormHeapFree((unsigned int)ContainerChanges);
        }
        v19 = v58;
      }
    }
    if ( TESDataHandler )
    {
      if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
      {
        if ( v21 )
          this->members.super.process->Unk_06(this->members.super.process, (UInt32)this, 0);
        if ( this->vtbl->IsInCombat(this, 1) )
        {
          if ( (PlayerCharacter *)((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_F3)(this->members.super.process) == TESDataHandler_g_PlayerRef )
          {
            p_SetCurHour = &this->members.super.process->SetCurHour;
            v61 = TimeGlobals_GetGameHour(&TimeGlobals) - dbl_A2FAA0;
            ((void (__thiscall *)(LowProcess *, _DWORD))*p_SetCurHour)(this->members.super.process, LODWORD(v61));
          }
          else if ( !sub_5E6CD0((TESObjectREFR *)this, 0) && !this->vtbl->IsYielding(this) )
          {
            if ( this->vtbl->GetCombatTarget(this) )
            {
              if ( !this->vtbl->GetCombatTarget(this)[3].member.modlist.data
                || (v39 = (Actor *)this->vtbl->GetCombatTarget(this), Actor::GetProcessLevel(v39)) )
              {
                if ( this->vtbl->GetCombatController(this) )
                {
                  v56 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
                  v43 = this->vtbl->GetCombatController(this);
                  sub_6162D0(v43, v56);
                }
              }
              else if ( (PlayerCharacter *)this->vtbl->GetCombatTarget(this) == TESDataHandler_g_PlayerRef
                     && (signed int)TESDataHandler_g_PlayerRef->unk110 < dword_B37D18
                     && Actor::CanUSeDoor_(this) )
              {
                ((void (__thiscall *)(LowProcess *, Actor *))this->members.super.process->Unk_64)(
                  this->members.super.process,
                  this);
                v40 = &this->members.super.process->SetCurHour;
                v62 = TimeGlobals_GetGameHour(&TimeGlobals) - dbl_A432F0;
                ((void (__thiscall *)(LowProcess *, _DWORD))*v40)(this->members.super.process, LODWORD(v62));
                v41 = *(float *)&dword_A46C30;
                ++TESDataHandler_g_PlayerRef->unk110;
                v59 = v41;
                if ( TESDataHandler_g_PlayerRef->lastActivatedLoadDoor )
                {
                  v55 = TESDataHandler_g_PlayerRef->lastActivatedLoadDoor->vtbl->GetPos(TESDataHandler_g_PlayerRef->lastActivatedLoadDoor);
                  v42 = this->vtbl->super.super.GetPos(this);
                  sub_4121A0(v42, v64, v55);
                  v59 = sub_404C90(v64) / dbl_A3DDE0;
                }
                ((void (__stdcall *)(_DWORD))this->members.super.process->GetUnk028)(LODWORD(v59));
              }
              else
              {
                ((void (__thiscall *)(Actor *, _DWORD))this->vtbl->Unk_D0)(this, 0);
                sub_5EAE70(this, v21, (int)ContainerChanges, v57);
              }
            }
          }
        }
        else if ( ((unsigned __int8 (__thiscall *)(Actor *))this->vtbl->super.super.super.Unk_1E)(this)
               && BYTE2(this->members.unk0B4[5])
               || (sub_5E3220(this) || sub_5E30A0((TESObjectREFR *)this))
               && (PlayerCharacter *)this->members.super.process->GetUnk02C(this->members.super.process) == TESDataHandler_g_PlayerRef )
        {
          v44 = &this->members.super.process->SetCurHour;
          v63 = TimeGlobals_GetGameHour(&TimeGlobals) - dbl_A30E48;
          v45 = ((double (__thiscall *)(LowProcess *, _DWORD))*v44)(this->members.super.process, LODWORD(v63));
          sub_674550(v19, v4, v5, v45, (int)this, 1);
          ProcessLevel = Actor::GetProcessLevel(this);
          sub_673A90((int)this, ProcessLevel, 0, 0, 0);
        }
        Unk_D7 = this->vtbl->Unk_D7;
        BYTE2(this->members.unk0B4[5]) = 1;
        if ( ((unsigned __int8 (__thiscall *)(Actor *))Unk_D7)(this) )
        {
          v48 = this->members.super.process->GetUnk02C(this->members.super.process);
          if ( v48 )
          {
            if ( v48->vtbl->IsActor(v48)
              && !((unsigned __int8 (__thiscall *)(TESObjectREFR *))v48->vtbl[2].super.super.ClearComponentReferences)(v48) )
            {
              sub_5EAE70(this, v21, (int)v48, v57);
              a5 = flt_A5B6C0;
              v52 = this->vtbl->super.super.GetPos(this);
              a3 = flt_A5B6C0;
              v50 = this->vtbl->super.super.GetPos(this);
              v49 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
              sub_446B90(
                v49,
                v50,
                a3,
                v52,
                a5,
                (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_645A30,
                (int)this);
            }
          }
        }
      }
    }
    result = ((int (__thiscall *)(Actor *, _DWORD))this->vtbl->super.super.IsDead)(this, 0);
    if ( !(_BYTE)result && (v19 == 3 || v19 == 2) )
      sub_5EDA20((TESObjectREFR *)this, 0);
  }
  LOBYTE(result) = 1;
  return result;
}
