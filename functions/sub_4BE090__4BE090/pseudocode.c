void __userpurge sub_4BE090(
        LockFreeMap *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        TESWorldSpace *a5,
        signed int group_x,
        unsigned int group_y)
{
  TESWorldSpace *v7; // ebx
  TESObjectCELL *CellAtCellCoord; // eax
  TESObjectCELL *v9; // esi
  TES *v10; // ebx
  char IsInteriorCellPreloaded; // al
  int v12; // esi
  IOTask *v13; // eax
  IOTask *v14; // esi
  int v15; // edi

  v7 = a5; /*0x4be0b9*/
  if ( a5 ) /*0x4be0bf*/
  {
    CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(a5, group_x, group_y); /*0x4be0d1*/
    v9 = CellAtCellCoord; /*0x4be0d6*/
    if ( CellAtCellCoord ) /*0x4be0da*/
    {
      v10 = MEMORY[0xB333A0]; /*0x4be0dc*/
      if ( TESObjectCELL_IsInterior(CellAtCellCoord) ) /*0x4be0e4*/
        IsInteriorCellPreloaded = TES::IsInteriorCellPreloaded(v10, v9); /*0x4be0f0*/
      else
        IsInteriorCellPreloaded = sub_43FEA0(v10, (int)v9); /*0x4be0f7*/
      if ( IsInteriorCellPreloaded ) /*0x4be0fe*/
      {
        sub_442740(MEMORY[0xB333A0], st5_0, st6_0, st7_0, v9); /*0x4be107*/
        return; /*0x4be10c*/
      }
      v7 = a5; /*0x4be111*/
    }
    if ( !DistantLODLoaderTaskMap_HasCellTask(this, group_x, group_y) ) /*0x4be11b*/
    {
      v12 = FormHeapAlloc(0x14u); /*0x4be12f*/
      *(_DWORD *)(v12 + 8) = v7; /*0x4be133*/
      *(_DWORD *)v12 = group_x; /*0x4be136*/
      *(_DWORD *)(v12 + 4) = group_y; /*0x4be138*/
      *(_BYTE *)(v12 + 0x10) = 0; /*0x4be13b*/
      *(_DWORD *)(v12 + 0xC) = 0; /*0x4be13f*/
      v13 = (IOTask *)FormHeapAlloc(0x20u); /*0x4be146*/
      if ( v13 ) /*0x4be154*/
        v14 = sub_4BE040(v13, (int)this, v12); /*0x4be15f*/
      else
        v14 = 0; /*0x4be163*/
      if ( v14 ) /*0x4be16b*/
        InterlockedIncrement((volatile LONG *)&v14->members.unk08); /*0x4be171*/
      v15 = TESObjectCELL_PackExteriorGroupLabel(group_x, group_y); /*0x4be18e*/
      if ( v14 ) /*0x4be198*/
        InterlockedIncrement((volatile LONG *)&v14->members.unk08); /*0x4be19e*/
      (*((void (__thiscall **)(LockFreeMap *, int, IOTask *, int))this->vtbl + 3))(this, v15, v14, 1); /*0x4be1ac*/
      (*((void (__thiscall **)(IOManager *, IOTask *))MEMORY[0xB33A10]->vtbl + 0xF))(MEMORY[0xB33A10], v14); /*0x4be1ba*/
      if ( v14 ) /*0x4be1c6*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&v14->members.unk08) ) /*0x4be1cc*/
          (*(void (__thiscall **)(IOTask *, int))v14->vtbl)(v14, 1); /*0x4be1de*/
      }
    }
  }
}
