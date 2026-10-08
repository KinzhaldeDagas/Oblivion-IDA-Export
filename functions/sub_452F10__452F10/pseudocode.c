//
// Verified: keyed by worldspace FormID; allocates 12-byte record and stores referenceID, worldX>>12, worldY>>12 at offsets 0/4/8; worldZ unused. UnloadForm supplies GetPos X/Y and worldspace ID at 463C71; LoadGame callers 4660A2/4662C7. Probable Fallout homolog BGS SaveLoadReferencesMap::AddReference 825FA1B0: same worldspace/reference/location role, but Oblivion stores quantized XY cell coordinates and Fallout passes NiPoint3 into GetKeyForWorldCoord.
// Verified return: all callers ignore it; records are accumulated as side effects.
void __thiscall ExteriorCellNewReferencesMap_AddReference(
        ExteriorCellNewReferencesMap *self,
        unsigned int worldspaceFormID,
        unsigned int referenceID,
        float worldX,
        float worldY,
        float worldZ)
{
  unsigned int v6; // ebx
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  unsigned int *v10; // edi
  _DWORD *v11; // eax

  v6 = worldspaceFormID; /*0x452f11*/
  if ( NiTMap_GetAt(self, worldspaceFormID, &worldspaceFormID) ) /*0x452f1f*/
  {
    v9 = (_DWORD *)worldspaceFormID; /*0x452f5f*/
  }
  else
  {
    v8 = (_DWORD *)FormHeapAlloc(8u); /*0x452f2a*/
    if ( v8 ) /*0x452f34*/
    {
      *v8 = 0; /*0x452f3a*/
      v8[1] = 0; /*0x452f40*/
      v9 = v8; /*0x452f47*/
      NiTMap_SetAt(self, v6, (int)v8); /*0x452f49*/
    }
    else
    {
      v9 = 0; /*0x452f56*/
      NiTMap_SetAt(self, v6, 0); /*0x452f58*/
    }
  }
  v10 = (unsigned int *)FormHeapAlloc(0xCu); /*0x452f6e*/
  *v10 = referenceID; /*0x452f73*/
  v10[1] = (int)worldX >> 0xC; /*0x452f84*/
  worldspaceFormID = (int)worldY; /*0x452f8b*/
  v10[2] = (int)worldspaceFormID >> 0xC; /*0x452f96*/
  if ( *v9 ) /*0x452f99*/
  {
    v11 = (_DWORD *)FormHeapAlloc(8u); /*0x452fa0*/
    if ( v11 ) /*0x452faa*/
    {
      *v11 = *v9; /*0x452fae*/
      v11[1] = 0; /*0x452fb0*/
      v11[1] = v9[1]; /*0x452fba*/
      *v9 = v10; /*0x452fbd*/
      v9[1] = v11; /*0x452fc0*/
      return; /*0x452fc5*/
    }
    *(_DWORD *)4 = v9[1]; /*0x452fcd*/
    v9[1] = 0; /*0x452fd0*/
  }
  *v9 = v10; /*0x452fd3*/
}
