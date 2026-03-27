ArchiveFile *__thiscall ArchiveFileCompressed_constr(
        ArchiveFile *this,
        ArchiveFile *ArgList,
        int a3,
        int a4,
        size_t a5)
{
  const char *v6; // ebp
  _DWORD *v7; // edi
  unsigned int v8; // eax
  size_t v10; // [esp-4h] [ebp-28h]
  int v11; // [esp+0h] [ebp-24h]

  v6 = (const char *)ArgList;
  ArchiveFile::ArchiveFile(this, ArgList, a3, a4, a5, v11);
  LODWORD(v10) = 4;
  *(_DWORD *)this = &CompressedArchiveFile::`vftable';
  *((_DWORD *)this + 0x52) += sub_42C4A0((FILE **)this, (char *)this + 0x164, v10);
  v7 = (_DWORD *)FormHeapAlloc(0x38u);
  *((_DWORD *)this + 0x57) = v7;
  v7[8] = sub_42BA60;
  v7[9] = sub_42BA80;
  v7[0xA] = 0;
  v7[1] = 0;
  *v7 = 0;
  if ( zlib_InflateInitEx(v7, "1.2.1", 0x38) )
  {
    Zlib_inflateEnd(v7);
    if ( !ArgList )
      v6 = "<Unknown>";
    PrintError("Error initializing ZLib inflate stream for file %s.", v6);
    FormHeapFree((unsigned int)v7);
    *((_DWORD *)this + 0x57) = 0;
  }
  else
  {
    v8 = Size;
    if ( *((_DWORD *)this + 0x59) < (unsigned int)Size )
      v8 = *((_DWORD *)this + 0x59);
    *((_DWORD *)this + 0x5A) = v8;
    *((_DWORD *)this + 0x58) = FormHeapAlloc(v8);
    *((_DWORD *)this + 0x5B) = 0;
    *((_DWORD *)this + 0x5C) = 0;
  }
  return this;
}
