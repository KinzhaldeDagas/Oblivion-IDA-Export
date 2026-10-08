char __thiscall sub_45C020(int this, void *a2, char a3, char a4)
{
  int v7; // ebx
  TESObjectREFR *v8; // esi
  _DWORD *v9; // eax
  _DWORD *v10; // ebp
  LowProcess *v11; // eax
  LowProcess *v12; // eax
  char result; // al
  TESForm *DwordAtOffset40; // edi
  TESObjectCELL *v15; // edi
  TESWorldSpace *WorldSpace; // ebx
  float *v17; // eax
  signed int v18; // edi
  signed int v19; // ebp
  TESObjectCELL *CellAtCellCoord; // eax
  TESChildCELL *v21; // eax
  int v22; // esi
  int v23; // eax
  TESObjectCELL *v24; // eax
  TESObjectCELL *v25; // eax
  signed int v26; // eax
  _DWORD *v28; // [esp+20h] [ebp-1Ch]

  v7 = this; /*0x45c047*/
  v8 = (TESObjectREFR *)OblivionDynamicCast( /*0x45c074*/
                          a2,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  v9 = OblivionDynamicCast( /*0x45c076*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &MobileObject `RTTI Type Descriptor',
         0);
  v10 = v9; /*0x45c07b*/
  v28 = v9; /*0x45c082*/
  if ( !v9
    || v9[0x16]
    || ((v11 = (LowProcess *)FormHeapAlloc(0x90u)) == 0 ? (v12 = 0) : (v12 = LowProcess::LowProcess(v11)),
        v10[0x16] = v12,
        (result = (*(int (__thiscall **)(_DWORD *))(*v10 + 0x1C4))(v10)) != 0) )
  {
    *(_DWORD *)(v7 + 0x18) |= 8u; /*0x45c0d6*/
    if ( !v8 ) /*0x45c0dc*/
    {
LABEL_27:
      if ( v10 ) /*0x45c1ed*/
      {
        v21 = (TESChildCELL *)OblivionDynamicCast( /*0x45c1fe*/
                                v10,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                                &Actor `RTTI Type Descriptor',
                                0);
        v22 = (int)v21; /*0x45c203*/
        if ( v21 ) /*0x45c20a*/
        {
          if ( TESObjectREFR_GetHealth(v21) > *(float *)&SrcStr ) /*0x45c21e*/
          {
            Actor_HandleDeathState((Actor *)v22, 0); /*0x45c224*/
            if ( *(_DWORD *)(v22 + 0x3C) ) /*0x45c229*/
              sub_5F87F0((TESObjectREFR *)v22); /*0x45c231*/
            if ( !a4 ) /*0x45c23b*/
            {
              v23 = *(_DWORD *)(v22 + 8); /*0x45c23d*/
              if ( (v23 & 0x800) == 0 && (v23 & 0x20) == 0 ) /*0x45c24f*/
                BSSimpleList_PushFront((_DWORD *)(v7 + 0x38), v22); /*0x45c255*/
            }
          }
        }
      }
      *(_DWORD *)(v7 + 0x18) &= ~8u; /*0x45c25a*/
      return 1; /*0x45c25e*/
    }
    if ( TESObjectREFR_GetContainer(v8) ) /*0x45c0e4*/
      v8->vtbl->Unk_61(v8, 0); /*0x45c0f9*/
    DwordAtOffset40 = (TESForm *)Shared_GetDwordAtOffset40(v8); /*0x45c104*/
    if ( !TESObjectREFR_IsPersistent(v8) /*0x45c125*/
      || v8 == (TESObjectREFR *)reference
      || DwordAtOffset40 && !TESForm_GetQuestItem(DwordAtOffset40) )
    {
      if ( (v8->member.super.flags & 0x800) != 0 || (v8->member.super.flags & 0x20) != 0 ) /*0x45c28c*/
      {
        ((void (__thiscall *)(TESObjectREFR *, _DWORD))v8->vtbl->Set3D)(v8, 0); /*0x45c315*/
      }
      else if ( !v8->member.niNode ) /*0x45c28e*/
      {
        v24 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v8); /*0x45c29c*/
        if ( TESObjectCELL_IsProcessLevel_LowHigh(v24, 0) && !sub_4354F0(MEMORY[0xB33A1C], (int)v8) ) /*0x45c2bc*/
        {
          if ( !a4 ) /*0x45c2cd*/
            *(_DWORD *)(v7 + 0x18) |= 2u; /*0x45c2cf*/
          v25 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v8); /*0x45c2d7*/
          v26 = sub_440C80(MEMORY[0xB333A0], v25, 0); /*0x45c2e3*/
          sub_438060((_DWORD **)MEMORY[0xB33A1C], v8, v26); /*0x45c2f0*/
          if ( !a4 ) /*0x45c2fa*/
            *(_DWORD *)(v7 + 0x18) &= ~2u; /*0x45c300*/
        }
      }
      goto LABEL_24; /*0x45c304*/
    }
    if ( v8->vtbl->IsActor(v8) ) /*0x45c13c*/
    {
      v15 = (TESObjectCELL *)sub_5E1F60(v8); /*0x45c14b*/
      WorldSpace = (TESWorldSpace *)sub_5E1F40((Actor *)v8); /*0x45c154*/
      if ( v15 ) /*0x45c156*/
      {
        TESObjectCELL_AddReference(v15, v8); /*0x45c15b*/
LABEL_23:
        v7 = this; /*0x45c1cc*/
LABEL_24:
        if ( (a3 & 0x10) != 0 ) /*0x45c1d5*/
        {
          if ( v8->member.niNode ) /*0x45c1d7*/
            sub_4DB520((MobileObject *)v8, v8->member.scale); /*0x45c1e6*/
        }
        goto LABEL_27; /*0x45c1e6*/
      }
    }
    else
    {
      WorldSpace = 0; /*0x45c162*/
    }
    v17 = v8->vtbl->GetPos(v8); /*0x45c16e*/
    v18 = (int)*v17 >> 0xC; /*0x45c190*/
    v19 = (int)v17[1] >> 0xC; /*0x45c19f*/
    if ( WorldSpace || (WorldSpace = TESObjectREFR_GetWorldSpace(v8)) != 0 ) /*0x45c1b1*/
    {
      CellAtCellCoord = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord(WorldSpace, v18, v19); /*0x45c1b7*/
      if ( CellAtCellCoord ) /*0x45c1be*/
        TESObjectCELL_AddReference(CellAtCellCoord, v8); /*0x45c1c3*/
    }
    v10 = v28; /*0x45c1c8*/
    goto LABEL_23; /*0x45c1c8*/
  }
  return result; /*0x45c260*/
}
