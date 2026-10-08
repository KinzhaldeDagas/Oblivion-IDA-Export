//
// GPU static-world lifecycle audit 2026-09-27: CopyFrom ABI supplies destination ECX and source reference, not a cell argument. A mark-only observer cannot infer/dereference a stable target cell from those raw values; unqualified resident ownership invalidation is conservative until reference-to-cell ownership is separately proved.
void __thiscall TESObjectREFR_CopyFrom(TESChildCELL *this, TESChildCELL *a2)
{
  double v2; // st5
  TESObjectREFR *v4; // eax
  TESObjectREFR *v5; // ebx
  char IsPersistent; // al
  int v7; // esi
  double v8; // st7
  double scale; // st6
  signed __int16 ExtraCount; // si
  _DWORD *v11; // esi
  _DWORD *v12; // eax
  float *v13; // esi
  int v14; // eax
  NiAVObject *v15; // eax
  TESObjectCELL *parentCell; // ecx
  TESObjectCELL *v17; // ecx
  TeleportData *Teleport; // esi
  TeleportData *v19; // eax
  TESObjectREFR *v20; // edi
  TESObjectREFR *LinkedDoor; // edi
  ExtraDataList *v22; // edi
  _BYTE *v23; // ecx
  void (__thiscall **vtbl)(TESChildCELL *, int); // esi
  int v25; // eax
  TESObjectCELL *v26; // eax
  int v27; // eax
  int v28; // ebx
  _DWORD *v29; // eax
  int v30; // eax
  TESObjectLIGH_DecodedLayout *v31; // eax
  bool v32; // al
  int v33; // eax
  NiAVObject *v34; // eax
  NiAVObject *v35; // eax
  NiNode *v36; // eax
  TeleportData *v37; // eax
  TESObjectREFR *v38; // eax
  TESObjectREFR *v39; // esi
  TeleportData *TeleportData; // eax
  NiNode *v41; // [esp+24h] [ebp-3Ch]
  TESObjectREFR *v42; // [esp+38h] [ebp-28h]
  float v43[9]; // [esp+3Ch] [ebp-24h] BYREF
  float a2b; // [esp+64h] [ebp+4h]
  char a2a; // [esp+64h] [ebp+4h]

  v4 = (TESObjectREFR *)OblivionDynamicCast( /*0x4df1bb*/
                          a2,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  v5 = v4; /*0x4df1c0*/
  v42 = v4; /*0x4df1c7*/
  if ( v4 ) /*0x4df1cb*/
  {
    IsPersistent = TESObjectREFR_IsPersistent(v4); /*0x4df1d3*/
    TESObjectREFR_SetPersistance(this, IsPersistent); /*0x4df1db*/
    TESForm_CopyAllComponentsFrom((TESForm *)this, (TESForm *)a2); /*0x4df1e3*/
    if ( (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this) ) /*0x4df1f3*/
    {
      v7 = (int)v5->vtbl->GetBaseForm(v5); /*0x4df205*/
      if ( (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this) != v7 ) /*0x4df216*/
        (*((void (__thiscall **)(TESChildCELL *, _DWORD))this->vtbl + 0x54))(this, 0); /*0x4df225*/
    }
    v8 = *((float *)this + 0xE); /*0x4df227*/
    qmemcpy(this + 7, &v5->member.baseForm, 0x1Cu); /*0x4df236*/
    scale = v5->member.scale; /*0x4df238*/
    if ( scale != v8 && !(*((unsigned __int8 (__thiscall **)(TESChildCELL *))this->vtbl + 0x64))(this) /*0x4df27e*/
      || *(_BYTE *)((*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this) + 4) == 0x22
      && (ExtraCount = ExtraDataList_GetExtraCount(&v5->member.baseExtraList),
          ExtraDataList_GetExtraCount((ExtraDataList *)(this + 0x11)) != ExtraCount) )
    {
      (*((void (__thiscall **)(TESChildCELL *, _DWORD))this->vtbl + 0x54))(this, 0); /*0x4df28d*/
    }
    if ( (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this) ) /*0x4df29a*/
    {
      v11 = (_DWORD *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5D))(this); /*0x4df2b1*/
      v12 = (_DWORD *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this); /*0x4df2be*/
      v12[0x15] = *v11; /*0x4df2c2*/
      v12[0x16] = v11[1]; /*0x4df2c8*/
      v12[0x17] = v11[2]; /*0x4df2d2*/
      v13 = sub_4D7AF0((float *)this, v43); /*0x4df2dd*/
      qmemcpy((void *)((*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this) + 0x30), v13, 0x24u); /*0x4df2f4*/
      v14 = (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this); /*0x4df303*/
      sub_897A20(v14, 1); /*0x4df306*/
      v8 = 0.0; /*0x4df30e*/
      v15 = (NiAVObject *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this); /*0x4df321*/
      NiAVObject_UpdateNiAVObject(v15, 0.0, 1); /*0x4df325*/
    }
    parentCell = v5->member.parentCell; /*0x4df32a*/
    if ( parentCell ) /*0x4df32f*/
    {
      TESObjectCELL_AddReference(parentCell, (TESObjectREFR *)this); /*0x4df332*/
      if ( !(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this) ) /*0x4df342*/
        sub_434020(MEMORY[0xB33A10], v2, scale, v8, 5); /*0x4df350*/
    }
    else
    {
      v17 = *((TESObjectCELL **)this + 0x10); /*0x4df357*/
      if ( v17 ) /*0x4df35c*/
        TESObjectCELL_RemoveReference(v17, (TESObjectREFR *)this); /*0x4df35f*/
    }
    Teleport = ExtraDataList_GetTeleport((ExtraDataList *)(this + 0x11)); /*0x4df36c*/
    if ( Teleport ) /*0x4df370*/
    {
      v19 = ExtraDataList_GetTeleport(&v5->member.baseExtraList); /*0x4df375*/
      if ( !v19 || (v20 = TeleportData_GetLinkedDoor(v19), v20 != TeleportData_GetLinkedDoor(Teleport)) ) /*0x4df390*/
      {
        LinkedDoor = TeleportData_GetLinkedDoor(Teleport); /*0x4df399*/
        sub_41F5E0(&LinkedDoor->member.baseExtraList.vtbl); /*0x4df39e*/
        LinkedDoor->vtbl->super.ClearModified((TESForm *)LinkedDoor, 0x100000); /*0x4df3af*/
        TeleportData::SetLinkedDoor(Teleport, 0); /*0x4df3b5*/
      }
    }
    v22 = (ExtraDataList *)(this + 0x11); /*0x4df3bd*/
    BaseExtraList_Copy((ExtraDataList *)(this + 0x11), &v5->member.baseExtraList); /*0x4df3c3*/
    sub_4DB520((MobileObject *)this, v5->member.scale); /*0x4df3d1*/
    if ( v5->vtbl->GetNiNode(v5) ) /*0x4df3e0*/
    {
      if ( (*(_DWORD *)(this + 2) & 0x4000) != 0 ) /*0x4df3f5*/
      {
        v23 = *((_BYTE **)this + 7); /*0x4df3f7*/
        if ( v23 ) /*0x4df3fc*/
        {
          if ( v23[4] == 0x1E ) /*0x4df401*/
          {
            vtbl = (void (__thiscall **)(TESChildCELL *, int))this->vtbl; /*0x4df40b*/
            v25 = (*(int (__thiscall **)(_BYTE *, TESChildCELL *, _DWORD))(*(_DWORD *)v23 + 0xEC))(v23, this, 0); /*0x4df411*/
            vtbl[0x54](this, v25); /*0x4df41c*/
          }
        }
      }
      if ( !(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this) /*0x4df43f*/
        && (v26 = *((TESObjectCELL **)this + 0x10)) != 0
        && TESObjectCELL_IsProcessLevel_LowHigh(v26, 0) )
      {
        sub_441EF0((int)MEMORY[0xB333A0], (TESObjectREFR *)this, *((_DWORD **)this + 0x10), 0, 0); /*0x4df457*/
      }
      else
      {
        v27 = *((_DWORD *)this + 7); /*0x4df461*/
        if ( !v27 || *(_BYTE *)(v27 + 4) != 0x1E ) /*0x4df46b*/
        {
          v28 = (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x53))(this); /*0x4df481*/
          v29 = (_DWORD *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5D))(this); /*0x4df48b*/
          *(_DWORD *)(v28 + 0x54) = *v29; /*0x4df48f*/
          *(_DWORD *)(v28 + 0x58) = v29[1]; /*0x4df495*/
          *(_DWORD *)(v28 + 0x5C) = v29[2]; /*0x4df4a2*/
          qmemcpy((void *)(v28 + 0x30), sub_4D7AF0((float *)this, v43), 0x24u); /*0x4df4b4*/
          a2b = fabs(TESObjectREFR_GetScale((TESObjectREFR *)this)); /*0x4df4c5*/
          *(float *)(v28 + 0x60) = a2b; /*0x4df4cd*/
          if ( v42->vtbl->GetNiNode(v42)->members.super.m_parent ) /*0x4df4da*/
          {
            v30 = (int)v42->vtbl->GetNiNode(v42); /*0x4df4ea*/
            (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(v30 + 0x1C) + 0x84))( /*0x4df4fa*/
              *(_DWORD *)(v30 + 0x1C),
              v28,
              0);
          }
        }
      }
      if ( (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this) ) /*0x4df507*/
      {
        if ( *(_BYTE *)((*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this) + 4) == 0x1A ) /*0x4df51e*/
        {
          v41 = (NiNode *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this); /*0x4df530*/
          v31 = (TESObjectLIGH_DecodedLayout *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this); /*0x4df53a*/
          TESObjectLIGH_ConfigureReferencePointLight(v31, (TESObjectREFR *)this, v41); /*0x4df53e*/
        }
      }
      v22 = (ExtraDataList *)(this + 0x11); /*0x4df543*/
      v32 = ExtraDataList_TestActionFlagBits((ExtraDataList *)(this + 0x11), 8u); /*0x4df54a*/
      sub_4DE460((TESObjectREFR *)this, COERCE_FLOAT(v32), 1); /*0x4df55d*/
      v33 = (*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this); /*0x4df56f*/
      sub_897A20(v33, 1); /*0x4df572*/
      v34 = (NiAVObject *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this); /*0x4df58d*/
      NiAVObject_UpdateNiAVObject(v34, 0.0, 1); /*0x4df591*/
      v35 = (NiAVObject *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this); /*0x4df5a1*/
      NiAVObject_InitializePropertyState(v35); /*0x4df5a5*/
      v36 = (NiNode *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x55))(this); /*0x4df5b5*/
      NiNode_UpdateDynamicEffectState(v36); /*0x4df5b9*/
    }
    else
    {
      (*((void (__thiscall **)(TESChildCELL *, _DWORD))this->vtbl + 0x54))(this, 0); /*0x4df5cd*/
    }
    v37 = ExtraDataList_GetTeleport(v22); /*0x4df5d1*/
    if ( v37 ) /*0x4df5d8*/
    {
      if ( (*(_DWORD *)(this + 2) & 0x4000) == 0 ) /*0x4df5e7*/
      {
        v38 = TeleportData_GetLinkedDoor(v37); /*0x4df5ef*/
        v39 = v38; /*0x4df5f4*/
        if ( !v38 ) /*0x4df5f8*/
        {
          sub_4D76D0(this); /*0x4df5fc*/
          return; /*0x4df608*/
        }
        if ( !TESObjectREFR_IsPersistent(v38) ) /*0x4df60d*/
          TESObjectREFR_SetPersistance((TESChildCELL *)v39, 1); /*0x4df61a*/
        TeleportData = ExtraDataList_GetTeleport(&v39->member.baseExtraList); /*0x4df624*/
        if ( !TeleportData ) /*0x4df62b*/
          TeleportData = TESObjectREFR::GetTeleportData(v39); /*0x4df62f*/
        TeleportData::SetLinkedDoor(TeleportData, (TESObjectREFR *)this); /*0x4df637*/
        a2a = 0; /*0x4df63e*/
        if ( ExtraDataList_GetLock(v22) ) /*0x4df643*/
        {
          if ( ExtraDataList_GetLock(&v39->member.baseExtraList) ) /*0x4df64e*/
          {
            sub_41F5D0(&v39->member.baseExtraList.vtbl); /*0x4df659*/
            a2a = 1; /*0x4df65e*/
          }
        }
        if ( ExtraDataList_GetOwner(v22) && ExtraDataList_GetOwner(&v39->member.baseExtraList) ) /*0x4df670*/
        {
          TESObjectREFR_ClearOwnershipOnSelfAndLinkedDoor((char *)v39);// Verified CopyFrom conflict case: source and linked-door references both have XOWN, so calls TESObjectREFR_ClearOwnershipOnSelfAndLinkedDoor, which clears XOWN/XGLB/XRNK on the linked pair; the same block removes conflicting ExtraLock when both endpoints have locks. /*0x4df67b*/
        }
        else if ( !a2a ) /*0x4df687*/
        {
          return; /*0x4df687*/
        }
        PrintError("Conflicting shared data removed from linked door reference."); /*0x4df68e*/
      }
    }
  }
}
