ArchiveFile *__thiscall Archive_GetFileByIndices(int this, int a2, int a3, int a4, ArchiveFile *ArgList)
{
  ArchiveFile *v6; // ebp
  int v7; // esi
  int v8; // ebx
  ArchiveFile *v9; // eax
  ArchiveFile *v10; // eax
  ArchiveFile *v11; // eax
  size_t v13; // [esp-8h] [ebp-28h]
  size_t v14; // [esp-8h] [ebp-28h]
  int v15; // [esp+0h] [ebp-20h]

  InterlockedIncrement((volatile LONG *)(this + 0x1A8)); /*0x42e09d*/
  v6 = 0; /*0x42e0b7*/
  v7 = *(_DWORD *)(*(_DWORD *)(this + 0x178) + 0x10 * a2 + 0xC) + 0x10 * a3; /*0x42e0b9*/
  if ( v7 ) /*0x42e0bd*/
  {
    if ( (((*(_BYTE *)(this + 0x194) >> 3) ^ (*(int *)(v7 + 0xC) < 0)) & 1) == 0 ) /*0x42e0d8*/
    {
      v8 = *(_DWORD *)(v7 + 0xC) & 0x7FFFFFFF; /*0x42e0de*/
      if ( v8 ) /*0x42e0e4*/
      {
        if ( (((*(_DWORD *)(v7 + 8) >> 0x1E) ^ (unsigned __int8)(*(_DWORD *)(this + 0x160) >> 2)) & 1) != 0 ) /*0x42e0fe*/
        {
          v11 = (ArchiveFile *)FormHeapAlloc(0x174u); /*0x42e13d*/
          if ( v11 ) /*0x42e153*/
          {
            HIDWORD(v14) = a4; /*0x42e160*/
            LODWORD(v14) = *(_DWORD *)(v7 + 8) & 0x3FFFFFFF; /*0x42e167*/
            v10 = ArchiveFileCompressed_constr(v11, ArgList, this, v8, v14); /*0x42e16d*/
            goto LABEL_10; /*0x42e172*/
          }
        }
        else
        {
          v9 = (ArchiveFile *)FormHeapAlloc(0x15Cu); /*0x42e105*/
          if ( v9 ) /*0x42e117*/
          {
            HIDWORD(v13) = a4; /*0x42e124*/
            LODWORD(v13) = *(_DWORD *)(v7 + 8) & 0x3FFFFFFF; /*0x42e12b*/
            v10 = ArchiveFile::ArchiveFile(v9, ArgList, this, v8, v13, v15); /*0x42e131*/
LABEL_10:
            v6 = v10; /*0x42e176*/
            goto LABEL_11; /*0x42e176*/
          }
        }
        v10 = 0; /*0x42e174*/
        goto LABEL_10; /*0x42e174*/
      }
    }
  }
LABEL_11:
  Arcghive_CheckDelete((volatile LONG *)this); /*0x42e180*/
  return v6; /*0x42e189*/
}
