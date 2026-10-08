void __userpurge sub_460BC0(_DWORD *ecx0@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, void *a5, int a6)
{
  TESObjectREFR *v7; // ebx
  TESSaveLoadGame_SerializationView *v8; // esi
  TESForm *v9; // esi
  TESObjectCELL *CellAtCellCoord; // edi
  TESWorldSpace *v11; // eax
  TESWorldSpace *v12; // esi
  TESForm *v13; // eax
  TESForm *v14; // eax
  TESSaveLoadGame_SerializationView *v15; // edi
  unsigned __int8 *bufferCursor; // esi
  TESForm *v17; // esi
  TESObjectCELL *v18; // ebp
  TESWorldSpace *v19; // eax
  TESObjectCELL **v20; // esi
  TESObjectCELL *v21; // edi
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v23; // eax
  unsigned int v24; // [esp-4h] [ebp-64h]
  unsigned int v25; // [esp-4h] [ebp-64h]
  UInt32 Dst[9]; // [esp+10h] [ebp-50h] BYREF
  unsigned int destination[11]; // [esp+34h] [ebp-2Ch] BYREF

  v7 = (TESObjectREFR *)OblivionDynamicCast( /*0x460be1*/
                          a5,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  if ( v7 ) /*0x460be8*/
  {
    if ( (a6 & 2) != 0 ) /*0x460c68*/
    {
      v8 = g_TESSaveLoadGame; /*0x460c6e*/
      memset(Dst, 0, 0xC); /*0x460c74*/
      memcpy(Dst, v8->bufferCursor, sizeof(Dst)); /*0x460c8b*/
      v8->bufferCursor += 0x24; /*0x460c90*/
      Dst[1] = sub_459950(ecx0, Dst[1]); /*0x460ca3*/
      Dst[2] = sub_459950(ecx0, Dst[2]); /*0x460cb4*/
      v9 = TESForm_LookupByFormID(Dst[2]); /*0x460cc8*/
      CellAtCellCoord = (TESObjectCELL *)OblivionDynamicCast( /*0x460ce0*/
                                           v9,
                                           0,
                                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                           &TESObjectCELL `RTTI Type Descriptor',
                                           0);
      v11 = (TESWorldSpace *)OblivionDynamicCast( /*0x460ce2*/
                               v9,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESWorldSpace `RTTI Type Descriptor',
                               0);
      v12 = v11; /*0x460cef*/
      if ( Dst[0] == 2 ) /*0x460cf1*/
      {
        if ( v11 ) /*0x460d44*/
          CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord( /*0x460d6d*/
                              v11,
                              (int)*(float *)&Dst[3] >> 0xC,
                              (int)*(float *)&Dst[4] >> 0xC);
        if ( CellAtCellCoord ) /*0x460d71*/
          ((void (__thiscall *)(TESObjectREFR *, TESObjectCELL *))v7->vtbl->ChangeCell)(v7, CellAtCellCoord); /*0x460d7e*/
        TESObjectREFR_SetPosition(v7, *(float *)&Dst[3], *(float *)&Dst[4], *(float *)&Dst[5]); /*0x460d9b*/
        sub_4D89A0((int *)v7, Dst[6], Dst[7], Dst[8]); /*0x460dbb*/
        sub_45E990(a2, a3, a4, (TESChildCELL *)v7); /*0x460dc3*/
      }
      else
      {
        v13 = TESForm_LookupByFormID(Dst[1]); /*0x460d06*/
        v14 = (TESForm *)OblivionDynamicCast( /*0x460d0f*/
                           v13,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                           0);
        TESDataHandler_PlaceObjectRef(a2, a3, a4, v14, (int)&Dst[3], (int)&Dst[6], CellAtCellCoord, v12, v7); /*0x460d2b*/
        sub_45E990(a2, a3, a4, (TESChildCELL *)v7); /*0x460d33*/
      }
    }
    else if ( (a6 & 0xC) != 0 )                 // Saved REFR move/havok branch. Reads 0x1C bytes normally, 0x2C bytes when CHANGEFLAG_REFR_CELL_CHANGED (sign bit) is set. /*0x460dd4*/
    {
      v15 = g_TESSaveLoadGame; /*0x460ddc*/
      bufferCursor = g_TESSaveLoadGame->bufferCursor; /*0x460de2*/
      if ( a6 >= 0 ) /*0x460de5*/
      {
        memcpy(Dst, bufferCursor, 0x1Cu); /*0x460e32*/
        v25 = Dst[0]; /*0x460e41*/
        v15->bufferCursor = bufferCursor + 0x1C; /*0x460e44*/
        Dst[0] = sub_459950(ecx0, v25); /*0x460e4c*/
      }
      else
      {
        memcpy(destination, bufferCursor, sizeof(destination)); /*0x460def*/
        v24 = destination[0]; /*0x460dfb*/
        v15->bufferCursor = bufferCursor + 0x2C; /*0x460e01*/
        sub_459950(ecx0, v24); /*0x460e04*/
        destination[4] = sub_459950(ecx0, destination[4]); /*0x460e22*/
        qmemcpy(Dst, &destination[4], 0x1Cu); /*0x460e26*/
      }
      sub_4D89A0((int *)v7, Dst[4], Dst[5], Dst[6]); /*0x460e6b*/
      if ( v7 != (TESObjectREFR *)reference ) /*0x460e76*/
      {
        TESObjectREFR_SetPosition(v7, *(float *)&Dst[1], *(float *)&Dst[2], *(float *)&Dst[3]); /*0x460e97*/
        sub_45E990(a2, a3, a4, (TESChildCELL *)v7); /*0x460e9f*/
        v17 = TESForm_LookupByFormID(Dst[0]); /*0x460eba*/
        v18 = (TESObjectCELL *)OblivionDynamicCast( /*0x460ed3*/
                                 v17,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESObjectCELL `RTTI Type Descriptor',
                                 0);
        v19 = (TESWorldSpace *)OblivionDynamicCast( /*0x460ed5*/
                                 v17,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESWorldSpace `RTTI Type Descriptor',
                                 0);
        v20 = (TESObjectCELL **)v19; /*0x460edf*/
        if ( v18 ) /*0x460ee1*/
        {
          if ( v18 != (TESObjectCELL *)Shared_GetDwordAtOffset40(v7) ) /*0x460eec*/
            sub_4DD4B0((int)v7, a2, a3, a4, (Actor *)v7, v18, 0); /*0x460ef6*/
        }
        else if ( v19 ) /*0x460f0a*/
        {
          v21 = TESWorldSpace::GetCellAtCellCoord(v19, (int)*(float *)&Dst[1] >> 0xC, (int)*(float *)&Dst[2] >> 0xC); /*0x460f39*/
          if ( Shared_GetDwordAtOffset40(v7) /*0x460f5f*/
            && (DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v7),
                TESObjectCELL_IsInterior(DwordAtOffset40))
            || (TESObjectCELL *)Shared_GetDwordAtOffset40(v7) != v21 )
          {
            sub_4DD4B0((int)v7, a2, a3, a4, (Actor *)v7, 0, v20); /*0x460f65*/
          }
          else if ( !v21 && !TESObjectREFR_IsPersistent(v7) ) /*0x460f81*/
          {
            PrintError("Trying to load non-persistent ref into non-existent cell."); /*0x460f93*/
          }
        }
        else if ( TESObjectREFR_IsPersistent(v7) ) /*0x460fa7*/
        {
          if ( Shared_GetDwordAtOffset40(v7) ) /*0x460fc9*/
          {
            v23 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v7); /*0x460fd5*/
            TESObjectCELL_RemoveReference(v23, v7); /*0x460fdc*/
          }
          ((void (__usercall *)(TESObjectREFR *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))v7->vtbl->ChangeCell)( /*0x460fed*/
            v7,
            0,
            a4,
            a3,
            a2);
          sub_439DC0((_DWORD **)MEMORY[0xB33A1C], (volatile LONG *)v7); /*0x460ff6*/
          ((void (__thiscall *)(TESObjectREFR *, _DWORD))v7->vtbl->Set3D)(v7, 0); /*0x461007*/
        }
        else
        {
          PrintError("Trying to put non-persistent reference in non-existent cell."); /*0x460fb5*/
        }
      }
    }
    else if ( ((unsigned int)&loc_800000 & a6) != 0 )// Saved REFR 0x00800000 Oblivion cell/worldspace marker branch. Consumes 4 bytes only. /*0x461018*/
    {
      ecx0[5] += 4; /*0x46101a*/
    }
  }
  else if ( OblivionDynamicCast( /*0x460bf7*/
              a5,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESObjectCELL `RTTI Type Descriptor',
              0) )
  {
    if ( g_TESSaveLoadGame->currentVersion >= 0x5Bu ) /*0x460c15*/
    {
      if ( (a6 & 0x4000000) != 0 ) /*0x460c1c*/
      {
        ecx0[5] += 4; /*0x460c1e*/
      }
      else if ( (a6 & 0x2000000) != 0 ) /*0x460c29*/
      {
        ecx0[5] += 6; /*0x460c2b*/
      }
    }
    if ( g_TESSaveLoadGame->currentVersion < 0x5Bu ) /*0x460c38*/
    {
      if ( (a6 & 2) != 0 && (a6 & 4) != 0 ) /*0x460c44*/
        ecx0[5] += 0xC; /*0x460c46*/
      else
        ecx0[5] += 2; /*0x460c54*/
    }
  }
}
