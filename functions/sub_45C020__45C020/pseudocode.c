char __userpurge sub_45C020@<al>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        void *a5,
        char a6,
        char a7)
{
  int v7; // ebx
  TESObjectREFR *v8; // esi
  _DWORD *v9; // eax
  _DWORD *v10; // ebp
  LowProcess *v11; // eax
  LowProcess *v12; // eax
  char result; // al
  TESForm *ParentCell; // edi
  TESObjectCELL *v15; // edi
  TESWorldSpace *WorldSpace; // ebx
  float *v17; // eax
  signed int v18; // edi
  double v19; // st5
  TESObjectCELL *CellAtCellCoord; // eax
  TESChildCELL *v21; // eax
  int v22; // esi
  int v23; // eax
  TESObjectCELL *v24; // eax
  TESObjectCELL *v25; // eax
  signed int v26; // eax
  _DWORD *v28; // [esp+20h] [ebp-1Ch]

  v7 = a1;
  v8 = (TESObjectREFR *)OblivionDynamicCast(
                          a5,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  v9 = OblivionDynamicCast(
         a5,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &MobileObject `RTTI Type Descriptor',
         0);
  v10 = v9;
  v28 = v9;
  if ( !v9
    || v9[0x16]
    || ((v11 = (LowProcess *)FormHeapAlloc(0x90u)) == 0 ? (v12 = 0) : (v12 = LowProcess::LowProcess(v11)),
        v10[0x16] = v12,
        (result = (*(int (__thiscall **)(_DWORD *))(*v10 + 0x1C4))(v10)) != 0) )
  {
    *(_DWORD *)(v7 + 0x18) |= 8u;
    if ( !v8 )
    {
LABEL_27:
      if ( v10 )
      {
        v21 = (TESChildCELL *)OblivionDynamicCast(
                                v10,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                                &Actor `RTTI Type Descriptor',
                                0);
        v22 = (int)v21;
        if ( v21 )
        {
          if ( TESObjectREFR_GetHealth(v21) > *(float *)&SrcStr )
          {
            Actor_HandleDeathSTate____((Actor *)v22, 0);
            if ( *(_DWORD *)(v22 + 0x3C) )
              sub_5F87F0((TESObjectREFR *)v22);
            if ( !a7 )
            {
              v23 = *(_DWORD *)(v22 + 8);
              if ( (v23 & 0x800) == 0 && (v23 & 0x20) == 0 )
                BSSimpleList_PushFront((_DWORD *)(v7 + 0x38), v22);
            }
          }
        }
      }
      *(_DWORD *)(v7 + 0x18) &= ~8u;
      return 1;
    }
    if ( TESObjectREFR_GetContainer(v8) )
      v8->vtbl->Unk_61(v8, 0);
    ParentCell = (TESForm *)TESObjectREFR_GetParentCell(v8);
    if ( !TESObjectREFR_IsPersistent_(v8)
      || v8 == (TESObjectREFR *)TESDataHandler_g_PlayerRef
      || ParentCell && !TESForm_GetQuestItem(ParentCell) )
    {
      if ( (v8->member.super.flags & 0x800) != 0 || (v8->member.super.flags & 0x20) != 0 )
      {
        ((void (__thiscall *)(TESObjectREFR *, _DWORD))v8->vtbl->Set3D)(v8, 0);
      }
      else if ( !v8->member.niNode )
      {
        v24 = TESObjectREFR_GetParentCell(v8);
        if ( TESObjectCELL_IsProcessLevel_LowHigh(v24, 0) && !sub_4354F0(ModelLoaderPtr, (int)v8) )
        {
          if ( !a7 )
            *(_DWORD *)(v7 + 0x18) |= 2u;
          v25 = TESObjectREFR_GetParentCell(v8);
          v26 = sub_440C80(TES, v25, 0);
          sub_438060((_DWORD **)ModelLoaderPtr, (char)v10, a2, a3, a4, v8, v26);
          if ( !a7 )
            *(_DWORD *)(v7 + 0x18) &= ~2u;
        }
      }
      goto LABEL_24;
    }
    if ( v8->vtbl->IsActor(v8) )
    {
      v15 = (TESObjectCELL *)sub_5E1F60(v8);
      WorldSpace = (TESWorldSpace *)sub_5E1F40((Actor *)v8);
      if ( v15 )
      {
        sub_4D35D0(v15, a2, a3, a4, (TESChildCELL *)v8);
LABEL_23:
        v7 = a1;
LABEL_24:
        if ( (a6 & 0x10) != 0 )
        {
          if ( v8->member.niNode )
            sub_4DB520(v8->member.scale);
        }
        goto LABEL_27;
      }
    }
    else
    {
      WorldSpace = 0;
    }
    v17 = v8->vtbl->GetPos(v8);
    v18 = (int)*v17 >> 0xC;
    v19 = v17[1];
    if ( WorldSpace || (WorldSpace = (TESWorldSpace *)TESObjectREFR_GetWorldSpace(v8)) != 0 )
    {
      CellAtCellCoord = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord(WorldSpace, v18, (int)v19 >> 0xC);
      if ( CellAtCellCoord )
        sub_4D35D0(CellAtCellCoord, v19, a3, a4, (TESChildCELL *)v8);
    }
    v10 = v28;
    goto LABEL_23;
  }
  return result;
}
