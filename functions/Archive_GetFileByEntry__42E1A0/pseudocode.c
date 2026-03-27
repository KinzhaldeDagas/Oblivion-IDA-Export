ArchiveFile *__thiscall Archive_GetFileByEntry(int this, int a2, int a3, ArchiveFile *ArgList)
{
  ArchiveFile *v5; // ebp
  ArchiveFile *v6; // eax
  ArchiveFile *v7; // eax
  ArchiveFile *v8; // eax
  size_t v10; // [esp-8h] [ebp-24h]
  size_t v11; // [esp-8h] [ebp-24h]
  int v12; // [esp+0h] [ebp-1Ch]

  InterlockedIncrement((volatile LONG *)(this + 0x1A8));
  v5 = 0;
  if ( a2
    && (((*(_BYTE *)(this + 0x194) >> 3) ^ (*(int *)(a2 + 0xC) < 0)) & 1) == 0
    && (*(_DWORD *)(a2 + 0xC) & 0x7FFFFFFF) != 0 )
  {
    if ( (((*(_DWORD *)(a2 + 8) >> 0x1E) ^ (unsigned __int8)(*(_DWORD *)(this + 0x160) >> 2)) & 1) != 0 )
    {
      v8 = (ArchiveFile *)FormHeapAlloc(0x174u);
      if ( v8 )
      {
        HIDWORD(v11) = a3;
        LODWORD(v11) = *(_DWORD *)(a2 + 8) & 0x3FFFFFFF;
        v7 = ArchiveFileCompressed_constr(v8, ArgList, this, *(_DWORD *)(a2 + 0xC) & 0x7FFFFFFF, v11);
        goto LABEL_10;
      }
    }
    else
    {
      v6 = (ArchiveFile *)FormHeapAlloc(0x15Cu);
      if ( v6 )
      {
        HIDWORD(v10) = a3;
        LODWORD(v10) = *(_DWORD *)(a2 + 8) & 0x3FFFFFFF;
        v7 = ArchiveFile::ArchiveFile(v6, ArgList, this, *(_DWORD *)(a2 + 0xC) & 0x7FFFFFFF, v10, v12);
LABEL_10:
        v5 = v7;
        goto LABEL_11;
      }
    }
    v7 = 0;
    goto LABEL_10;
  }
LABEL_11:
  Arcghive_CheckDelete((volatile LONG *)this);
  return v5;
}
