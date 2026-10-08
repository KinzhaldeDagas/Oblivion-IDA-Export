__int16 __cdecl sub_4DA7F0(int source, float a2)
{
  int v0; // ecx
  TESSaveLoadGame_SerializationView *v5; // ecx
  unsigned int v6; // edi
  unsigned __int8 *bufferCursor; // ebp
  unsigned int v8; // eax
  int v9; // ebx
  int v10; // esi
  const char *v11; // eax
  char v12; // dl
  unsigned int v13; // eax
  TESSaveLoadGame_SerializationView *v14; // ecx
  int Src; // [esp+14h] [ebp-4h] BYREF

  Src = v0; /*0x4da7f0*/
  if ( kTerrainLODQuadRayDirectionZ == a2 ) /*0x4da800*/
    a2 = ::source; /*0x4da808*/
  v5 = g_TESSaveLoadGame; /*0x4da80c*/
  v6 = 0; /*0x4da81b*/
  Src = 0; /*0x4da81d*/
  bufferCursor = v5->bufferCursor; /*0x4da821*/
  LOWORD(v8) = (unsigned __int16)SaveLoad_SaveData(v5, &Src, 2u); /*0x4da825*/
  v9 = source; /*0x4da82a*/
  if ( !source ) /*0x4da830*/
  {
    LOWORD(v8) = Src; /*0x4da8d8*/
    *(_WORD *)bufferCursor = Src; /*0x4da8de*/
    return v8; /*0x4da8de*/
  }
  if ( (*(_BYTE *)(source + 8) & 8) != 0 ) /*0x4da83f*/
  {
    if ( !*(_WORD *)(source + 0x46) ) /*0x4da845*/
    {
      *(_WORD *)bufferCursor = Src; /*0x4da8d0*/
      return v8; /*0x4da8d7*/
    }
    do /*0x4da8b9*/
    {
      v10 = *(_DWORD *)(*(_DWORD *)(v9 + 0x40) + 4 * v6); /*0x4da853*/
      if ( v10 ) /*0x4da858*/
      {
        if ( *(_DWORD *)(v10 + 0x44) ) /*0x4da85a*/
        {
          v11 = *(const char **)(v10 + 8); /*0x4da860*/
          v12 = (_BYTE)v11 + 1; /*0x4da863*/
          v13 = (unsigned int)&v11[strlen(v11) + 1]; /*0x4da86d*/
          v14 = g_TESSaveLoadGame; /*0x4da86f*/
          LOBYTE(source) = v13 - v12; /*0x4da877*/
          SaveLoad_SaveData(v14, &source, 1u); /*0x4da882*/
          SaveLoad_SaveData(g_TESSaveLoadGame, *(const void **)(v10 + 8), (unsigned __int8)source); /*0x4da897*/
          BSAnimGroupSequence_SaveState((float *)v10, a2); /*0x4da8a6*/
          ++Src; /*0x4da8ab*/
        }
      }
      v8 = *(unsigned __int16 *)(v9 + 0x46); /*0x4da8b0*/
      ++v6; /*0x4da8b4*/
    }
    while ( v6 < v8 ); /*0x4da8b9*/
  }
  *(_WORD *)bufferCursor = Src; /*0x4da8c2*/
  return v8; /*0x4da8c9*/
}
