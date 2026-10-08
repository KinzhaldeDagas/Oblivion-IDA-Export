// Maps a full FormID to its compact save-game IRef index: returns an existing array index or appends the FormID and returns the new index. Created IDs (0xFFxxxxxx) pass through unchanged. This is FormID->IRef, despite the former reversed name.
unsigned int __thiscall SaveLoad_FormIDToIRef(TESSaveLoadGame_SerializationView *self, unsigned int formID)
{
  unsigned int result; // eax
  unsigned int *irefTable; // esi
  unsigned int v5; // ecx
  _DWORD *v6; // edx
  unsigned int v7; // edi
  unsigned int v8; // ecx
  unsigned int v9; // edx

  if ( TESDataHandler_IsFormIDCreated_(formID) ) /*0x45e0df*/
    return formID; /*0x45e0ec*/
  irefTable = (unsigned int *)self->irefTable; /*0x45e0ef*/
  v5 = irefTable[3]; /*0x45e0f2*/
  result = 0; /*0x45e0f5*/
  if ( v5 ) /*0x45e0f9*/
  {
    v6 = (_DWORD *)irefTable[1]; /*0x45e0fb*/
    while ( *v6 != formID ) /*0x45e102*/
    {
      ++result; /*0x45e104*/
      ++v6; /*0x45e107*/
      if ( result >= v5 ) /*0x45e10c*/
        goto LABEL_7; /*0x45e10c*/
    }
  }
  else
  {
LABEL_7:
    v7 = irefTable[3]; /*0x45e10e*/
    if ( v5 >= irefTable[2] ) /*0x45e114*/
      NiTLargeArray_Resize32(irefTable, v5 + irefTable[5]); /*0x45e11e*/
    if ( v7 < irefTable[3] ) /*0x45e126*/
    {
      if ( formID ) /*0x45e146*/
      {
        v9 = irefTable[1]; /*0x45e148*/
        if ( !*(_DWORD *)(v9 + 4 * v7) ) /*0x45e14b*/
        {
          ++irefTable[4]; /*0x45e151*/
          *(_DWORD *)(v9 + 4 * v7) = formID; /*0x45e157*/
          return v7; /*0x45e15f*/
        }
      }
      else if ( *(_DWORD *)(irefTable[1] + 4 * v7) ) /*0x45e165*/
      {
        --irefTable[4]; /*0x45e16b*/
      }
    }
    else
    {
      irefTable[3] = v7 + 1; /*0x45e12d*/
      if ( formID ) /*0x45e130*/
      {
        v8 = irefTable[1]; /*0x45e132*/
        ++irefTable[4]; /*0x45e135*/
        *(_DWORD *)(v8 + 4 * v7) = formID; /*0x45e139*/
        return v7; /*0x45e141*/
      }
    }
    *(_DWORD *)(irefTable[1] + 4 * v7) = formID; /*0x45e172*/
    return v7; /*0x45e175*/
  }
  return result; /*0x45e0e8*/
}
