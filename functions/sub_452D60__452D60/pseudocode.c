char __thiscall sub_452D60(_DWORD *this, int a2, int a3)
{
  int v5; // eax
  unsigned int v6; // esi
  _DWORD *v7; // [esp+4h] [ebp-4h] BYREF

  if ( (SaveLoad_CurrentSavegame->flags & 0x1000) != 0 )
    return 0;
  v5 = *(_DWORD *)(a2 + 0xC);
  v7 = 0;
  NiTMap_GetAt(this, v5, &v7);
  v6 = (unsigned int)v7;
  if ( !v7 )
    return 0;
  if ( !v7[1] )
    *v7 &= ~a3;
  if ( !*(_DWORD *)v6 )
  {
    NiTMap_RemoveAt(this, *(_DWORD *)(a2 + 0xC));
    if ( *(_DWORD *)(v6 + 4) )
      MemoryHeap_Free_checked(*(void **)(v6 + 4));
    FormHeapFree(v6);
  }
  return 1;
}
