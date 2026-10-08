void __userpurge sub_4BDF20(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  TESForm *v5; // eax
  TESForm *v6; // eax
  TESForm *v7; // eax
  TESObjectLAND *v8; // eax
  int v9; // edi
  int *v10; // eax

  if ( a5 ) /*0x4bdf48*/
  {
    if ( !*(_DWORD *)(a5 + 0xC) ) /*0x4bdf4e*/
    {
      v5 = TESWorldSpace_LoadExteriorCellAtCoord( /*0x4bdf5e*/
             *(TESWorldSpace **)(a5 + 8),
             a2,
             a3,
             a4,
             *(_DWORD *)a5,
             *(_DWORD *)(a5 + 4));
      *(_DWORD *)(a5 + 0xC) = v5; /*0x4bdf65*/
      if ( !v5 ) /*0x4bdf68*/
      {
        v6 = (TESForm *)FormHeapAlloc(0x58u); /*0x4bdf6c*/
        if ( v6 ) /*0x4bdf82*/
          v7 = TESObjectCELL_constr(v6); /*0x4bdf86*/
        else
          v7 = 0; /*0x4bdf8d*/
        *(_DWORD *)(a5 + 0xC) = v7; /*0x4bdf9b*/
        sub_4C9F90(v7, 1); /*0x4bdf9e*/
        TESObjectCELL::SetIsInterior(*(TESObjectCELL **)(a5 + 0xC), 0); /*0x4bdfa8*/
        sub_4CA710(*(TESObjectCELL **)(a5 + 0xC)); /*0x4bdfb0*/
        sub_4C9AC0(*(TESObjectCELL **)(a5 + 0xC), *(_DWORD *)a5, *(_DWORD *)(a5 + 4)); /*0x4bdfbf*/
        TESWorldSpace_RegisterExteriorCell(*(TESWorldSpace **)(a5 + 8), *(TESObjectCELL **)(a5 + 0xC)); /*0x4bdfcb*/
      }
    }
    sub_4D58B0(*(TESObjectCELL **)(a5 + 0xC)); /*0x4bdfd3*/
    v8 = sub_4CE3C0(*(TESObjectCELL **)(a5 + 0xC)); /*0x4bdfdb*/
    v9 = (int)v8; /*0x4bdfe0*/
    if ( v8 ) /*0x4bdfe4*/
    {
      sub_4C79A0((int)v8, a1, a2, a3, a4, 1); /*0x4bdfea*/
      sub_4C5BA0(v9, MEMORY[0xB333A0]->CellBorders); /*0x4bdffc*/
    }
    v10 = (int *)sub_4AF170(*(_DWORD **)(a5 + 0xC)); /*0x4be004*/
    if ( v10 ) /*0x4be00b*/
      TESPathGrid_LoadOrResolveGraph(v10);      // Verified local-map/exterior-cell setup path invokes TESPathGrid_LoadOrResolveGraph after creating or obtaining the cell and its PathGrid. This call can load graph chunks, resolve PGRI cross-cell links, and optionally rebuild rendering. /*0x4be00f*/
    *(_BYTE *)(a5 + 0x10) = 1; /*0x4be014*/
  }
}
