//
// Verified: keyed by worldspace FormID; allocates 12-byte record {cellFormID,cellX,cellY}, pushes newest at head and chains prior records. UnloadForm supplies cell and worldspace IDs plus cell coordinates 463CDA; LoadGame 465E99. Probable Fallout homolog BGSCellNumericIDArrayMap::AddReference 825FA0F8 by worldspace/cell ID relationship; Fallout stores cellID array instead of coordinate records.
// Verified return: caller ignores it; record insertion is a side effect.
void __thiscall ExteriorCellNewReferencesMap_AddCell(
        ExteriorCellNewReferencesMap *self,
        unsigned int worldspaceFormID,
        unsigned int cellFormID,
        int cellX,
        int cellY)
{
  unsigned int v5; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  int v10; // edx
  unsigned int *v11; // edi
  int v12; // eax
  _DWORD *v13; // eax

  v5 = worldspaceFormID; /*0x452fe1*/
  if ( NiTMap_GetAt(self, worldspaceFormID, &worldspaceFormID) ) /*0x452fef*/
  {
    v8 = (_DWORD *)worldspaceFormID; /*0x45302f*/
  }
  else
  {
    v7 = (_DWORD *)FormHeapAlloc(8u); /*0x452ffa*/
    if ( v7 ) /*0x453004*/
    {
      *v7 = 0; /*0x45300a*/
      v7[1] = 0; /*0x453010*/
      v8 = v7; /*0x453017*/
      NiTMap_SetAt(self, v5, (int)v7); /*0x453019*/
    }
    else
    {
      v8 = 0; /*0x453026*/
      NiTMap_SetAt(self, v5, 0); /*0x453028*/
    }
  }
  v9 = FormHeapAlloc(0xCu); /*0x453035*/
  v10 = cellX; /*0x45303e*/
  v11 = (unsigned int *)v9; /*0x453042*/
  v12 = cellY; /*0x453044*/
  *v11 = cellFormID; /*0x45304b*/
  v11[1] = v10; /*0x45304d*/
  v11[2] = v12; /*0x453050*/
  if ( *v8 ) /*0x453053*/
  {
    v13 = (_DWORD *)FormHeapAlloc(8u); /*0x45305a*/
    if ( v13 ) /*0x453064*/
    {
      *v13 = *v8; /*0x453068*/
      v13[1] = 0; /*0x45306a*/
      v13[1] = v8[1]; /*0x453074*/
      *v8 = v11; /*0x453077*/
      v8[1] = v13; /*0x45307a*/
      return; /*0x45307f*/
    }
    *(_DWORD *)4 = v8[1]; /*0x453087*/
    v8[1] = 0; /*0x45308a*/
  }
  *v8 = v11; /*0x45308d*/
}
