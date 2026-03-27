int __thiscall TESObjectCELL_destr(TESForm *this)
{
  int v2; // ecx
  int v3; // ecx
  BSExtraData *v4; // eax
  BSExtraData *v5; // edi
  TESWorldSpace *v6; // ecx
  TES *v7; // eax
  hkAllCdPointCollector *v8; // edi
  int v9; // edi

  this->vtbl = (TESFormVtbl *)&TESObjectCELL::`vftable'{for `TESObjectCELL'};
  *((_DWORD *)this + 6) = &TESObjectCELL::`vftable'{for `TESFullName'};
  if ( (this->member.flags & 0x4000) == 0 )
  {
    sub_4CED70((TESObjectCELL *)this);
    v2 = *((_DWORD *)this + 0x10);
    if ( v2 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 0x10))(v2, 1);
      *((_DWORD *)this + 0x10) = 0;
    }
    v3 = *((_DWORD *)this + 0x11);
    if ( v3 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x10))(v3, 1);
      *((_DWORD *)this + 0x11) = 0;
    }
    v4 = sub_41F9B0((ExtraDataList *)this + 2);
    v5 = v4;
    if ( v4 )
    {
      sub_4A6380(v4);
      ((void (__thiscall *)(BSExtraData *, int))v5->vtbl->Destructor)(v5, 1);
    }
  }
  if ( !*(_BYTE *)(TESDataHandler + 0xCD4) && (*((_BYTE *)this + 0x24) & 1) == 0 )
  {
    v6 = *((TESWorldSpace **)this + 0x14);
    if ( v6 )
      TESWorldSpace_RemoveCellFromCellMap(v6, (TESObjectCELL *)this);
  }
  if ( this == (TESForm *)dword_B3B784 )
    dword_B3B784 = 0;
  v7 = TES;
  if ( TES )
  {
    if ( (TESForm *)v7->currentExteriorCell == this )
      v7->currentExteriorCell = 0;
  }
  if ( (TESForm *)dword_B35224 == this )
    dword_B35224 = 0;
  ExtraDataList_RemoveAllNonpersistentCellData((ExtraDataList *)this + 2);
  FormHeapFree(*((_DWORD *)this + 0xF));
  *((_DWORD *)this + 0xF) = 0;
  v8 = dword_B35C08;
  if ( dword_B35C08 )
  {
    sub_533980(dword_B35C08);
    MemoryHeap_Free_checked((char *)v8 - *((unsigned __int8 *)v8 + 0xFFFFFFFF));
  }
  dword_B35C08 = 0;
  v9 = *((_DWORD *)this + 0x15);
  if ( v9 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
  }
  BaseExtraList_destr((ExtraDataList *)this + 2);
  FormHeapFree(*((_DWORD *)this + 7));
  *((_DWORD *)this + 7) = 0;
  *((_WORD *)this + 0x11) = 0;
  *((_WORD *)this + 0x10) = 0;
  return TESForm_destr(this);
}
