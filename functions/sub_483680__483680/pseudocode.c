// Verified exterior-cell unload: cancels that cell's in-flight DistantLODLoaderTask, removes queued model-usage counts for its packed cell label, releases the cell slot, and clears its coordinates.
void __thiscall GridDistantArray_UnloadCell(GridDistantArray *this, int cellX, int cellY)
{
  int v3; // esi
  int v4; // eax
  int v5; // ecx
  LONG (__stdcall *v6)(volatile LONG *); // ebp
  void (__thiscall ***v7)(_DWORD, int); // edi
  int v8; // edi
  unsigned int v9; // eax

  v3 = *((_DWORD *)this + 4) + 0x10 * (cellY + cellX * *((_DWORD *)this + 3)); /*0x483693*/
  v4 = *(_DWORD *)(v3 + 4); /*0x483696*/
  if ( v4 ) /*0x48369b*/
  {
    v5 = *(_DWORD *)(v4 + 0x1C); /*0x48369d*/
    v6 = InterlockedDecrement; /*0x4836a3*/
    if ( v5 ) /*0x4836aa*/
    {
      (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)v5 + 0x88))(v5, &cellX, v4); /*0x4836ba*/
      if ( cellX ) /*0x4836c2*/
      {
        v7 = (void (__thiscall ***)(_DWORD, int))cellX; /*0x4836c4*/
        if ( !v6((volatile LONG *)(cellX + 4)) ) /*0x4836ca*/
          (**v7)(v7, 1); /*0x4836dc*/
      }
    }
    v8 = *(_DWORD *)(v3 + 4); /*0x4836de*/
    if ( v8 ) /*0x4836e3*/
    {
      if ( !v6((volatile LONG *)(v8 + 4)) ) /*0x4836e9*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x4836fb*/
      *(_DWORD *)(v3 + 4) = 0; /*0x4836fd*/
    }
    v9 = TESObjectCELL_PackExteriorGroupLabel(*(_WORD *)(v3 + 8), *(_WORD *)(v3 + 0xC)); /*0x48370a*/
    DistantLOD_RemoveCellModelUsages(v9);       // Verified GridDistantArray_UnloadCell calls DistantLOD_RemoveCellModelUsages with the packed exterior-cell label before clearing the cell slot. /*0x483710*/
  }
  if ( g_DistantLODLoaderTasksByCell ) /*0x48371a*/
    DistantLODLoaderTaskMap_CancelForCell( /*0x48372c*/
      (void *)g_DistantLODLoaderTasksByCell,
      *(_DWORD *)(v3 + 8),
      *(volatile LONG **)(v3 + 0xC));
  *(_BYTE *)v3 = 0; /*0x483731*/
  *(_DWORD *)(v3 + 8) = 0; /*0x483733*/
  *(_DWORD *)(v3 + 0xC) = 0; /*0x483736*/
  *(_BYTE *)(v3 + 1) = 0; /*0x483739*/
}
