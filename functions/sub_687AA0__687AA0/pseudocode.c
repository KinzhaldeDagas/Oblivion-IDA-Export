char __cdecl sub_687AA0(TESChildCELL *a1, NiPoint3 *worldXY, NiPoint3 *a3)
{
  TESWorldSpace *CurrentWorldspace; // eax
  TESObjectCELL *CellAtWorldPosition; // eax
  TESObjectCELL *v6; // esi
  TESWorldSpace *v7; // eax
  TESObjectCELL *v8; // eax
  bool v9; // bl
  char *v10; // eax
  char *Head; // [esp-8h] [ebp-50h]
  TeleportData v12; // [esp+14h] [ebp-34h] BYREF
  unsigned int v13; // [esp+44h] [ebp-4h]

  if ( unk_B3C089 ) /*0x687ac7*/
    return 1; /*0x687ad0*/
  if ( MEMORY[0xB33A1C] ) /*0x687ae6*/
  {
    if ( !MEMORY[0xB333A0]->currentInteriorCell ) /*0x687afd*/
    {
      if ( TES::GetCurrentWorldspace(MEMORY[0xB333A0]) ) /*0x687b03*/
      {
        CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x687b13*/
        CellAtWorldPosition = TESWorldSpace_GetCellAtWorldPosition(CurrentWorldspace, &worldXY->x); /*0x687b1a*/
        v6 = CellAtWorldPosition; /*0x687b1f*/
        if ( !CellAtWorldPosition ) /*0x687b23*/
          return 0; /*0x687b23*/
        if ( sub_43E000(MEMORY[0xB33A1C], CellAtWorldPosition) ) /*0x687b2c*/
          return 0; /*0x687b2c*/
        v7 = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x687b3c*/
        v8 = TESWorldSpace_GetCellAtWorldPosition(v7, &a3->x); /*0x687b43*/
        if ( v8 != v6 && (!v8 || sub_43E000(MEMORY[0xB33A1C], v8)) ) /*0x687b57*/
          return 0; /*0x687b57*/
      }
    }
  }
  if ( !a1 ) /*0x687b7c*/
    return 0; /*0x687b60*/
  v9 = 0; /*0x687b82*/
  sub_68CB30(&v12.yRot); /*0x687b84*/
  v13 = 0; /*0x687b8d*/
  sub_68CB30(&v12); /*0x687b95*/
  LOBYTE(v13) = 1; /*0x687ba5*/
  if ( sub_686450((MobileObject *)a1, worldXY, (TeleportData *)&v12.yRot, 1, 0) ) /*0x687baa*/
  {
    if ( sub_686450((MobileObject *)a1, a3, &v12, 1, 0) ) /*0x687bc1*/
    {
      Head = EmbeddedList_GetHead((char *)&v12); /*0x687bd8*/
      v10 = EmbeddedList_GetHead((char *)&v12.yRot); /*0x687bdd*/
      v9 = sub_687060(a1, (NiPoint3 *)v10, (NiPoint3 *)Head, 0) == 0; /*0x687bee*/
    }
  }
  LOBYTE(v13) = 0; /*0x687bf5*/
  Shared_NoOpVirtual_60D0A0(&v12); /*0x687bfa*/
  v13 = 0xFFFFFFFF; /*0x687c03*/
  Shared_NoOpVirtual_60D0A0(&v12.yRot); /*0x687c0b*/
  return v9; /*0x687ad2*/
}
