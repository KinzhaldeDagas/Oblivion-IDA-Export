unsigned int __stdcall sub_4535A0(_DWORD *a1, unsigned int a2)
{
  unsigned int v3; // ebx
  PlayerCharacter *v4; // esi
  TESObjectCELL *v5; // eax
  TESObjectCELL *v6; // edi
  unsigned int v7; // ebx
  int XCoordinate; // esi
  int YCoordinate; // eax
  unsigned int v11; // ebx
  Actor *v12; // eax
  Actor *v13; // edi
  LowProcess *process; // ecx
  LowProcess *v15; // eax
  int editorPackage; // eax
  TESPackage *v17; // eax
  NiDX9TextureData *v18; // eax
  int v19; // ebx
  PlayerCharacter *v20; // edi
  TESObjectCELL *v21; // ebp
  TESWorldSpace *v22; // edi
  TESObjectCELL *ParentCell; // eax
  TESWorldSpace *WorldSpace; // ecx
  TESObjectCELL *CellAtCellCoord; // eax
  float *v26; // eax
  float v27; // ecx
  float v28; // edx
  int v29; // eax
  bool v30; // zf
  float v31; // [esp+Ch] [ebp-18h] BYREF
  float v32; // [esp+10h] [ebp-14h]
  int v33; // [esp+14h] [ebp-10h]
  char v34[12]; // [esp+18h] [ebp-Ch] BYREF
  int v35; // [esp+28h] [ebp+4h]
  int v36; // [esp+2Ch] [ebp+8h]

  v3 = sub_453530(a1, a2);
  v4 = (PlayerCharacter *)OblivionDynamicCast(
                            a1,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                            0);
  v5 = (TESObjectCELL *)OblivionDynamicCast(
                          a1,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESObjectCELL `RTTI Type Descriptor',
                          0);
  v6 = v5;
  if ( !v5 )
  {
    if ( !v4 )
      return v3;
    v11 = v3 & 0xFFFFF7FF;
    if ( (v11 & 0x8000000) != 0
      && (v4 == (PlayerCharacter *)0xFFFFFFBC
       || !ExtraDataList_GetContainerChanges(&v4->super.super.super.super.baseExtraList)) )
    {
      v11 &= ~0x8000000u;
    }
    v12 = (Actor *)OblivionDynamicCast(
                     v4,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
    v13 = v12;
    if ( v12 )
    {
      process = v12->members.super.process;
      if ( (v11 & 0x80000) != 0 )
      {
        if ( !process || !((int (__thiscall *)(LowProcess *))process->Unk_5C)(process) )
          v11 &= ~0x80000u;
      }
      else if ( process )
      {
        if ( ((int (__thiscall *)(LowProcess *))process->Unk_5C)(process) )
          v11 |= 0x80000u;
      }
      v15 = v13->members.super.process;
      v11 &= 0xFFFCFFFF;
      if ( v15 )
      {
        editorPackage = (int)v15->editorPackage;
        if ( editorPackage )
          v11 |= sub_5E8D90(editorPackage);
      }
      if ( (v11 & 0x20000) != 0 )
      {
        v17 = sub_5E0380(v13);
        v18 = (NiDX9TextureData *)OblivionDynamicCast(
                                    v17,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESPackage `RTTI Type Descriptor',
                                    &DialoguePackage `RTTI Type Descriptor',
                                    0);
        if ( v18 )
        {
          if ( (Actor *)NiDX9TextureData::GetLevels(v18) == v13 )
            v11 &= ~0x10000u;
          else
            v11 |= 0x10000u;
        }
      }
      if ( sub_5F0310(v13, v11) )
      {
        v11 |= 8u;
      }
      else if ( !v13->vtbl->super.super.IsDead((TESObjectREFR *)v13, 0) )
      {
        v11 &= ~8u;
      }
    }
    v19 = v11 & 0x7FFFFFFF;
    if ( (v19 & 2) != 0
      || (v19 & 0xC) == 0
      || TESObjectREFR_IsPersistent_((TESObjectREFR *)v4)
      || v4 == TESDataHandler_g_PlayerRef )
    {
LABEL_59:
      v3 = v19 & 0xFF7FFFFF;
      if ( sub_4D7F40(v4) )
      {
        if ( v4 != TESDataHandler_g_PlayerRef )
          v3 |= (unsigned int)&loc_800000;
      }
      return v3;
    }
    v20 = 0;
    if ( v4->vtbl->super.super.super.IsActor((TESObjectREFR *)v4) )
    {
      v21 = (TESObjectCELL *)sub_5E1F60(v4);
      v22 = (TESWorldSpace *)sub_5E1F40((Actor *)v4);
      if ( v22 || v21 )
      {
        v26 = (float *)((int (__thiscall *)(PlayerCharacter *, char *))v4->vtbl->super.super.super.GetStartingPos)(
                         v4,
                         v34);
        v27 = *v26;
        v28 = v26[1];
        v29 = *((_DWORD *)v26 + 2);
        v31 = v27;
        v32 = v28;
        v33 = v29;
        if ( v21 )
        {
          v30 = v21 == TESObjectREFR_GetParentCell((TESObjectREFR *)v4);
          goto LABEL_57;
        }
        if ( !v22 )
          goto LABEL_59;
        if ( v22 != (TESWorldSpace *)TESObjectREFR_GetWorldSpace((TESObjectREFR *)v4) )
        {
LABEL_58:
          v19 |= 0x80000000;
          goto LABEL_59;
        }
        CellAtCellCoord = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord(v22, (int)v31 >> 0xC, (int)v32 >> 0xC);
LABEL_56:
        v30 = CellAtCellCoord == TESObjectREFR_GetParentCell((TESObjectREFR *)v4);
LABEL_57:
        if ( v30 )
          goto LABEL_59;
        goto LABEL_58;
      }
      v20 = v4;
    }
    if ( !TESObjectREFR_GetParentCell((TESObjectREFR *)v4) )
      goto LABEL_59;
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)v4);
    if ( TESObjectCELL_IsInterior(ParentCell) )
      goto LABEL_59;
    if ( v20 )
      PrintError("Actor does not have an editor location.  This should never happen.");
    v4->vtbl->super.super.super.GetStartingPos((TESObjectREFR *)v4, &v31);
    v35 = (int)v31;
    v36 = (int)v32;
    WorldSpace = (TESWorldSpace *)TESObjectREFR_GetWorldSpace((TESObjectREFR *)v4);
    CellAtCellCoord = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord(WorldSpace, v35 >> 0xC, v36 >> 0xC);
    goto LABEL_56;
  }
  if ( (v3 & 0x10000000) != 0 && !sub_4CCED0(v5) )
    v3 &= ~0x10000000u;
  if ( (v3 & 0x1000000) != 0 && !sub_4AF170(v6) )
    v3 &= ~0x1000000u;
  if ( TESObjectCELL_IsInterior(v6) )
    return v3;
  v7 = v3 & 0xF9FFFFFF;
  XCoordinate = TESObjectCELL_GetXCoordinate(v6);
  YCoordinate = TESObjectCELL_GetYCoordinate(v6);
  if ( (unsigned int)(XCoordinate + 0x80) > 0xFF || (unsigned int)(YCoordinate + 0x80) > 0xFF )
    return v7 | 0x2000000;
  else
    return v7 | 0x4000000;
}
