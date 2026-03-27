void __userpurge sub_4BE090(
        void *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        TESWorldSpace *a5,
        signed int a6,
        signed int a7)
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

  v7 = a5;
  if ( a5 )
  {
    CellAtCellCoord = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord(a5, a6, a7);
    v9 = CellAtCellCoord;
    if ( CellAtCellCoord )
    {
      v10 = TES;
      if ( TESObjectCELL_IsInterior(CellAtCellCoord) )
        IsInteriorCellPreloaded = TES::IsInteriorCellPreloaded(v10, v9);
      else
        IsInteriorCellPreloaded = sub_43FEA0(v10, (int)v9);
      if ( IsInteriorCellPreloaded )
      {
        sub_442740(TES, st5_0, st6_0, st7_0, v9);
        return;
      }
      v7 = a5;
    }
    if ( !sub_4BDE80(this, a6, a7) )
    {
      v12 = FormHeapAlloc(0x14u);
      *(_DWORD *)(v12 + 8) = v7;
      *(_DWORD *)v12 = a6;
      *(_DWORD *)(v12 + 4) = a7;
      *(_BYTE *)(v12 + 0x10) = 0;
      *(_DWORD *)(v12 + 0xC) = 0;
      v13 = (IOTask *)FormHeapAlloc(0x20u);
      if ( v13 )
        v14 = sub_4BE040(v13, (int)this, v12);
      else
        v14 = 0;
      if ( v14 )
        InterlockedIncrement((volatile LONG *)&v14->members.unk08);
      v15 = sub_4EF1D0(a6, a7);
      if ( v14 )
        InterlockedIncrement((volatile LONG *)&v14->members.unk08);
      (*(void (__thiscall **)(void *, int, IOTask *, int))(*(_DWORD *)this + 0xC))(this, v15, v14, 1);
      (*((void (__thiscall **)(IOManager *, IOTask *))ioManager->vtbl + 0xF))(ioManager, v14);
      if ( v14 )
      {
        if ( !InterlockedDecrement((volatile LONG *)&v14->members.unk08) )
          (*(void (__thiscall **)(IOTask *, int))v14->vtbl)(v14, 1);
      }
    }
  }
}
