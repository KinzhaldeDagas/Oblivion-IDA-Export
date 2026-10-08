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

  this->vtbl = (TESFormVtbl *)&TESObjectCELL::`vftable'{for `TESObjectCELL'}; /*0x4d32ed*/
  *((_DWORD *)this + 6) = &TESObjectCELL::`vftable'{for `TESFullName'}; /*0x4d32f3*/
  if ( (this->member.flags & 0x4000) == 0 ) /*0x4d330c*/
  {
    sub_4CED70((TESObjectCELL *)this); /*0x4d330e*/
    v2 = *((_DWORD *)this + 0x10); /*0x4d3313*/
    if ( v2 ) /*0x4d3318*/
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 0x10))(v2, 1); /*0x4d3321*/
      *((_DWORD *)this + 0x10) = 0; /*0x4d3323*/
    }
    v3 = *((_DWORD *)this + 0x11); /*0x4d3326*/
    if ( v3 ) /*0x4d332b*/
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x10))(v3, 1); /*0x4d3334*/
      *((_DWORD *)this + 0x11) = 0; /*0x4d3336*/
    }
    v4 = sub_41F9B0((ExtraDataList *)this + 2); /*0x4d333c*/
    v5 = v4; /*0x4d3341*/
    if ( v4 ) /*0x4d3345*/
    {
      TESRegionList_Clear((TESRegionList *)v4); /*0x4d3349*/
      ((void (__thiscall *)(BSExtraData *, int))v5->vtbl->Destructor)(v5, 1); /*0x4d3356*/
    }
  }
  if ( !g_TESDataHandler->activeFileState.unknownAfterActiveFileState[2] && (*((_BYTE *)this + 0x24) & 1) == 0 ) /*0x4d336a*/
  {
    v6 = *((TESWorldSpace **)this + 0x14); /*0x4d336c*/
    if ( v6 ) /*0x4d3371*/
      TESWorldSpace_RemoveCellFromCellMap(v6, (TESObjectCELL *)this); /*0x4d3374*/
  }
  if ( this == (TESForm *)unk_B3B784 ) /*0x4d337f*/
    unk_B3B784 = 0; /*0x4d3381*/
  v7 = MEMORY[0xB333A0]; /*0x4d3387*/
  if ( MEMORY[0xB333A0] ) /*0x4d3387*/
  {
    if ( (TESForm *)v7->currentExteriorCell == this ) /*0x4d3393*/
      v7->currentExteriorCell = 0; /*0x4d3395*/
  }
  if ( *(TESForm **)&MEMORY[0xB33E90][0x1394] == this ) /*0x4d339e*/
    *(_DWORD *)&MEMORY[0xB33E90][0x1394] = 0; /*0x4d33a0*/
  ExtraDataList_RemoveAllNonpersistentCellData((ExtraDataList *)this + 2); /*0x4d33ab*/
  FormHeapFree(*((_DWORD *)this + 0xF)); /*0x4d33b4*/
  *((_DWORD *)this + 0xF) = 0; /*0x4d33b9*/
  v8 = unk_B35C08; /*0x4d33c7*/
  if ( unk_B35C08 ) /*0x4d33bc*/
  {
    sub_533980(unk_B35C08); /*0x4d33cb*/
    MemoryHeap_Free_checked((char *)v8 - *((unsigned __int8 *)v8 + 0xFFFFFFFF)); /*0x4d33dc*/
  }
  unk_B35C08 = 0; /*0x4d33e1*/
  v9 = *((_DWORD *)this + 0x15); /*0x4d33e7*/
  if ( v9 ) /*0x4d33f1*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x4d33f7*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x4d340d*/
  }
  BaseExtraList_destr((ExtraDataList *)this + 2); /*0x4d3416*/
  FormHeapFree(*((_DWORD *)this + 7)); /*0x4d341f*/
  *((_DWORD *)this + 7) = 0; /*0x4d3429*/
  *((_WORD *)this + 0x11) = 0; /*0x4d342c*/
  *((_WORD *)this + 0x10) = 0; /*0x4d3430*/
  return TESForm_destr(this); /*0x4d3441*/
}
