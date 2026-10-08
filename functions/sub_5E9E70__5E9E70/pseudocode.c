void __thiscall sub_5E9E70(TESObjectREFR *this)
{
  TESForm *v2; // ebx
  TESForm *v3; // edi
  bool v4; // zf
  Actor *v5; // ecx
  TESObjectREFR *v6; // ebx
  TESForm *Owner; // edi
  TESForm::FormType type; // al
  TESObjectREFR *v9; // eax
  int v10; // ecx
  int v11; // edi
  TESForm *v12; // eax
  TESForm *v13; // ebx
  TESForm *v14; // ebx
  TESForm *v15; // edi
  int v16; // ecx

  if ( !byte_B14E98 ) /*0x5e9e70*/
    goto LABEL_42; /*0x5e9e70*/
  v2 = 0; /*0x5e9e86*/
  v3 = this->vtbl->GetBaseForm(this); /*0x5e9e8a*/
  if ( v3 ) /*0x5e9e8e*/
  {
    if ( this->vtbl->IsActor(this) ) /*0x5e9e9a*/
      v2 = v3; /*0x5e9ea0*/
  }
  if ( ((int)v2[1].member.modlist.data & 2) == 0 ) /*0x5e9ea9*/
  {
LABEL_42:
    if ( *((_BYTE *)this + 0xFC) ) /*0x5e9eaf*/
    {
LABEL_39:
      Actor_HandleDeathState((Actor *)this, 2u); /*0x5ea03e*/
      return; /*0x5ea042*/
    }
    v4 = *((_BYTE *)this + 0x80) == 0; /*0x5e9ebc*/
    *((_BYTE *)this + 0xFC) = 1; /*0x5e9ec3*/
    if ( v4 || (v5 = *((Actor **)this + 0x1F)) == 0 || !Actor_IsNPC(v5) ) /*0x5e9edb*/
    {
LABEL_23:
      if ( *((PlayerCharacter **)this + 0x1F) == reference ) /*0x5e9f7f*/
      {
        v11 = ((int (__thiscall *)(TESObjectREFR *))this->vtbl->GetTemplateForm)(this); /*0x5e9f8f*/
        v12 = this->vtbl->GetBaseForm(this); /*0x5e9f99*/
        v13 = v12; /*0x5e9f9d*/
        if ( v11 ) /*0x5e9f9f*/
          goto LABEL_43; /*0x5e9f9f*/
        if ( v12 ) /*0x5e9fa3*/
        {
          if ( this->vtbl->IsActor(this) ) /*0x5e9faf*/
            v11 = (int)v13; /*0x5e9fb5*/
        }
        if ( v11 ) /*0x5e9fb9*/
        {
LABEL_43:
          if ( !*(_DWORD *)(v11 + 0x40) && !*(_DWORD *)(v11 + 0x3C) ) /*0x5e9fc1*/
          {
            v14 = 0; /*0x5e9fd1*/
            v15 = this->vtbl->GetBaseForm(this); /*0x5e9fd5*/
            if ( v15 ) /*0x5e9fd9*/
            {
              if ( this->vtbl->IsActor(this) ) /*0x5e9fe5*/
                v14 = v15; /*0x5e9feb*/
            }
            v11 = (int)v14; /*0x5e9fed*/
          }
          if ( v11 ) /*0x5e9ff1*/
            TESActorBaseData_SetSharedPlayerFactionFlags(0); /*0x5e9ff8*/
        }
      }
      Script_AddEventToExtraScript(*((_DWORD *)this + 0x1F), &this->member.baseExtraList, 0x10); /*0x5ea007*/
      v16 = *((_DWORD *)this + 0x16); /*0x5ea00c*/
      if ( v16 ) /*0x5ea014*/
      {
        (*(void (__stdcall **)(float))(*(_DWORD *)v16 + 0x364))(flt_A32048); /*0x5ea028*/
        (*(void (__thiscall **)(_DWORD, TESObjectREFR *, _DWORD, _DWORD, int))(**((_DWORD **)this + 0x16) + 0x370))( /*0x5ea03c*/
          *((_DWORD *)this + 0x16),
          this,
          0,
          0,
          0x7F);
      }
      goto LABEL_39; /*0x5ea03c*/
    }
    v6 = this; /*0x5e9eea*/
    Owner = TESObjectREFR_GetOwner(this); /*0x5e9ef3*/
    if ( this->vtbl->GetBaseForm(this)->member.type == kFormType_Creature ) /*0x5e9f03*/
    {
      if ( !Owner ) /*0x5e9f1d*/
        goto LABEL_19; /*0x5e9f1d*/
    }
    else if ( !Owner ) /*0x5e9f07*/
    {
      ((void (__thiscall *)(TESObjectREFR *, _DWORD))this->vtbl[1].super.Unk_27)(this, *((_DWORD *)this + 0x1F)); /*0x5e9f17*/
      goto LABEL_23; /*0x5e9f19*/
    }
    type = Owner->member.type; /*0x5e9f1f*/
    if ( type == kFormType_NPC ) /*0x5e9f24*/
    {
      v9 = (TESObjectREFR *)sub_675220((int)&qword_B3BB2C[0x75], (int)Owner); /*0x5e9f2c*/
LABEL_18:
      v6 = v9; /*0x5e9f42*/
      goto LABEL_19; /*0x5e9f42*/
    }
    if ( type == kFormType_Faction ) /*0x5e9f35*/
    {
      v9 = (TESObjectREFR *)sub_675290((int)&qword_B3BB2C[0x75], (int)Owner); /*0x5e9f3d*/
      goto LABEL_18; /*0x5e9f3d*/
    }
LABEL_19:
    Script_AddEventToExtraScript(*((_DWORD *)this + 0x1F), &this->member.baseExtraList, 0x20); /*0x5e9f44*/
    if ( v6 ) /*0x5e9f58*/
    {
      v10 = *((_DWORD *)this + 0x1F); /*0x5e9f5a*/
      if ( v10 ) /*0x5e9f5f*/
        (*(void (__thiscall **)(int, TESObjectREFR *, TESObjectREFR *, unsigned int))(*(_DWORD *)v10 + 0x248))( /*0x5e9f6d*/
          v10,
          this,
          v6,
          0xFFFFFFFF);
    }
    *((_BYTE *)this + 0x80) = 0; /*0x5e9f6f*/
    goto LABEL_23; /*0x5e9f6f*/
  }
}
