void __thiscall sub_5E9E70(TESObjectREFR *this)
{
  TESForm *v2; // ebx
  TESForm *v3; // edi
  bool v4; // zf
  Actor *v5; // ecx
  TESObjectREFR *v6; // ebx
  BSExtraDataVtbl *Owner; // edi
  char CompareTo; // al
  TESObjectREFR *v9; // eax
  int v10; // ecx
  int v11; // edi
  TESForm *v12; // eax
  TESForm *v13; // ebx
  TESForm *v14; // ebx
  TESForm *v15; // edi
  int v16; // ecx

  if ( !byte_B14E98 )
    goto LABEL_42;
  v2 = 0;
  v3 = this->vtbl->GetBaseForm(this);
  if ( v3 )
  {
    if ( this->vtbl->IsActor(this) )
      v2 = v3;
  }
  if ( ((int)v2[1].member.modlist.data & 2) == 0 )
  {
LABEL_42:
    if ( *((_BYTE *)this + 0xFC) )
    {
LABEL_39:
      Actor_HandleDeathSTate____((Actor *)this, 2u);
      return;
    }
    v4 = *((_BYTE *)this + 0x80) == 0;
    *((_BYTE *)this + 0xFC) = 1;
    if ( v4 || (v5 = *((Actor **)this + 0x1F)) == 0 || !Actor_IsNPC(v5) )
    {
LABEL_23:
      if ( *((PlayerCharacter **)this + 0x1F) == TESDataHandler_g_PlayerRef )
      {
        v11 = ((int (__thiscall *)(TESObjectREFR *))this->vtbl->GetTemplateForm)(this);
        v12 = this->vtbl->GetBaseForm(this);
        v13 = v12;
        if ( v11 )
          goto LABEL_43;
        if ( v12 )
        {
          if ( this->vtbl->IsActor(this) )
            v11 = (int)v13;
        }
        if ( v11 )
        {
LABEL_43:
          if ( !*(_DWORD *)(v11 + 0x40) && !*(_DWORD *)(v11 + 0x3C) )
          {
            v14 = 0;
            v15 = this->vtbl->GetBaseForm(this);
            if ( v15 )
            {
              if ( this->vtbl->IsActor(this) )
                v14 = v15;
            }
            v11 = (int)v14;
          }
          if ( v11 )
            TESActorBaseData_SetSharedPlayerFactionFlags(0);
        }
      }
      Script_AddEventToExtraScript(*((_DWORD *)this + 0x1F), &this->member.baseExtraList, 0x10);
      v16 = *((_DWORD *)this + 0x16);
      if ( v16 )
      {
        (*(void (__stdcall **)(float))(*(_DWORD *)v16 + 0x364))(flt_A32048);
        (*(void (__thiscall **)(_DWORD, TESObjectREFR *, _DWORD, _DWORD, int))(**((_DWORD **)this + 0x16) + 0x370))(
          *((_DWORD *)this + 0x16),
          this,
          0,
          0,
          0x7F);
      }
      goto LABEL_39;
    }
    v6 = this;
    Owner = TESObjectREFR_GetOwner(this);
    if ( this->vtbl->GetBaseForm(this)->member.type == kFormType_Creature )
    {
      if ( !Owner )
        goto LABEL_19;
    }
    else if ( !Owner )
    {
      ((void (__thiscall *)(TESObjectREFR *, _DWORD))this->vtbl[1].super.Unk_27)(this, *((_DWORD *)this + 0x1F));
      goto LABEL_23;
    }
    CompareTo = (char)Owner->CompareTo;
    if ( CompareTo == 0x23 )
    {
      sub_675220(Owner);
LABEL_18:
      v6 = v9;
      goto LABEL_19;
    }
    if ( CompareTo == 6 )
    {
      v9 = sub_675290((int)&ActorProcessManager_ptr, (int)Owner);
      goto LABEL_18;
    }
LABEL_19:
    Script_AddEventToExtraScript(*((_DWORD *)this + 0x1F), &this->member.baseExtraList, 0x20);
    if ( v6 )
    {
      v10 = *((_DWORD *)this + 0x1F);
      if ( v10 )
        (*(void (__thiscall **)(int, TESObjectREFR *, TESObjectREFR *, unsigned int))(*(_DWORD *)v10 + 0x248))(
          v10,
          this,
          v6,
          0xFFFFFFFF);
    }
    *((_BYTE *)this + 0x80) = 0;
    goto LABEL_23;
  }
}
