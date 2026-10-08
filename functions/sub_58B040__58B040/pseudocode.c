unsigned int __cdecl Tile::AddUserTrait(const char *name, int requestedID)
{
  char v2; // al
  int v3; // eax
  _DWORD *v4; // esi
  unsigned int *v5; // edi
  const unsigned __int8 *v6; // eax
  unsigned int v7; // ebp
  OblivionTileTraitEntry *v8; // esi
  OblivionTileTraitEntry *v9; // edi
  int v10; // edi
  OblivionTileTraitEntry *v11; // esi
  const unsigned __int8 *m_data; // ecx
  unsigned int endIndex; // esi
  unsigned int capacity; // ecx
  OblivionTileTraitEntry **data; // eax
  BSStringT v17[3]; // [esp-8h] [ebp-2Ch] BYREF
  BSStringT *v18; // [esp+14h] [ebp-10h]
  unsigned int v19; // [esp+20h] [ebp-4h]

  v2 = *name; /*0x58b069*/
  if ( *name == 0x26 ) /*0x58b06d*/
  {
    v3 = 0x1B; /*0x58b073*/
    goto LABEL_3; /*0x58b073*/
  }
  if ( v2 != 0x5F ) /*0x58b10c*/
  {
    v3 = v2 - 0x40; /*0x58b111*/
    if ( v3 > 0x20 ) /*0x58b117*/
      v3 -= 0x20; /*0x58b119*/
    if ( (unsigned int)v3 > 0x1A ) /*0x58b11e*/
      v3 = 0; /*0x58b129*/
LABEL_3:
    v4 = (_DWORD *)dword_B3B0B4[4 * v3]; /*0x58b078*/
    if ( v4 ) /*0x58b083*/
    {
      while ( 1 ) /*0x58b085*/
      {
        v5 = (unsigned int *)v4[2]; /*0x58b085*/
        v6 = (const unsigned __int8 *)v5[2]; /*0x58b08b*/
        v4 = (_DWORD *)*v4; /*0x58b091*/
        if ( *v6 ) /*0x58b08e*/
        {
          if ( !_mbsicmp(v6, (const unsigned __int8 *)name) ) /*0x58b097*/
            break; /*0x58b097*/
        }
        if ( !v4 ) /*0x58b0a9*/
          goto LABEL_7; /*0x58b0a9*/
      }
      ++v5[1]; /*0x58b18d*/
      return *v5; /*0x58b1a6*/
    }
LABEL_7:
    v7 = requestedID; /*0x58b0ab*/
    if ( requestedID == 0xFFFFFFFF ) /*0x58b0b2*/
      v7 = g_TileUserTraitTable.endIndex + 0x2710; /*0x58b0bb*/
    v8 = (OblivionTileTraitEntry *)FormHeapAlloc(0x10u); /*0x58b0c8*/
    v19 = 0; /*0x58b0d5*/
    if ( v8 ) /*0x58b0d9*/
    {
      v18 = v17; /*0x58b0e4*/
      v17[0].m_data = 0; /*0x58b0ea*/
      v17[0].m_dataLen = 0; /*0x58b0ec*/
      v17[0].m_bufLen = 0; /*0x58b0f0*/
      BSStringT_Set(v17, name, 0); /*0x58b0f4*/
      v9 = Tile::TraitEntry::Initialize(v8, v7, v17[0]); /*0x58b101*/
    }
    else
    {
      v9 = 0; /*0x58b1a7*/
    }
    v9->lookupHits = 0; /*0x58b1a9*/
    endIndex = g_TileUserTraitTable.endIndex; /*0x58b1ac*/
    capacity = g_TileUserTraitTable.capacity; /*0x58b1b3*/
    v19 = 0xFFFFFFFF; /*0x58b1bc*/
    if ( endIndex >= capacity ) /*0x58b1c4*/
      NiTArray_SetSize((unsigned __int16 *)&g_TileUserTraitTable, endIndex + g_TileUserTraitTable.growBy); /*0x58b1d5*/
    data = g_TileUserTraitTable.data; /*0x58b1e5*/
    if ( endIndex < g_TileUserTraitTable.endIndex ) /*0x58b1ea*/
    {
      if ( data[endIndex] ) /*0x58b1f8*/
      {
LABEL_30:
        data[endIndex] = v9; /*0x58b205*/
        return v7; /*0x58b208*/
      }
    }
    else
    {
      g_TileUserTraitTable.endIndex = endIndex + 1; /*0x58b1ef*/
    }
    ++g_TileUserTraitTable.count; /*0x58b1fd*/
    goto LABEL_30; /*0x58b1fd*/
  }
  v10 = 0; /*0x58b130*/
  if ( !g_TileUserTraitTable.endIndex ) /*0x58b139*/
    goto LABEL_7; /*0x58b139*/
  while ( 1 ) /*0x58b145*/
  {
    v11 = g_TileUserTraitTable.data[v10]; /*0x58b145*/
    m_data = (const unsigned __int8 *)v11->name.m_data; /*0x58b148*/
    if ( *m_data ) /*0x58b14b*/
    {
      if ( !_mbsicmp(m_data, (const unsigned __int8 *)name) ) /*0x58b154*/
        break; /*0x58b154*/
    }
    if ( ++v10 >= (unsigned int)g_TileUserTraitTable.endIndex ) /*0x58b16c*/
      goto LABEL_7; /*0x58b16c*/
  }
  ++v11->lookupHits; /*0x58b173*/
  return v11->id; /*0x58b179*/
}
