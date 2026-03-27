void __userpurge sub_460BC0(_DWORD *ecx0@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, void *a5, int a6)
{
  TESObjectREFR *v7; // ebx
  TESSaveLoad *v8; // esi
  TESForm *v9; // esi
  TESObjectCELL *CellAtCellCoord; // edi
  TESWorldSpace *v11; // eax
  int v12; // esi
  TESForm *v13; // eax
  void *v14; // eax
  TESSaveLoad *v15; // edi
  const void *v16; // esi
  TESForm *v17; // esi
  TESObjectCELL *v18; // ebp
  TESWorldSpace *v19; // eax
  TESWorldSpace *v20; // esi
  double v21; // st5
  TESObjectCELL *v22; // edi
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v24; // eax
  size_t v25; // [esp-4h] [ebp-64h]
  unsigned int v26; // [esp-4h] [ebp-64h]
  unsigned int v27; // [esp-4h] [ebp-64h]
  UInt32 Dst[9]; // [esp+10h] [ebp-50h] BYREF
  unsigned int v29[4]; // [esp+34h] [ebp-2Ch] BYREF
  unsigned int v30[7]; // [esp+44h] [ebp-1Ch] BYREF

  v7 = (TESObjectREFR *)OblivionDynamicCast(
                          a5,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  if ( v7 )
  {
    if ( (a6 & 2) != 0 )
    {
      v8 = SaveLoad_CurrentSavegame;
      memset(Dst, 0, 0xC);
      LODWORD(v25) = 0x24;
      memcpy(Dst, (const void *)v8->unk000[5], v25);
      v8->unk000[5] += 0x24;
      Dst[1] = sub_459950(ecx0, Dst[1]);
      Dst[2] = sub_459950(ecx0, Dst[2]);
      v9 = TESForm_LookupByFormID(Dst[2]);
      CellAtCellCoord = (TESObjectCELL *)OblivionDynamicCast(
                                           v9,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                           &TESObjectCELL `RTTI Type Descriptor',
                                           0);
      v11 = (TESWorldSpace *)OblivionDynamicCast(
                               v9,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESWorldSpace `RTTI Type Descriptor',
                               0);
      v12 = (int)v11;
      if ( Dst[0] == 2 )
      {
        if ( v11 )
        {
          a2 = *(float *)&Dst[4];
          CellAtCellCoord = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord(
                                               v11,
                                               (int)*(float *)&Dst[3] >> 0xC,
                                               (int)*(float *)&Dst[4] >> 0xC);
        }
        if ( CellAtCellCoord )
          ((void (__thiscall *)(TESObjectREFR *, TESObjectCELL *))v7->vtbl->ChangeCell)(v7, CellAtCellCoord);
        TESObjectREFR_SetPosition(v7, *(float *)&Dst[3], *(float *)&Dst[4], *(float *)&Dst[5]);
        sub_4D89A0((int *)v7, Dst[6], Dst[7], Dst[8]);
        sub_45E990(a2, a3, a4, (TESChildCELL *)v7);
      }
      else
      {
        v13 = TESForm_LookupByFormID(Dst[1]);
        v14 = OblivionDynamicCast(
                v13,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                0);
        TESDataHandler_PlaceObjectRef(a2, a3, (int)v14, (int)&Dst[3], (int)&Dst[6], CellAtCellCoord, v12, v7);
        sub_45E990(a2, a3, a4, (TESChildCELL *)v7);
      }
    }
    else if ( (a6 & 0xC) != 0 )
    {
      v15 = SaveLoad_CurrentSavegame;
      v16 = (const void *)SaveLoad_CurrentSavegame->unk000[5];
      if ( a6 >= 0 )
      {
        LODWORD(v25) = 0x1C;
        memcpy(Dst, v16, v25);
        v27 = Dst[0];
        v15->unk000[5] = (UInt32)v16 + 0x1C;
        Dst[0] = sub_459950(ecx0, v27);
      }
      else
      {
        LODWORD(v25) = 0x2C;
        memcpy(v29, v16, v25);
        v26 = v29[0];
        v15->unk000[5] = (UInt32)v16 + 0x2C;
        sub_459950(ecx0, v26);
        v30[0] = sub_459950(ecx0, v30[0]);
        qmemcpy(Dst, v30, 0x1Cu);
      }
      sub_4D89A0((int *)v7, Dst[4], Dst[5], Dst[6]);
      if ( v7 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      {
        TESObjectREFR_SetPosition(v7, *(float *)&Dst[1], *(float *)&Dst[2], *(float *)&Dst[3]);
        sub_45E990(a2, a3, a4, (TESChildCELL *)v7);
        v17 = TESForm_LookupByFormID(Dst[0]);
        v18 = (TESObjectCELL *)OblivionDynamicCast(
                                 v17,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESObjectCELL `RTTI Type Descriptor',
                                 0);
        v19 = (TESWorldSpace *)OblivionDynamicCast(
                                 v17,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESWorldSpace `RTTI Type Descriptor',
                                 0);
        v20 = v19;
        if ( v18 )
        {
          if ( v18 != TESObjectREFR_GetParentCell(v7) )
            sub_4DD4B0((int)v7, a2, a3, a4, (Actor *)v7, v18, 0);
        }
        else if ( v19 )
        {
          v21 = *(float *)&Dst[2];
          v22 = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord(
                                   v19,
                                   (int)*(float *)&Dst[1] >> 0xC,
                                   (int)*(float *)&Dst[2] >> 0xC);
          if ( TESObjectREFR_GetParentCell(v7)
            && (ParentCell = TESObjectREFR_GetParentCell(v7), TESObjectCELL_IsInterior(ParentCell))
            || TESObjectREFR_GetParentCell(v7) != v22 )
          {
            sub_4DD4B0((int)v7, v21, a3, a4, (Actor *)v7, 0, v20);
          }
          else if ( !v22 && !TESObjectREFR_IsPersistent_(v7) )
          {
            PrintError("Trying to load non-persistent ref into non-existent cell.");
          }
        }
        else if ( TESObjectREFR_IsPersistent_(v7) )
        {
          if ( TESObjectREFR_GetParentCell(v7) )
          {
            v24 = TESObjectREFR_GetParentCell(v7);
            sub_4CECD0(v24, v7);
          }
          ((void (__usercall *)(TESObjectREFR *@<ecx>, _DWORD, double@<st0>, double@<st1>))v7->vtbl->ChangeCell)(
            v7,
            0,
            a4,
            a3);
          sub_439DC0((_DWORD **)ModelLoaderPtr, (volatile LONG *)v7);
          ((void (__thiscall *)(TESObjectREFR *, _DWORD))v7->vtbl->Set3D)(v7, 0);
        }
        else
        {
          PrintError("Trying to put non-persistent reference in non-existent cell.");
        }
      }
    }
    else if ( ((unsigned int)&loc_800000 & a6) != 0 )
    {
      ecx0[5] += 4;
    }
  }
  else if ( OblivionDynamicCast(
              a5,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESObjectCELL `RTTI Type Descriptor',
              0) )
  {
    if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x5Bu )
    {
      if ( (a6 & 0x4000000) != 0 )
      {
        ecx0[5] += 4;
      }
      else if ( (a6 & 0x2000000) != 0 )
      {
        ecx0[5] += 6;
      }
    }
    if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x5Bu )
    {
      if ( (a6 & 2) != 0 && (a6 & 4) != 0 )
        ecx0[5] += 0xC;
      else
        ecx0[5] += 2;
    }
  }
}
