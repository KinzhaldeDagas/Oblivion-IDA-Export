char __thiscall sub_4A6F40(float *this, Data *a1)
{
  UInt32 length; // ebx
  UInt32 v5; // edi
  char *v7; // ebp
  _DWORD *v8; // eax
  float *v9; // ecx
  char *a1a; // [esp+28h] [ebp+4h]

  if ( !a1 || TESFile_GetChunkType(a1) != 0x444C5052 ) /*0x4a6f7b*/
    return 0; /*0x4a6f7b*/
  length = a1->currentChunk.length; /*0x4a6f7d*/
  v5 = length >> 3; /*0x4a6f85*/
  if ( (length & 7) != 0 ) /*0x4a6f8b*/
  {
    PrintError("Invalid Region Point List data in file \"%s\".", a1->name); /*0x4a6f96*/
    return 0; /*0x4a6fb3*/
  }
  if ( !length || !v5 ) /*0x4a6fbc*/
    return 0; /*0x4a6fbc*/
  a1a = (char *)FormHeapAlloc((unsigned __int64)v5 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v5);
  TESFile_GetChunkData(a1, a1a, length); /*0x4a6fe1*/
  *(this + 9) = 0.0; /*0x4a6fe8*/
  v7 = a1a; /*0x4a6ffa*/
  do /*0x4a708a*/
  {
    v8 = (_DWORD *)FormHeapAlloc(8u); /*0x4a7002*/
    v9 = 0; /*0x4a700e*/
    if ( v8 ) /*0x4a7016*/
      v9 = (float *)sub_4A6930(v8, v7); /*0x4a7020*/
    if ( *(this + 4) > (double)*v9 ) /*0x4a7036*/
      *(this + 4) = *v9; /*0x4a703a*/
    if ( *(this + 5) > (double)v9[1] ) /*0x4a704a*/
      *(this + 5) = v9[1]; /*0x4a704f*/
    if ( *(this + 6) < (double)*v9 ) /*0x4a705e*/
      *(this + 6) = *v9; /*0x4a7062*/
    if ( *(this + 7) < (double)v9[1] ) /*0x4a7072*/
      *(this + 7) = v9[1]; /*0x4a7077*/
    BSSimpleList_PushFront(this, (int)v9); /*0x4a707d*/
    ++*((_DWORD *)this + 9); /*0x4a7082*/
    v7 += 8; /*0x4a7085*/
    --v5; /*0x4a7088*/
  }
  while ( v5 ); /*0x4a708a*/
  FormHeapFree((unsigned int)a1a); /*0x4a7095*/
  return 1; /*0x4a6fa0*/
}
