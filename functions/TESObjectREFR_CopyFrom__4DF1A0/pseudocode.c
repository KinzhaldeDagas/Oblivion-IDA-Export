void __thiscall TESObjectREFR_CopyFrom(TESChildCELL *this, TESChildCELL *a2)
{
  double v2; // st5
  double v3; // st6
  TESObjectREFR *v5; // eax
  TESObjectREFR *v6; // ebx
  char IsPersistent; // al
  int v8; // esi
  double v9; // st7
  double scale; // st6
  signed __int16 ExtraCount; // si
  _DWORD *v12; // esi
  _DWORD *v13; // eax
  float *v14; // esi
  int v15; // eax
  NiAVObject *v16; // eax
  TESObjectCELL *parentCell; // ecx
  TESObjectCELL *v18; // ecx
  BSExtraData *Teleport; // esi
  BSExtraData *v20; // eax
  BSExtraDataVtbl *v21; // edi
  BSExtraDataVtbl *v22; // edi
  ExtraDataList *v23; // edi
  _BYTE *v24; // ecx
  void (__thiscall **vtbl)(TESChildCELL *, int); // esi
  int v26; // eax
  TESObjectCELL *v27; // eax
  int v28; // eax
  int v29; // ebx
  _DWORD *v30; // eax
  int v31; // eax
  void *v32; // eax
  bool v33; // al
  int v34; // eax
  NiAVObject *v35; // eax
  NiAVObject *v36; // eax
  NiNode *v37; // eax
  BSExtraData *v38; // eax
  TESObjectREFR *v39; // eax
  TESObjectREFR *v40; // esi
  TeleportData *TeleportData; // eax
  int v42; // [esp+24h] [ebp-3Ch]
  TESObjectREFR *v43; // [esp+38h] [ebp-28h]
  float v44[9]; // [esp+3Ch] [ebp-24h] BYREF
  float a2b; // [esp+64h] [ebp+4h]
  char a2a; // [esp+64h] [ebp+4h]

  v5 = (TESObjectREFR *)OblivionDynamicCast(
                          a2,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  v6 = v5;
  v43 = v5;
  if ( v5 )
  {
    IsPersistent = TESObjectREFR_IsPersistent_(v5);
    TESObjectREFR_SetPersistance(this, v2, v3, IsPersistent);
    TESForm_CopyAllComponentsFrom((TESForm *)this, (TESForm *)a2);
    if ( (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this) )
    {
      v8 = (int)v6->vtbl->GetBaseForm(v6);
      if ( (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this) != v8 )
        (*((void (__thiscall **)(TESChildCELL *, _DWORD))this->vtbl + 0x54))(this, 0);
    }
    v9 = *((float *)this + 0xE);
    qmemcpy(this + 7, &v6->member.baseForm, 0x1Cu);
    scale = v6->member.scale;
    if ( scale != v9 && !(*((unsigned __int8 (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this)
      || *(_BYTE *)((*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this) + 4) == 0x22
      && (ExtraCount = ExtraDataList_GetExtraCount(&v6->member.baseExtraList),
          ExtraDataList_GetExtraCount((ExtraDataList *)(this + 0x11)) != ExtraCount) )
    {
      (*((void (__thiscall **)(TESChildCELL *, _DWORD))this->vtbl + 0x54))(this, 0);
    }
    if ( (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this) )
    {
      v12 = (_DWORD *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5D))(this);
      v13 = (_DWORD *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this);
      v13[0x15] = *v12;
      v13[0x16] = v12[1];
      v13[0x17] = v12[2];
      v14 = sub_4D7AF0((float *)this, v44);
      qmemcpy((void *)((*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this) + 0x30), v14, 0x24u);
      v15 = (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this);
      sub_897A20(v15, 1);
      v9 = 0.0;
      v16 = (NiAVObject *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this);
      NiAVObject_UpdateNiAVObject(v16, 0.0, 1);
    }
    parentCell = v6->member.parentCell;
    if ( parentCell )
    {
      sub_4D35D0(parentCell, v2, scale, v9, (TESObjectREFR *)this);
      if ( !(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this) )
        sub_434020(ioManager, v2, scale, v9, 5);
    }
    else
    {
      v18 = *((TESObjectCELL **)this + 0x10);
      if ( v18 )
        sub_4CECD0(v18, (TESObjectREFR *)this);
    }
    Teleport = (BSExtraData *)ExtraDataList_GetTeleport((ExtraDataList *)(this + 0x11));
    if ( Teleport )
    {
      v20 = (BSExtraData *)ExtraDataList_GetTeleport(&v6->member.baseExtraList);
      if ( !v20 || (v21 = sub_42B410(v20), v21 != sub_42B410(Teleport)) )
      {
        v22 = sub_42B410(Teleport);
        sub_41F5E0(&v22[8].CompareTo);
        (*((void (__thiscall **)(BSExtraDataVtbl *, int))v22->Destructor + 0x11))(v22, 0x100000);
        TeleportData::SetLinkedDoor((TeleportData *)Teleport, 0);
      }
    }
    v23 = (ExtraDataList *)(this + 0x11);
    BaseExtraList_Copy((ExtraDataList *)(this + 0x11), &v6->member.baseExtraList);
    sub_4DB520((MobileObject *)this, v6->member.scale);
    if ( v6->vtbl->GetNiNode(v6) )
    {
      if ( (*(_DWORD *)(this + 2) & 0x4000) != 0 )
      {
        v24 = *((_BYTE **)this + 7);
        if ( v24 )
        {
          if ( v24[4] == 0x1E )
          {
            vtbl = (void (__thiscall **)(TESChildCELL *, int))this->vtbl;
            v26 = (*(int (__thiscall **)(_BYTE *, TESChildCELL *, _DWORD))(*(_DWORD *)v24 + 0xEC))(v24, this, 0);
            vtbl[0x54](this, v26);
          }
        }
      }
      if ( !(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this)
        && (v27 = *((TESObjectCELL **)this + 0x10)) != 0
        && TESObjectCELL_IsProcessLevel_LowHigh(v27, 0) )
      {
        sub_441EF0((int)TES, (TESObjectREFR *)this, *((_DWORD **)this + 0x10), 0, 0);
      }
      else
      {
        v28 = *((_DWORD *)this + 7);
        if ( !v28 || *(_BYTE *)(v28 + 4) != 0x1E )
        {
          v29 = (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x53))(this);
          v30 = (_DWORD *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5D))(this);
          *(_DWORD *)(v29 + 0x54) = *v30;
          *(_DWORD *)(v29 + 0x58) = v30[1];
          *(_DWORD *)(v29 + 0x5C) = v30[2];
          qmemcpy((void *)(v29 + 0x30), sub_4D7AF0((float *)this, v44), 0x24u);
          a2b = fabs(TESObjectREFR_GetScale((TESObjectREFR *)this));
          *(float *)(v29 + 0x60) = a2b;
          if ( v43->vtbl->GetNiNode(v43)->members.super.m_parent )
          {
            v31 = (int)v43->vtbl->GetNiNode(v43);
            (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(v31 + 0x1C) + 0x84))(
              *(_DWORD *)(v31 + 0x1C),
              v29,
              0);
          }
        }
      }
      if ( (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this) )
      {
        if ( *(_BYTE *)((*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this) + 4) == 0x1A )
        {
          v42 = (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this);
          v32 = (void *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this);
          sub_4B1600(v32, (TESObjectREFR *)this, v42);
        }
      }
      v23 = (ExtraDataList *)(this + 0x11);
      v33 = sub_41F830((ExtraDataList *)(this + 0x11), 8);
      sub_4DE460(this, COERCE_FLOAT(v33), 1);
      v34 = (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this);
      sub_897A20(v34, 1);
      v35 = (NiAVObject *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this);
      NiAVObject_UpdateNiAVObject(v35, 0.0, 1);
      v36 = (NiAVObject *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this);
      NiAVObject_InitializePropertyState(v36);
      v37 = (NiNode *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this);
      NiNode_UpdateDynamicEffectState(v37);
    }
    else
    {
      (*((void (__thiscall **)(TESChildCELL *, _DWORD))this->vtbl + 0x54))(this, 0);
    }
    v38 = (BSExtraData *)ExtraDataList_GetTeleport(v23);
    if ( v38 )
    {
      if ( (*(_DWORD *)(this + 2) & 0x4000) == 0 )
      {
        v39 = (TESObjectREFR *)sub_42B410(v38);
        v40 = v39;
        if ( !v39 )
        {
          sub_4D76D0(this);
          return;
        }
        if ( !TESObjectREFR_IsPersistent_(v39) )
          TESObjectREFR_SetPersistance((TESChildCELL *)v40, v2, scale, 1);
        TeleportData = ExtraDataList_GetTeleport(&v40->member.baseExtraList);
        if ( !TeleportData )
          TeleportData = TESObjectREFR::GetTeleportData(v40);
        TeleportData::SetLinkedDoor(TeleportData, (TESObjectREFR *)this);
        a2a = 0;
        if ( sub_41E690(v23) )
        {
          if ( sub_41E690(&v40->member.baseExtraList) )
          {
            sub_41F5D0(&v40->member.baseExtraList.vtbl);
            a2a = 1;
          }
        }
        if ( ExtraDataList_GetOwner(v23) && ExtraDataList_GetOwner(&v40->member.baseExtraList) )
        {
          sub_4DB900((char *)v40);
        }
        else if ( !a2a )
        {
          return;
        }
        PrintError("Conflicting shared data removed from linked door reference.");
      }
    }
  }
}
