// Verified duplicate check for a deferred cross-cell PGRI request: compares the point-array entry selected by the record's low u16 index and matches the stored neighbor NiPoint3 at +4 using fConstant_2 tolerance.
bool __thiscall TESPathGrid_HasPGRICrossCellLinkRequest(
        TESPathGrid *this,
        TESPathGridPoint *point,
        const NiPoint3 *neighborPosition)
{
  bool result; // al
  BSSimpleList_VoidPtr *p_PGRIRecords; // esi

  result = 0; /*0x4e4f73*/
  if ( this->pointArray ) /*0x4e4f75*/
  {
    if ( point ) /*0x4e4f82*/
    {
      p_PGRIRecords = &this->PGRIRecords; /*0x4e4f85*/
      if ( this != (TESPathGrid *)0xFFFFFFD8 ) /*0x4e4f8a*/
      {
        while ( 1 ) /*0x4e4f91*/
        {
          if ( !p_PGRIRecords->firstNode.next && !p_PGRIRecords->firstNode.data ) /*0x4e4f9a*/
            return 0; /*0x4e4fce*/
          if ( this->pointArray->data[*(unsigned __int16 *)p_PGRIRecords->firstNode.data] == point /*0x4e4fbb*/
            && sub_47D810((float *)p_PGRIRecords->firstNode.data + 1, &neighborPosition->x, fConstant_2) )
          {
            break; /*0x4e4fbb*/
          }
          p_PGRIRecords = (BSSimpleList_VoidPtr *)p_PGRIRecords->firstNode.next; /*0x4e4fc7*/
          if ( !p_PGRIRecords ) /*0x4e4fcc*/
            return 0; /*0x4e4fcc*/
        }
        return 1; /*0x4e4fda*/
      }
    }
  }
  return result; /*0x4e4fd3*/
}
