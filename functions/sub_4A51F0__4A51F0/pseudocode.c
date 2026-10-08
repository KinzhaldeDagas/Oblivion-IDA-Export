// Verified: accepts RDMD and RDSD chunks; RDMD populates TESRegionDataSound.regionSoundMetadata (+8), and RDSD builds the embedded TESRegionSoundNode list at +0xC.
char __thiscall TESRegionDataSound_LoadChunkData(char *this, Data *a1)
{
  char *v3; // ebx
  UInt32 length; // ecx
  unsigned int v6; // esi
  char *v7; // eax
  char *v8; // edi
  char *v9; // edi
  unsigned int v10; // ebp
  _DWORD *v11; // eax
  unsigned int v12; // esi

  v3 = 0; /*0x4a521f*/
  if ( !a1 || TESFile_GetChunkType(a1) != 0x444D4452 && TESFile_GetChunkType(a1) != 0x44534452 ) /*0x4a5243*/
    return 0; /*0x4a5243*/
  if ( TESFile_GetChunkType(a1) == 0x444D4452 ) /*0x4a5255*/
  {
    TESFile_GetChunkData4(a1, this + 8); /*0x4a525d*/
    return 1; /*0x4a5264*/
  }
  length = a1->currentChunk.length; /*0x4a5269*/
  v6 = length / 0xC; /*0x4a5278*/
  if ( length == 4 ) /*0x4a527e*/
    return 0; /*0x4a536c*/
  v7 = (char *)FormHeapAlloc((0xC * (unsigned __int64)v6) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v6);
  v8 = v7; /*0x4a529c*/
  if ( v7 ) /*0x4a52ab*/
  {
    sub_401080(v7, 0xC, v6, (void *(__thiscall *)(void *))sub_4A5040); /*0x4a52b6*/
    v3 = v8; /*0x4a52bb*/
  }
  TESFile_GetChunkData(a1, v3, 0xC * v6); /*0x4a52d0*/
  if ( v6 ) /*0x4a52d7*/
  {
    v9 = v3; /*0x4a52dd*/
    v10 = v6; /*0x4a52df*/
    do /*0x4a535d*/
    {
      v11 = (_DWORD *)FormHeapAlloc(0xCu); /*0x4a52e3*/
      if ( v11 ) /*0x4a52ed*/
      {
        *v11 = 0; /*0x4a52ef*/
        v11[1] = 0xF; /*0x4a52f5*/
        v11[2] = 0; /*0x4a52fc*/
        v12 = (unsigned int)v11; /*0x4a5303*/
      }
      else
      {
        v12 = 0; /*0x4a5307*/
      }
      *(_DWORD *)v12 = *(_DWORD *)v9; /*0x4a530b*/
      *(_DWORD *)(v12 + 4) = *((_DWORD *)v9 + 1); /*0x4a5310*/
      *(_DWORD *)(v12 + 8) = *((_DWORD *)v9 + 2); /*0x4a5316*/
      if ( *(_DWORD *)v12 && sub_4473F0(*(void **)v12) ) /*0x4a5326*/
      {
        *(_DWORD *)v12 = sub_4473F0(*(void **)v12); /*0x4a5345*/
        BSSimpleList_PushBack((_DWORD *)this + 3, v12); /*0x4a5347*/
      }
      else
      {
        FormHeapFree(v12); /*0x4a534f*/
      }
      v9 += 0xC; /*0x4a5357*/
      --v10; /*0x4a535a*/
    }
    while ( v10 ); /*0x4a535d*/
  }
  FormHeapFree((unsigned int)v3); /*0x4a5360*/
  return 1; /*0x4a536e*/
}
