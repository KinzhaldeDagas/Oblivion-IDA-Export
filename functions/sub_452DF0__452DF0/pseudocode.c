// Verified: manager flags1000 blocks removal and returns false. Looks up change entry; missing returns false. Existing entry: removes/frees when payload+4 is NULL or force true; frees nonnull payload via MemoryHeap_Free_checked then entry via FormHeapFree. Returns true even when existing nonempty entry is retained with force=false. Original class spelling remains Unknown; descriptive SaveLoadChangesMap name.
bool __thiscall SaveLoadChangesMap_RemoveChanges(ChangesMap *self, unsigned int formID, bool force)
{
  unsigned int v5; // esi
  unsigned int v6; // [esp+4h] [ebp-4h] BYREF

  if ( (g_TESSaveLoadGame->flags & 0x1000) != 0 ) /*0x452e02*/
    return 0; /*0x452e04*/
  v6 = 0; /*0x452e19*/
  NiTMap_GetAt(self, formID, &v6); /*0x452e21*/
  v5 = v6; /*0x452e26*/
  if ( !v6 ) /*0x452e2c*/
    return 0; /*0x452e69*/
  if ( !*(_DWORD *)(v6 + 4) || force ) /*0x452e39*/
  {
    NiTMap_RemoveAt(self, formID); /*0x452e3e*/
    if ( *(_DWORD *)(v5 + 4) ) /*0x452e43*/
      MemoryHeap_Free_checked(*(void **)(v5 + 4)); /*0x452e50*/
    FormHeapFree(v5); /*0x452e56*/
  }
  return 1; /*0x452e06*/
}
