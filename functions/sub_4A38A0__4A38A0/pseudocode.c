char __thiscall sub_4A38A0(void *this, Data *a1)
{
  unsigned int length; // ebx
  unsigned int v3; // esi
  char *v5; // ebp
  int *v6; // edi
  unsigned int v7; // ebx
  _DWORD *v8; // eax
  _DWORD *v9; // esi
  _DWORD *v10; // eax

  if ( !a1 || TESFile_GetChunkType(a1) != 0x53474452 )
    return 0;
  length = a1->currentChunk.length;
  v3 = length >> 3;
  if ( (length & 7) != 0 )
  {
    PrintError("Invalid Region Grass Object Data in file \"%s\".", a1->name);
    return 0;
  }
  if ( v3 )
  {
    v5 = (char *)FormHeapAlloc((unsigned __int64)v3 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v3);
    TESFile_GetChunkData(a1, v5, length);
    v6 = (int *)v5;
    v7 = length >> 3;
    do
    {
      v8 = (_DWORD *)FormHeapAlloc(0xCu);
      v9 = 0;
      if ( v8 )
        v9 = sub_4A59E0(v8, v6);
      if ( v9 )
      {
        if ( (*(int (__thiscall **)(_DWORD *))(*v9 + 4))(v9) )
        {
          v10 = (_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x24))(this);
          sub_4A5FF0(v10, (int)v9);
        }
        else
        {
          (*(void (__thiscall **)(_DWORD *, int))(*v9 + 8))(v9, 1);
        }
      }
      v6 += 2;
      --v7;
    }
    while ( v7 );
    FormHeapFree((unsigned int)v5);
  }
  return 1;
}
