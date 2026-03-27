char __thiscall sub_4A6F40(float *this, Data *a1)
{
  unsigned int length; // ebx
  unsigned int v5; // edi
  char *v7; // ebp
  _DWORD *v8; // eax
  float *v9; // ecx
  char *a1a; // [esp+28h] [ebp+4h]

  if ( !a1 || TESFile_GetChunkType(a1) != 0x444C5052 )
    return 0;
  length = a1->currentChunk.length;
  v5 = length >> 3;
  if ( (length & 7) != 0 )
  {
    PrintError("Invalid Region Point List data in file \"%s\".", a1->name);
    return 0;
  }
  if ( !length || !v5 )
    return 0;
  a1a = (char *)FormHeapAlloc((unsigned __int64)v5 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v5);
  TESFile_GetChunkData(a1, a1a, length);
  *(this + 9) = 0.0;
  v7 = a1a;
  do
  {
    v8 = (_DWORD *)FormHeapAlloc(8u);
    v9 = 0;
    if ( v8 )
      v9 = (float *)sub_4A6930(v8, v7);
    if ( *(this + 4) > (double)*v9 )
      *(this + 4) = *v9;
    if ( *(this + 5) > (double)v9[1] )
      *(this + 5) = v9[1];
    if ( *(this + 6) < (double)*v9 )
      *(this + 6) = *v9;
    if ( *(this + 7) < (double)v9[1] )
      *(this + 7) = v9[1];
    BSSimpleList_PushFront(this, (int)v9);
    ++*((_DWORD *)this + 9);
    v7 += 8;
    --v5;
  }
  while ( v5 );
  FormHeapFree((unsigned int)a1a);
  return 1;
}
