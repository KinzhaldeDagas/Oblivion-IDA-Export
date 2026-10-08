unsigned __int16 __thiscall SaveLoad_WorldspaceFormIDToIndex(
        TESSaveLoadGame_SerializationView *self,
        unsigned int formID)
{
  unsigned int *worldspaceIDArray; // esi
  unsigned int v3; // ecx
  unsigned int v4; // eax
  _DWORD *v5; // edx
  unsigned int v6; // edi
  unsigned int v7; // ecx
  unsigned int v8; // edx

  worldspaceIDArray = (unsigned int *)self->worldspaceIDArray; /*0x45e186*/
  v3 = worldspaceIDArray[3]; /*0x45e189*/
  v4 = 0; /*0x45e18c*/
  if ( !v3 ) /*0x45e190*/
  {
LABEL_5:
    v6 = worldspaceIDArray[3]; /*0x45e1a3*/
    if ( v3 >= worldspaceIDArray[2] ) /*0x45e1a9*/
      NiTLargeArray_Resize32(worldspaceIDArray, v3 + worldspaceIDArray[5]); /*0x45e1b3*/
    if ( v6 < worldspaceIDArray[3] ) /*0x45e1bb*/
    {
      if ( formID ) /*0x45e1dc*/
      {
        v8 = worldspaceIDArray[1]; /*0x45e1de*/
        if ( !*(_DWORD *)(v8 + 4 * v6) ) /*0x45e1e1*/
        {
          ++worldspaceIDArray[4]; /*0x45e1e7*/
          *(_DWORD *)(v8 + 4 * v6) = formID; /*0x45e1ed*/
          LOWORD(v4) = v6; /*0x45e1f0*/
          return v4; /*0x45e1f6*/
        }
      }
      else if ( *(_DWORD *)(worldspaceIDArray[1] + 4 * v6) ) /*0x45e1fc*/
      {
        --worldspaceIDArray[4]; /*0x45e202*/
      }
    }
    else
    {
      worldspaceIDArray[3] = v6 + 1; /*0x45e1c2*/
      if ( formID ) /*0x45e1c5*/
      {
        v7 = worldspaceIDArray[1]; /*0x45e1c7*/
        ++worldspaceIDArray[4]; /*0x45e1ca*/
        *(_DWORD *)(v7 + 4 * v6) = formID; /*0x45e1ce*/
        LOWORD(v4) = v6; /*0x45e1d1*/
        return v4; /*0x45e1d7*/
      }
    }
    *(_DWORD *)(worldspaceIDArray[1] + 4 * v6) = formID; /*0x45e209*/
    LOWORD(v4) = v6; /*0x45e20c*/
    return v4; /*0x45e20c*/
  }
  v5 = (_DWORD *)worldspaceIDArray[1]; /*0x45e192*/
  while ( *v5 != formID ) /*0x45e197*/
  {
    ++v4; /*0x45e199*/
    ++v5; /*0x45e19c*/
    if ( v4 >= v3 ) /*0x45e1a1*/
      goto LABEL_5; /*0x45e1a1*/
  }
  return v4; /*0x45e1d5*/
}
