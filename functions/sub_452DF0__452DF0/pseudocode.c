char __thiscall sub_452DF0(_DWORD *this, int a2, char a3)
{
  unsigned int v5; // esi
  unsigned int v6; // [esp+4h] [ebp-4h] BYREF

  if ( (SaveLoad_CurrentSavegame->flags & 0x1000) != 0 )
    return 0;
  v6 = 0;
  NiTMap_GetAt(this, a2, &v6);
  v5 = v6;
  if ( !v6 )
    return 0;
  if ( !*(_DWORD *)(v6 + 4) || a3 )
  {
    NiTMap_RemoveAt(this, a2);
    if ( *(_DWORD *)(v5 + 4) )
      MemoryHeap_Free_checked(*(void **)(v5 + 4));
    FormHeapFree(v5);
  }
  return 1;
}
