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

  BSFile_constr_noargs(this);
  v7 = a2;
  *(_DWORD *)this = &ArchiveFile::`vftable';
  if ( a2 )
  {
    do
    {
      v8 = *(_BYTE *)v7;
      *((_BYTE *)v7 + (ArchiveFile *)((char *)this + 0x3C) - a2) = *(_BYTE *)v7;
      v7 = (ArchiveFile *)((char *)v7 + 1);
    }
    while ( v8 );
  }
  *((_DWORD *)this + 0x55) = a3;
  *((_DWORD *)this + 6) = 0;
  InterlockedIncrement((volatile LONG *)(a3 + 0x1A8));
  v9 = Size;
  *((_DWORD *)this + 0x56) = a4;
  *((_DWORD *)this + 0x54) = Size;
  BSFile_SetByteSwap(this, 0);
  if ( (unsigned int)Size > (unsigned int)::Size && HIDWORD(Size) != 0xFFFFFFFF )
    v9 = ::Size;
  v10 = *((_DWORD *)this + 6) == 0;
  *((_DWORD *)this + 3) = v9;
  if ( v10 )
  {
    *((_DWORD *)this + 7) = *(_DWORD *)(*((_DWORD *)this + 0x55) + 0x1C);
    *((_DWORD *)this + 5) = 0;
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 6) = 0;
    if ( v9 )
      *((_DWORD *)this + 6) = FormHeapAlloc(v9);
    *((_BYTE *)this + 0x24) = 1;
  }
  if ( HIDWORD(Size) == 0xFFFFFFFF )
    *((_DWORD *)this + 4) = sub_42C3E0((FILE **)this, *((void **)this + 6), *((unsigned int *)this + 3), v12);
  return this;
}
