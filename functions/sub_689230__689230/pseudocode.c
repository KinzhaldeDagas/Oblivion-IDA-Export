char __cdecl sub_689230(TESChildCELL *a1, NiPoint3 *worldXY, float *a3)
{
  TESWorldSpace *CurrentWorldspace; // eax
  TESObjectCELL *CellAtWorldPosition; // eax
  TESObjectCELL *v6; // esi
  TESWorldSpace *v7; // eax
  TESObjectCELL *v8; // eax
  char v9; // bl

  if ( unk_B3C089 ) /*0x689230*/
    return 1; /*0x689239*/
  if ( MEMORY[0xB33A1C] ) /*0x68923c*/
  {
    if ( !MEMORY[0xB333A0]->currentInteriorCell ) /*0x689256*/
    {
      if ( TES::GetCurrentWorldspace(MEMORY[0xB333A0]) ) /*0x68925c*/
      {
        CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x68926c*/
        CellAtWorldPosition = TESWorldSpace_GetCellAtWorldPosition(CurrentWorldspace, &worldXY->x); /*0x689273*/
        v6 = CellAtWorldPosition; /*0x689278*/
        if ( !CellAtWorldPosition ) /*0x68927c*/
          return 0; /*0x68927c*/
        if ( sub_43E000(MEMORY[0xB33A1C], CellAtWorldPosition) ) /*0x689285*/
          return 0; /*0x689285*/
        v7 = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x689295*/
        v8 = TESWorldSpace_GetCellAtWorldPosition(v7, a3); /*0x68929c*/
        if ( v8 != v6 && (!v8 || sub_43E000(MEMORY[0xB33A1C], v8)) ) /*0x6892b0*/
          return 0; /*0x6892bb*/
      }
    }
  }
  v9 = 0; /*0x6892c4*/
  if ( a1 ) /*0x6892c8*/
  {
    if ( sub_480520(&worldXY->x, a3, flt_A2FF44) < 0 ) /*0x6892e0*/
      return sub_688DC0(a1, worldXY, a3, 0); /*0x6892ef*/
  }
  return v9; /*0x68923b*/
}
