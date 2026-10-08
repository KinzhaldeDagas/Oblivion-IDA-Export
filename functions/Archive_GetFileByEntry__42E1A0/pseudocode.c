ArchiveFile *__thiscall Archive_GetFileByEntry(int this, int a2, int a3, ArchiveFile *ArgList)
{
  ArchiveFile *v5; // ebp
  ArchiveFile *v6; // eax
  ArchiveFile *v7; // eax
  ArchiveFile *v8; // eax
  size_t v10; // [esp-8h] [ebp-24h]
  size_t v11; // [esp-8h] [ebp-24h]
  int v12; // [esp+0h] [ebp-1Ch]

  InterlockedIncrement((volatile LONG *)(this + 0x1A8)); /*0x42e1cc*/
  v5 = 0; /*0x42e1d6*/
  if ( a2 /*0x42e201*/
    && (((*(_BYTE *)(this + 0x194) >> 3) ^ (*(int *)(a2 + 0xC) < 0)) & 1) == 0
    && (*(_DWORD *)(a2 + 0xC) & 0x7FFFFFFF) != 0 )
  {
    if ( (((*(_DWORD *)(a2 + 8) >> 0x1E) ^ (unsigned __int8)(*(_DWORD *)(this + 0x160) >> 2)) & 1) != 0 ) /*0x42e21a*/
    {
      v8 = (ArchiveFile *)FormHeapAlloc(0x174u); /*0x42e262*/
      if ( v8 ) /*0x42e278*/
      {
        HIDWORD(v11) = a3; /*0x42e284*/
        LODWORD(v11) = *(_DWORD *)(a2 + 8) & 0x3FFFFFFF; /*0x42e28b*/
        v7 = ArchiveFileCompressed_constr(v8, ArgList, this, *(_DWORD *)(a2 + 0xC) & 0x7FFFFFFF, v11); /*0x42e29b*/
        goto LABEL_10; /*0x42e2a0*/
      }
    }
    else
    {
      v6 = (ArchiveFile *)FormHeapAlloc(0x15Cu); /*0x42e221*/
      if ( v6 ) /*0x42e233*/
      {
        HIDWORD(v10) = a3; /*0x42e23f*/
        LODWORD(v10) = *(_DWORD *)(a2 + 8) & 0x3FFFFFFF; /*0x42e246*/
        v7 = ArchiveFile::ArchiveFile(v6, ArgList, this, *(_DWORD *)(a2 + 0xC) & 0x7FFFFFFF, v10, v12); /*0x42e256*/
LABEL_10:
        v5 = v7; /*0x42e2a4*/
        goto LABEL_11; /*0x42e2a4*/
      }
    }
    v7 = 0; /*0x42e2a2*/
    goto LABEL_10; /*0x42e2a2*/
  }
LABEL_11:
  Arcghive_CheckDelete((volatile LONG *)this); /*0x42e2ae*/
  return v5; /*0x42e2b7*/
}
