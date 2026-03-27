double __thiscall sub_568BB0(int this, TESObjectREFR *arg0)
{
  TargetData *v4; // ecx
  int TargetType; // eax
  PlayerCharacter *objectCode; // edi
  int v7; // eax
  float *v8; // eax
  double v9; // st7
  TESObjectCELL *ParentCell; // eax
  TESForm *form; // edi
  ObjectType v12; // eax
  float *v13; // eax
  TESObjectCELL *v14; // eax
  ObjectType v15; // eax
  char v16; // bl
  float *v17; // [esp-4h] [ebp-24h]
  float *v18; // [esp-4h] [ebp-24h]
  float a3; // [esp+0h] [ebp-20h]
  float a3a; // [esp+0h] [ebp-20h]
  float *v21; // [esp+4h] [ebp-1Ch]
  float *v22; // [esp+4h] [ebp-1Ch]
  float a5; // [esp+8h] [ebp-18h]
  float a5a; // [esp+8h] [ebp-18h]

  v4 = *(TargetData **)(this + 0x28);
  if ( v4 )
  {
    TargetType = TargetData::GetTargetType(v4);
    objectCode = 0;
    if ( TargetType )
    {
      v7 = TargetType - 1;
      if ( v7 )
      {
        if ( v7 == 1 )
        {
          sub_569E80(*(TargetData **)(this + 0x28));
          a5 = fTargetSearchRadius;
          v8 = arg0->vtbl->GetPos(arg0);
          v9 = fTargetSearchRadius;
          v21 = v8;
          a3 = fTargetSearchRadius;
          v17 = arg0->vtbl->GetPos(arg0);
          ParentCell = TESObjectREFR_GetParentCell(arg0);
          sub_446B90(ParentCell, v17, a3, v21, a5, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_567730, 0);
          objectCode = (PlayerCharacter *)dword_B3A3C4;
          dword_B3A3C4 = 0;
          goto LABEL_17;
        }
LABEL_30:
        sub_5E03C0(arg0, (int)objectCode);
        return v9;
      }
      form = 0;
      if ( sub_569E70(*(TargetData **)(this + 0x28)).form )
      {
        v12.form = sub_569E70(*(TargetData **)(this + 0x28)).form;
        if ( v12.form->vtbl->super.Unk_29((TESForm *)v12.objectCode) )
          form = (TESForm *)sub_569E70(*(TargetData **)(this + 0x28)).form;
      }
      if ( TESDataHandler_g_PlayerRef
        && form == TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef) )
      {
        objectCode = TESDataHandler_g_PlayerRef;
      }
      else
      {
        a5a = fTargetSearchRadius;
        v13 = arg0->vtbl->GetPos(arg0);
        v9 = fTargetSearchRadius;
        v22 = v13;
        a3a = fTargetSearchRadius;
        v18 = arg0->vtbl->GetPos(arg0);
        v14 = TESObjectREFR_GetParentCell(arg0);
        sub_446B90(v14, v18, a3a, v22, a5a, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_567730, (int)form);
        objectCode = (PlayerCharacter *)dword_B3A3C4;
        dword_B3A3C4 = 0;
      }
    }
    else
    {
      v15.form = sub_569E60(*(TargetData **)(this + 0x28)).form;
      objectCode = (PlayerCharacter *)v15.objectCode;
      if ( !v15.objectCode )
        goto LABEL_30;
      if ( (*(_DWORD *)(v15.objectCode + 8) & 0x20) != 0 && v15.objectCode != 0xFFFFFFBC )
        objectCode = (PlayerCharacter *)ExtraDataList_GetReferencePointer((ExtraDataList *)(v15.objectCode + 0x44));
    }
LABEL_17:
    if ( objectCode
      && objectCode->vtbl->super.super.super.IsActor((TESObjectREFR *)objectCode)
      && (*(_DWORD *)(this + 0x1C) & 0x800) == 0 )
    {
      v16 = *(_BYTE *)(this + 0x20);
      if ( v16 == 1 || v16 == 7 )
      {
        GetExtraDataFollower();
        if ( objectCode == TESDataHandler_g_PlayerRef
          && (PlayerCharacter *)(*((int (__thiscall **)(TESObjectREFRVtbl *))arg0[1].vtbl->super.super.InitializeComponent
                                 + 0xF4))(arg0[1].vtbl) != TESDataHandler_g_PlayerRef
          && !sub_663A60((int)arg0)
          && sub_663A00() > dword_B36A80 )
        {
          (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, unsigned int))arg0[1].vtbl->super.super.InitializeComponent
           + 0x62))(
            arg0[1].vtbl,
            arg0,
            0xFFFFFFFF);
          v9 = flt_A30634;
          GameUI_QueueMessage((const char *)dword_B394E8, 0, 1u, flt_A30634);
          sub_5E03C0(arg0, (int)objectCode);
          return v9;
        }
        sub_424C50(&objectCode->super.super.super.super.baseExtraList, (int)arg0);
      }
      else if ( v16 == 2 )
      {
        sub_424C50(&arg0->member.baseExtraList, (int)objectCode);
        sub_5E03C0(arg0, (int)objectCode);
        return v9;
      }
    }
    goto LABEL_30;
  }
  return v9;
}
