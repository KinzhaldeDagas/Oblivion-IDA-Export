ArchiveFile *__userpurge ArchiveFile::ArchiveFile@<eax>(
        ArchiveFile *this@<ecx>,
        ArchiveFile *a2,
        int a3,
        int a4,
        size_t Size,
        int a6)
{
  ArchiveFile *v7; // eax
  char v8; // cl
  unsigned int v9; // edi
  bool v10; // zf
  int v12; // [esp+0h] [ebp-24h]

  BSFile_constr_noargs(this); /*0x42d56b*/
  v7 = a2; /*0x42d570*/
  *(_DWORD *)this = &ArchiveFile::`vftable'; /*0x42d57c*/
  if ( a2 ) /*0x42d582*/
  {
    do /*0x42d59a*/
    {
      v8 = *(_BYTE *)v7; /*0x42d590*/
      *((_BYTE *)v7 + (ArchiveFile *)((char *)this + 0x3C) - a2) = *(_BYTE *)v7; /*0x42d592*/
      v7 = (ArchiveFile *)((char *)v7 + 1); /*0x42d595*/
    }
    while ( v8 ); /*0x42d59a*/
  }
  *((_DWORD *)this + 0x55) = a3; /*0x42d5a0*/
  *((_DWORD *)this + 6) = 0; /*0x42d5ac*/
  InterlockedIncrement((volatile LONG *)(a3 + 0x1A8)); /*0x42d5af*/
  v9 = Size; /*0x42d5b9*/
  *((_DWORD *)this + 0x56) = a4; /*0x42d5c0*/
  *((_DWORD *)this + 0x54) = Size; /*0x42d5c6*/
  BSFile_SetByteSwap(this, 0); /*0x42d5cc*/
  if ( (unsigned int)Size > (unsigned int)::Size && HIDWORD(Size) != 0xFFFFFFFF ) /*0x42d5e1*/
    v9 = ::Size; /*0x42d5e3*/
  v10 = *((_DWORD *)this + 6) == 0; /*0x42d5e5*/
  *((_DWORD *)this + 3) = v9; /*0x42d5e8*/
  if ( v10 ) /*0x42d5eb*/
  {
    *((_DWORD *)this + 7) = *(_DWORD *)(*((_DWORD *)this + 0x55) + 0x1C); /*0x42d5f8*/
    *((_DWORD *)this + 5) = 0; /*0x42d5fb*/
    *((_DWORD *)this + 4) = 0; /*0x42d5fe*/
    *((_DWORD *)this + 6) = 0; /*0x42d601*/
    if ( v9 ) /*0x42d604*/
      *((_DWORD *)this + 6) = FormHeapAlloc(v9); /*0x42d60f*/
    *((_BYTE *)this + 0x24) = 1; /*0x42d612*/
  }
  if ( HIDWORD(Size) == 0xFFFFFFFF ) /*0x42d619*/
    *((_DWORD *)this + 4) = sub_42C3E0((FILE **)this, *((void **)this + 6), *((unsigned int *)this + 3), v12); /*0x42d62b*/
  return this; /*0x42d630*/
}
