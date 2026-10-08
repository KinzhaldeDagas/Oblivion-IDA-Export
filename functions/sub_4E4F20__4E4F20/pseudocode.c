// Verified PGRI teardown: for each record, read its local point index, get the local TESPathGridPoint, then remove the connection to the remote point position stored at record+4; finally the PGRI list records are freed by TESPathGrid_ClearPGRIRecords.
void __thiscall TESPathGrid_RemovePGRICrossCellConnections(TESPathGrid *this)
{
  BSSimpleList_VoidPtr *p_PGRIRecords; // esi
  unsigned __int16 v3; // ax
  TESPathGridPoint *v4; // ecx

  if ( this->pointArray ) /*0x4e4f23*/
  {
    p_PGRIRecords = &this->PGRIRecords; /*0x4e4f2a*/
    if ( this != (TESPathGrid *)0xFFFFFFD8 ) /*0x4e4f2f*/
    {
      do /*0x4e4f65*/
      {
        if ( !p_PGRIRecords->firstNode.next && !p_PGRIRecords->firstNode.data ) /*0x4e4f37*/
          break; /*0x4e4f3a*/
        v3 = *(_WORD *)p_PGRIRecords->firstNode.data; /*0x4e4f3e*/
        if ( v3 < this->pointCount ) /*0x4e4f45*/
        {
          v4 = this->pointArray->data[v3]; /*0x4e4f50*/
          if ( v4 ) /*0x4e4f55*/
            TESPathGridPoint_RemoveNeighborAtPosition(v4, (const NiPoint3 *)((char *)p_PGRIRecords->firstNode.data + 4)); /*0x4e4f5b*/
        }
        p_PGRIRecords = (BSSimpleList_VoidPtr *)p_PGRIRecords->firstNode.next; /*0x4e4f60*/
      }
      while ( p_PGRIRecords ); /*0x4e4f65*/
    }
  }
}
