char __thiscall sub_4A51F0(char *this, Data *a1)
{
  char *v3; // ebx
  unsigned int length; // ecx
  unsigned int v6; // esi
  char *v7; // eax
  char *v8; // edi
  char *v9; // edi
  unsigned int v10; // ebp
  _DWORD *v11; // eax
  unsigned int v12; // esi

  v3 = 0;
  if ( !a1 || TESFile_GetChunkType(a1) != 0x444D4452 && TESFile_GetChunkType(a1) != 0x44534452 )
    return 0;
  if ( TESFile_GetChunkType(a1) == 0x444D4452 )
  {
    TESFile_GetChunkData4(a1, this + 8);
    return 1;
  }
  length = a1->currentChunk.length;
  v6 = length / 0xC;
  if ( length == 4 )
    return 0;
  v7 = (char *)FormHeapAlloc((0xC * (unsigned __int64)v6) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v6);
  v8 = v7;
  if ( v7 )
  {
    sub_401080(v7, 0xC, v6, (void *(__thiscall *)(void *))sub_4A5040);
    v3 = v8;
  }
  TESFile_GetChunkData(a1, v3, 0xC * v6);
  if ( v6 )
  {
    v9 = v3;
    v10 = v6;
    do
    {
      v11 = (_DWORD *)FormHeapAlloc(0xCu);
      if ( v11 )
      {
        *v11 = 0;
        v11[1] = 0xF;
        v11[2] = 0;
        v12 = (unsigned int)v11;
      }
      else
      {
        v12 = 0;
      }
      *(_DWORD *)v12 = *(_DWORD *)v9;
      *(_DWORD *)(v12 + 4) = *((_DWORD *)v9 + 1);
      *(_DWORD *)(v12 + 8) = *((_DWORD *)v9 + 2);
      if ( *(_DWORD *)v12 && sub_4473F0(*(void **)v12) )
      {
        *(_DWORD *)v12 = sub_4473F0(*(void **)v12);
        BSSimpleList_PushBack((_DWORD *)this + 3, v12);
      }
      else
      {
        FormHeapFree(v12);
      }
      v9 += 0xC;
      --v10;
    }
    while ( v10 );
  }
  FormHeapFree((unsigned int)v3);
  return 1;
}
