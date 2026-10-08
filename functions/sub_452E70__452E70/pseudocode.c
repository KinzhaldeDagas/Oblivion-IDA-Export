//
// Verified: map lookup keyed by cell FormID, stores a reference FormID; on additional insert, preserves old inline ID in an 8-byte overflow node and pushes new ID to head. Callers: UnloadForm 463C26, LoadGame 466065/46627A. Probable Fallout class homolog from matching named constructor 82601B90 (37-bucket uint->BSSimpleList<uint> map); Fallout container implementation differs, so only architecture-level homolog.
// Verified return: callers ignore result; return is allocator/helper artifact and is not a stable semantic result.
void __thiscall InteriorCellNewReferencesMap_AddReferenceID(
        InteriorCellNewReferencesMap *self,
        unsigned int cellFormID,
        unsigned int referenceID)
{
  unsigned int v3; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  unsigned int v7; // edi
  _DWORD *v8; // eax

  v3 = cellFormID; /*0x452e71*/
  if ( NiTMap_GetAt(self, cellFormID, &cellFormID) ) /*0x452e7f*/
  {
    v6 = (_DWORD *)cellFormID; /*0x452ebf*/
  }
  else
  {
    v5 = (_DWORD *)FormHeapAlloc(8u); /*0x452e8a*/
    if ( v5 ) /*0x452e94*/
    {
      *v5 = 0; /*0x452e9a*/
      v5[1] = 0; /*0x452ea0*/
      v6 = v5; /*0x452ea7*/
      NiTMap_SetAt(self, v3, (int)v5); /*0x452ea9*/
    }
    else
    {
      v6 = 0; /*0x452eb6*/
      NiTMap_SetAt(self, v3, 0); /*0x452eb8*/
    }
  }
  v7 = referenceID; /*0x452ec3*/
  if ( referenceID ) /*0x452ec9*/
  {
    if ( *v6 ) /*0x452ecb*/
    {
      v8 = (_DWORD *)FormHeapAlloc(8u); /*0x452ed2*/
      if ( v8 ) /*0x452edc*/
      {
        *v8 = *v6; /*0x452ee0*/
        v8[1] = 0; /*0x452ee2*/
        v8[1] = v6[1]; /*0x452eec*/
        *v6 = v7; /*0x452eef*/
        v6[1] = v8; /*0x452ef2*/
        return; /*0x452ef7*/
      }
      *(_DWORD *)4 = v6[1]; /*0x452eff*/
      v6[1] = 0; /*0x452f02*/
    }
    *v6 = v7; /*0x452f05*/
  }
}
