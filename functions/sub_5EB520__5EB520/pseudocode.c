int __thiscall sub_5EB520(Actor *this)
{
  char v1; // bp
  int v2; // edi
  double v3; // st5
  double v4; // st6
  double v5; // st7
  #239 *process; // ecx
  int result; // eax
  #239 *v9; // ecx
  BSShaderAccumulator *inited; // eax
  LowProcess *v11; // ecx
  int v12; // eax
  LowProcess *v13; // ecx
  TESPackage *editorPackage; // eax
  TESPackage *v15; // eax
  TESObjectCELL *ParentCell; // eax
  unsigned int v17; // edi
  LowProcess *v18; // ecx
  LowProcess *v19; // edi
  char v20; // bl
  TESForm *v21; // ebp
  char *v22; // ecx
  TESPackage *v23; // eax
  LowProcess *v24; // eax
  void (__thiscall *Copy)(BaseProcess *__hidden, BaseProcess *); // edx
  LowProcess *v26; // ecx
  LowProcess *v27; // ecx
  int v28; // eax
  LowProcess_vtbl *v29; // edi
  Actor *v30; // eax
  LowProcess_vtbl *v31; // edi
  TESObjectREFR **p_lastActivatedLoadDoor; // edi
  TESObjectCELL *v33; // ebx
  float *v34; // eax
  CombatController *v35; // eax
  LowProcess_vtbl *v36; // edi
  double v37; // st7
  LowProcess *v38; // [esp+50h] [ebp-3Ch]
  float *v39; // [esp+50h] [ebp-3Ch]
  TESObjectREFR *v40; // [esp+50h] [ebp-3Ch]
  int v41; // [esp+54h] [ebp-38h]
  char v42; // [esp+6Bh] [ebp-21h]
  float v43; // [esp+6Ch] [ebp-20h]
  float v44; // [esp+6Ch] [ebp-20h]
  float v45; // [esp+6Ch] [ebp-20h]
  float v46; // [esp+6Ch] [ebp-20h]
  float v47[3]; // [esp+74h] [ebp-18h] BYREF
  unsigned int v48; // [esp+88h] [ebp-4h]

  process = (#239 *)this->members.super.process;
  if ( !process || (result = (*(UInt32 (__thiscall **)(#239 *))(*(_DWORD *)process + 8))(process), result != 3) )
  {
    v9 = (#239 *)this->members.super.process;
    if ( v9 )
    {
      if ( !(*(UInt32 (__thiscall **)(#239 *))(*(_DWORD *)v9 + 8))(v9) )
      {
        inited = InitBSShaderAccumulator();
        if ( inited )
          sub_7AD1E0(inited, this->members.super.super.super.refID);
      }
    }
    v11 = this->members.super.process;
    if ( v11 )
    {
      v12 = (int)v11->GetCurrentPackage(v11);
      if ( v12 )
      {
        if ( *(_BYTE *)(v12 + 0x20) == 0x12 )
        {
          if ( ((unsigned __int8 (__thiscall *)(LowProcess *))this->members.super.process->Unk_72)(this->members.super.process) )
            sub_5EAE70(this, 0x12, v2, v41);
        }
      }
    }
    sub_674850(&ActorProcessManager_ptr, this);
    if ( this->members.DeadState == 6 )
    {
      Actor_HandleDeathSTate____(this, 0);
      v5 = 0.0;
      ((void (__stdcall *)(_DWORD))this->members.super.process->SetUnk088)(0.0);
    }
    v13 = this->members.super.process;
    if ( v13 )
    {
      editorPackage = v13->editorPackage;
      if ( editorPackage )
      {
        if ( editorPackage->members.type == 0x12 && (PlayerCharacter *)v13->GetUnk02C(v13) != TESDataHandler_g_PlayerRef )
          sub_5EAE70(this, 0x12, v2, v41);
      }
    }
    v15 = this->members.super.process->editorPackage;
    if ( v15 )
    {
      if ( v15->members.type == 0xF && !sub_5E6C60(this) )
      {
        if ( !TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef)
          || (ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef),
              !TESObjectCELL_IsInterior(ParentCell)) )
        {
          sub_5EAE70(this, 0x12, v2, v41);
        }
      }
    }
    v17 = this->members.super.process->GetProcessLevel(this->members.super.process);
    sub_5E4B00(this);
    if ( v17 <= 1 )
      sub_5E4FC0(this);
    MagicTarget_RemoveAllEffects(&this->members.magicTarget);
    if ( !*(_BYTE *)(TESDataHandler + 0xCD4) && !sub_45A500(SaveLoad_CurrentSavegame) )
      sub_6765A0((int)&ActorProcessManager_ptr, (int)this);
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
    sub_674550(v1, v3, v4, v5, (int)this, v17);
    v18 = this->members.super.process;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v42 = v18 ? ((int (__thiscall *)(LowProcess *))v18->GetUnk25C)(v18) : 0;
    v22 = (char *)this->members.super.process->editorPackage;
    if ( v22 )
    {
      if ( sub_567770(v22) )
      {
        if ( sub_5E6CD0((TESObjectREFR *)this, 0) )
        {
          v20 = 1;
          v21 = this->vtbl->GetCombatTarget(this);
        }
        v23 = this->members.super.process->editorPackage;
        if ( (!v23 || v23->members.type != 0xF) && !this->vtbl->GetCombatController(this) )
          sub_5EAE70(this, v20, 0, v41);
      }
    }
    v24 = (LowProcess *)FormHeapAlloc(0x90u);
    v48 = 0;
    if ( v24 )
      v19 = LowProcess::LowProcess(v24);
    Copy = v19->Copy;
    v38 = this->members.super.process;
    v48 = 0xFFFFFFFF;
    Copy(v19, v38);
    v26 = this->members.super.process;
    if ( v26 )
      ((void (__thiscall *)(LowProcess *, int))v26->Destructor)(v26, 1);
    this->members.super.process = v19;
    v19->Unk_2D(v19, (UInt32)this);
    sub_673A90((int)this, 3, 1, 0, 0);
    if ( v20 )
    {
      v27 = this->members.super.process;
      v19 = (LowProcess *)v27->__vftable;
      v28 = ((int (__thiscall *)(LowProcess *, _DWORD, _DWORD, _DWORD, int))v27->GetUnk01E)(v27, 0, 0, 0, 1);
      ((void (__thiscall *)(LowProcess *, Actor *, TESForm *, _DWORD, _DWORD, _DWORD, int))v19[3].avDamageModifiers.magicka)(
        this->members.super.process,
        this,
        v21,
        0,
        LODWORD(v47[2]),
        0,
        v28);
    }
    else if ( v42 )
    {
      this->members.super.process->Unk_06(this->members.super.process, (UInt32)this, 0);
    }
    result = TESDataHandler;
    if ( TESDataHandler )
    {
      if ( !*(_BYTE *)(result + 0xCD4) )
      {
        if ( v42 )
          this->members.super.process->Unk_06(this->members.super.process, (UInt32)this, 0);
        if ( !this->vtbl->IsInCombat(this, 1) )
        {
          if ( ((unsigned __int8 (__thiscall *)(Actor *))this->vtbl->super.super.super.Unk_1E)(this)
            && BYTE2(this->members.unk0B4[5])
            || (sub_5E3220(this) || sub_5E30A0((TESObjectREFR *)this))
            && (result = (int)this->members.super.process->GetUnk02C(this->members.super.process),
                (PlayerCharacter *)result == TESDataHandler_g_PlayerRef) )
          {
            v36 = this->members.super.process->__vftable;
            v46 = TimeGlobals_GetGameHour(&TimeGlobals) - dbl_A2F928;
            v37 = ((double (__thiscall *)(LowProcess *, _DWORD))v36->SetCurHour)(
                    this->members.super.process,
                    LODWORD(v46));
            sub_674550((char)v21, v3, v4, v37, (int)this, 3);
            sub_673A90((int)this, 3, 0, 0, 0);
          }
          goto LABEL_83;
        }
        if ( (PlayerCharacter *)((int (__thiscall *)(LowProcess *))this->members.super.process->Unk_F3)(this->members.super.process) == TESDataHandler_g_PlayerRef )
        {
          v29 = this->members.super.process->__vftable;
          v43 = TimeGlobals_GetGameHour(&TimeGlobals) - dbl_A2FAA0;
          result = ((int (__thiscall *)(LowProcess *, _DWORD))v29->SetCurHour)(
                     this->members.super.process,
                     LODWORD(v43));
        }
        else
        {
          if ( sub_5E6CD0((TESObjectREFR *)this, 0)
            || this->vtbl->IsYielding(this)
            || !this->vtbl->GetCombatTarget(this) )
          {
            if ( this->vtbl->GetCombatController(this) )
            {
              v40 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
              v35 = this->vtbl->GetCombatController(this);
              result = (int)sub_6162D0(v35, v40);
              goto LABEL_83;
            }
          }
          else
          {
            if ( (PlayerCharacter *)this->vtbl->GetCombatTarget(this) == TESDataHandler_g_PlayerRef
              && (signed int)TESDataHandler_g_PlayerRef->unk110 <= dword_B37D18
              && Actor::CanUSeDoor_(this) )
            {
              if ( this->vtbl->GetCombatTarget(this)[3].member.modlist.data )
              {
                v30 = (Actor *)this->vtbl->GetCombatTarget(this);
                if ( !Actor::GetProcessLevel(v30) )
                {
                  v31 = this->members.super.process->__vftable;
                  v44 = TimeGlobals_GetGameHour(&TimeGlobals) - dbl_A2F928;
                  ((void (__thiscall *)(LowProcess *, _DWORD))v31->SetCurHour)(
                    this->members.super.process,
                    LODWORD(v44));
                  this->vtbl->GetCombatTarget(this);
                  v45 = *(float *)&dword_A46C30;
                  ++TESDataHandler_g_PlayerRef->unk110;
                  p_lastActivatedLoadDoor = &TESDataHandler_g_PlayerRef->lastActivatedLoadDoor;
                  if ( *p_lastActivatedLoadDoor )
                  {
                    v33 = TESObjectREFR_GetParentCell((TESObjectREFR *)this);
                    if ( v33 == TESObjectREFR_GetParentCell(*p_lastActivatedLoadDoor) )
                    {
                      v39 = TESDataHandler_g_PlayerRef->lastActivatedLoadDoor->vtbl->GetPos(TESDataHandler_g_PlayerRef->lastActivatedLoadDoor);
                      v34 = this->vtbl->super.super.GetPos(this);
                      sub_4121A0(v34, v47, v39);
                      v45 = sub_404C90(v47) / dbl_A3DDE0;
                    }
                  }
                  result = ((int (__stdcall *)(_DWORD))this->members.super.process->GetUnk028)(LODWORD(v45));
                  goto LABEL_83;
                }
              }
            }
            ((void (__thiscall *)(Actor *, _DWORD))this->vtbl->Unk_D0)(this, 0);
          }
          sub_5EAE70(this, v20, (int)v19, v41);
        }
LABEL_83:
        BYTE2(this->members.unk0B4[5]) = 1;
      }
    }
  }
  LOBYTE(result) = 1;
  return result;
}
