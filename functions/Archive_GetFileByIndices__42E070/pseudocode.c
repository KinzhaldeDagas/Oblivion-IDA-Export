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

  InterlockedIncrement((volatile LONG *)(this + 0x1A8));
  v6 = 0;
  v7 = *(_DWORD *)(*(_DWORD *)(this + 0x178) + 0x10 * a2 + 0xC) + 0x10 * a3;
  if ( v7 )
  {
    if ( (((*(_BYTE *)(this + 0x194) >> 3) ^ (*(int *)(v7 + 0xC) < 0)) & 1) == 0 )
    {
      v8 = *(_DWORD *)(v7 + 0xC) & 0x7FFFFFFF;
      if ( v8 )
      {
        if ( (((*(_DWORD *)(v7 + 8) >> 0x1E) ^ (unsigned __int8)(*(_DWORD *)(this + 0x160) >> 2)) & 1) != 0 )
        {
          v11 = (ArchiveFile *)FormHeapAlloc(0x174u);
          if ( v11 )
          {
            HIDWORD(v14) = a4;
            LODWORD(v14) = *(_DWORD *)(v7 + 8) & 0x3FFFFFFF;
            v10 = ArchiveFileCompressed_constr(v11, ArgList, this, v8, v14);
            goto LABEL_10;
          }
        }
        else
        {
          v9 = (ArchiveFile *)FormHeapAlloc(0x15Cu);
          if ( v9 )
          {
            HIDWORD(v13) = a4;
            LODWORD(v13) = *(_DWORD *)(v7 + 8) & 0x3FFFFFFF;
            v10 = ArchiveFile::ArchiveFile(v9, ArgList, this, v8, v13, v15);
LABEL_10:
            v6 = v10;
            goto LABEL_11;
          }
        }
        v10 = 0;
        goto LABEL_10;
      }
    }
  }
LABEL_11:
  Arcghive_CheckDelete((volatile LONG *)this);
  return v6;
}
