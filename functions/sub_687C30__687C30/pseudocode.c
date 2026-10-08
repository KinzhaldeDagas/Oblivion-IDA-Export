bool __cdecl sub_687C30(TESChildCELL *a1, NiPoint3 *worldXY, NiPoint3 *a3)
{
  TESWorldSpace *CurrentWorldspace; // eax
  TESObjectCELL *CellAtWorldPosition; // eax
  TESObjectCELL *v6; // esi
  TESWorldSpace *v7; // eax
  TESObjectCELL *v8; // eax
  bool v9; // bl
  char *Head; // eax
  TeleportData v11; // [esp+14h] [ebp-34h] BYREF
  unsigned int v12; // [esp+44h] [ebp-4h]

  if ( unk_B3C089 ) /*0x687c57*/
    return 1; /*0x687c60*/
  if ( MEMORY[0xB33A1C] ) /*0x687c76*/
  {
    if ( !MEMORY[0xB333A0]->currentInteriorCell ) /*0x687c8d*/
    {
      if ( TES::GetCurrentWorldspace(MEMORY[0xB333A0]) ) /*0x687c93*/
      {
        CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x687ca3*/
        CellAtWorldPosition = TESWorldSpace_GetCellAtWorldPosition(CurrentWorldspace, &worldXY->x); /*0x687caa*/
        v6 = CellAtWorldPosition; /*0x687caf*/
        if ( !CellAtWorldPosition ) /*0x687cb3*/
          return 0; /*0x687cb3*/
        if ( sub_43E000(MEMORY[0xB33A1C], CellAtWorldPosition) ) /*0x687cbc*/
          return 0; /*0x687cbc*/
        v7 = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x687ccc*/
        v8 = TESWorldSpace_GetCellAtWorldPosition(v7, &a3->x); /*0x687cd3*/
        if ( v8 != v6 && (!v8 || sub_43E000(MEMORY[0xB33A1C], v8)) ) /*0x687ce7*/
          return 0; /*0x687ce7*/
      }
    }
  }
  if ( !a1 ) /*0x687d0c*/
    return 0; /*0x687cf0*/
  v9 = 0; /*0x687d12*/
  sub_68CB30(&v11); /*0x687d14*/
  v12 = 0; /*0x687d1d*/
  sub_68CB30(&v11.yRot); /*0x687d25*/
  LOBYTE(v12) = 1; /*0x687d35*/
  if ( sub_686450((MobileObject *)a1, worldXY, &v11, 1, 0) ) /*0x687d3a*/
  {
    Head = EmbeddedList_GetHead((char *)&v11); /*0x687d4d*/
    v9 = sub_687060(a1, (NiPoint3 *)Head, a3, 0) == 0; /*0x687d5e*/
  }
  LOBYTE(v12) = 0; /*0x687d65*/
  Shared_NoOpVirtual_60D0A0(&v11.yRot); /*0x687d6a*/
  v12 = 0xFFFFFFFF; /*0x687d73*/
  Shared_NoOpVirtual_60D0A0(&v11); /*0x687d7b*/
  return v9; /*0x687c62*/
}
