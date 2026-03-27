int __thiscall sub_5EBB30(Actor *this)
{
  char v1; // bp
  int v2; // edi
  double v3; // st5
  double v4; // st6
  double v5; // st7
  #239 *process; // ecx
  MiddleLowProcess *v8; // ebx
  int result; // eax
  #239 *v10; // ecx
  BSShaderAccumulator *inited; // eax
  LowProcess *v12; // ecx
  int v13; // eax
  LowProcess_vtbl *v14; // edi
  LowProcess *v15; // eax
  TESPackage *editorPackage; // ecx
  LowProcess *v17; // ecx
  TESObjectREFR *v18; // ebp
  MiddleLowProcess *v19; // eax
  LowProcess *v20; // eax
  char *v21; // eax
  Actor *v22; // ecx
  TESPackage *v23; // eax
  LowProcess *v24; // ecx
  LowProcess *v25; // ecx
  int v26; // eax
  Actor *v27; // eax
  LowProcess_vtbl *v28; // edi
  TESObjectCELL *ParentCell; // edi
  float *v30; // eax
  CombatController *v31; // eax
  LowProcess_vtbl *v32; // edi
  double v33; // st7
  float *v34; // [esp+50h] [ebp-3Ch]
  TESObjectREFR *v35; // [esp+50h] [ebp-3Ch]
  int v36; // [esp+54h] [ebp-38h]
  char v37; // [esp+6Ah] [ebp-22h]
  char v38; // [esp+6Bh] [ebp-21h]
  float v39; // [esp+6Ch] [ebp-20h]
  float v40; // [esp+70h] [ebp-1Ch]
  float v41; // [esp+70h] [ebp-1Ch]
  float v42; // [esp+70h] [ebp-1Ch]
  float v43[3]; // [esp+74h] [ebp-18h] BYREF
  unsigned int v44; // [esp+88h] [ebp-4h]

  sub_674850(&ActorProcessManager_ptr, this);
  process = (#239 *)this->members.super.process;
  v8 = 0;
  if ( !process || (result = (*(UInt32 (__thiscall **)(#239 *))(*(_DWORD *)process + 8))(process), result != 2) )
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
      v13 = (int)v12->GetCurrentPackage(v12);
      if ( v13 )
      {
        if ( *(_BYTE *)(v13 + 0x20) == 0x12 )
        {
          if ( ((unsigned __int8 (__thiscall *)(LowProcess *))this->members.super.process->Unk_72)(this->members.super.process) )
            sub_5EAE70(this, 0, v2, v36);
        }
      }
    }
    v14 = (LowProcess_vtbl *)this->members.super.process->GetProcessLevel(this->members.super.process);
    sub_5E4B00(this);
    if ( (unsigned int)v14 <= 1 )
      sub_5E4FC0(this);
    MagicTarget_RemoveAllEffects(&this->members.magicTarget);
    if ( this->vtbl->super.IsDead((MobileObject *)this) )
    {
      sub_5E9E70((TESObjectREFR *)this);
      v5 = ((double (__thiscall *)(LowProcess *, Actor *))this->members.super.process->Unk_8E)(
             this->members.super.process,
             this);
      RunScripts((TESObjectREFR *)this, v3, v4, v5);
    }
    else if ( this->vtbl->super.super.IsDead((TESObjectREFR *)this, 0)
           && !this->members.super.process->GetProcessLevel(this->members.super.process) )
    {
      v5 = ((double (__thiscall *)(Actor *, int))this->vtbl->super.super.super.Unk_27)(this, 1);
    }
    sub_674550(v1, v3, v4, v5, (int)this, (int)v14);
    if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
    {
      if ( !sub_45A500(SaveLoad_CurrentSavegame) )
        sub_6765A0((int)&ActorProcessManager_ptr, (int)this);
      v15 = this->members.super.process;
      if ( v15 )
      {
        editorPackage = v15->editorPackage;
        if ( editorPackage )
        {
          if ( editorPackage->members.type == 5 )
            v15->editorPackProcedure = kProcedure_TRAVEL;
        }
      }
    }
    if ( this->members.DeadState == 6 )
    {
      Actor_HandleDeathSTate____(this, 0);
      ((void (__stdcall *)(_DWORD))this->members.super.process->SetUnk088)(0.0);
    }
    v17 = this->members.super.process;
    if ( v17 )
      v37 = ((int (__thiscall *)(LowProcess *))v17->GetUnk25C)(v17);
    else
      v37 = 0;
    v38 = 0;
    v18 = 0;
    v19 = (MiddleLowProcess *)FormHeapAlloc(0xA8u);
    v44 = 0;
    if ( v19 )
      v8 = MiddleLowProcess::MiddleLowProcess(v19);
    v20 = this->members.super.process;
    v44 = 0xFFFFFFFF;
    if ( !v20 )
      goto LABEL_53;
    v21 = (char *)v20->editorPackage;
    if ( !v21 || !sub_567770(v21) )
      goto LABEL_53;
    if ( (PlayerCharacter *)((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_F3)(this->members.super.process) == TESDataHandler_g_PlayerRef )
    {
      v14 = this->members.super.process->__vftable;
      v40 = TimeGlobals_GetGameHour(&TimeGlobals) - dbl_A2FAA0;
      ((void (__thiscall *)(LowProcess *, _DWORD))v14->SetCurHour)(this->members.super.process, LODWORD(v40));
LABEL_53:
      v8->Copy(v8, this->members.super.process);
      v24 = this->members.super.process;
      if ( v24 )
        ((void (__thiscall *)(LowProcess *, int))v24->Destructor)(v24, 1);
      this->members.super.process = v8;
      sub_673A90((int)this, 2, 1, 0, 0);
      if ( v38 && v18 )
      {
        v25 = this->members.super.process;
        v14 = v25->__vftable;
        v26 = ((int (__thiscall *)(LowProcess *, _DWORD, _DWORD, _DWORD, int))v25->GetUnk01E)(v25, 0, 0, 0, 1);
        ((void (__thiscall *)(LowProcess *, Actor *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, int))v14->Unk_89)(
          this->members.super.process,
          this,
          v18,
          0,
          LODWORD(v43[2]),
          0,
          v26);
      }
      else if ( v37 )
      {
        this->members.super.process->Unk_06(this->members.super.process, (UInt32)this, 0);
      }
      result = TESDataHandler;
      if ( TESDataHandler )
      {
        if ( !*(_BYTE *)(result + 0xCD4) )
        {
          if ( v37 )
            this->members.super.process->Unk_06(this->members.super.process, (UInt32)this, 0);
          if ( this->vtbl->IsInCombat(this, 1) )
          {
            if ( !sub_5E6CD0((TESObjectREFR *)this, 0) )
            {
              result = ((int (__thiscall *)(Actor *))this->vtbl->IsYielding)(this);
              if ( !(_BYTE)result )
              {
                result = (int)this->vtbl->GetCombatTarget(this);
                if ( result )
                {
                  if ( !this->vtbl->GetCombatTarget(this)[3].member.modlist.data
                    || (v27 = (Actor *)this->vtbl->GetCombatTarget(this), Actor::GetProcessLevel(v27)) )
                  {
                    result = (int)this->vtbl->GetCombatController(this);
                    if ( result )
                    {
                      v35 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
                      v31 = this->vtbl->GetCombatController(this);
                      result = (int)sub_6162D0(v31, v35);
                    }
                  }
                  else if ( (PlayerCharacter *)this->vtbl->GetCombatTarget(this) == TESDataHandler_g_PlayerRef
                         && (signed int)TESDataHandler_g_PlayerRef->unk110 <= dword_B37D18
                         && Actor::CanUSeDoor_(this) )
                  {
                    v28 = this->members.super.process->__vftable;
                    v41 = TimeGlobals_GetGameHour(&TimeGlobals) - dbl_A2FAA0;
                    ((void (__thiscall *)(LowProcess *, _DWORD))v28->SetCurHour)(
                      this->members.super.process,
                      LODWORD(v41));
                    ((void (__thiscall *)(LowProcess *, Actor *))this->members.super.process->Unk_64)(
                      this->members.super.process,
                      this);
                    this->vtbl->GetCombatTarget(this);
                    v39 = *(float *)&dword_A46C30;
                    ++TESDataHandler_g_PlayerRef->unk110;
                    if ( TESDataHandler_g_PlayerRef->lastActivatedLoadDoor )
                    {
                      ParentCell = TESObjectREFR_GetParentCell(TESDataHandler_g_PlayerRef->lastActivatedLoadDoor);
                      if ( TESObjectREFR_GetParentCell((TESObjectREFR *)this) == ParentCell )
                      {
                        v34 = TESDataHandler_g_PlayerRef->lastActivatedLoadDoor->vtbl->GetPos(TESDataHandler_g_PlayerRef->lastActivatedLoadDoor);
                        v30 = this->vtbl->super.super.GetPos(this);
                        sub_4121A0(v30, v43, v34);
                        v39 = sub_404C90(v43) / dbl_A3DDE0;
                      }
                    }
                    result = ((int (__stdcall *)(_DWORD))this->members.super.process->GetUnk028)(LODWORD(v39));
                  }
                  else
                  {
                    ((void (__thiscall *)(Actor *, _DWORD))this->vtbl->Unk_D0)(this, 0);
                    sub_5EAE70(this, (int)v8, (int)v14, v36);
                  }
                }
              }
            }
          }
          else if ( ((unsigned __int8 (__thiscall *)(Actor *))this->vtbl->super.super.super.Unk_1E)(this)
                 && BYTE2(this->members.unk0B4[5])
                 || (sub_5E3220(this) || sub_5E30A0((TESObjectREFR *)this))
                 && (result = (int)this->members.super.process->GetUnk02C(this->members.super.process),
                     (PlayerCharacter *)result == TESDataHandler_g_PlayerRef) )
          {
            v32 = this->members.super.process->__vftable;
            v42 = TimeGlobals_GetGameHour(&TimeGlobals) - dbl_A2FAA0;
            v33 = ((double (__thiscall *)(LowProcess *, _DWORD))v32->SetCurHour)(
                    this->members.super.process,
                    LODWORD(v42));
            sub_674550((char)v18, v3, v4, v33, (int)this, 2);
            sub_673A90((int)this, 2, 0, 0, 0);
          }
          BYTE2(this->members.unk0B4[5]) = 1;
        }
      }
      goto LABEL_87;
    }
    if ( !sub_5E6CD0((TESObjectREFR *)this, 0) && !this->vtbl->IsInCombat(this, 1) )
    {
      if ( !sub_5E6BA0(this) )
        sub_5EAE70(v22, (int)v8, (int)v14, v36);
      goto LABEL_53;
    }
    if ( !this->vtbl->GetCombatController(this) )
      v38 = 1;
    v18 = this->members.super.process->GetUnk02C(this->members.super.process);
    if ( sub_5E6CD0((TESObjectREFR *)this, 0) )
    {
      if ( v18 )
        goto LABEL_53;
      v23 = this->members.super.process->GetCurrentPackage(this->members.super.process);
      if ( v23 )
      {
        if ( v23->members.type == 0x10 )
        {
          if ( LOBYTE(v23[1].members.target) )
            v18 = sub_628140((int *)v23, (TESObjectREFR *)this);
        }
      }
    }
    if ( !v18 )
    {
      if ( this->vtbl->GetCombatTarget(this) )
        v18 = (TESObjectREFR *)this->vtbl->GetCombatTarget(this);
    }
    goto LABEL_53;
  }
LABEL_87:
  LOBYTE(result) = 1;
  return result;
}
