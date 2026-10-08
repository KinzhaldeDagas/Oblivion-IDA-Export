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

  v6 = (const char *)ArgList; /*0x42d707*/
  ArchiveFile::ArchiveFile(this, ArgList, a3, a4, a5, v11); /*0x42d716*/
  LODWORD(v10) = 4; /*0x42d71b*/
  *(_DWORD *)this = &CompressedArchiveFile::`vftable'; /*0x42d72e*/
  *((_DWORD *)this + 0x52) += sub_42C4A0((FILE **)this, (char *)this + 0x164, v10); /*0x42d739*/
  v7 = (_DWORD *)FormHeapAlloc(0x38u); /*0x42d746*/
  *((_DWORD *)this + 0x57) = v7; /*0x42d748*/
  v7[8] = sub_42BA60; /*0x42d758*/
  v7[9] = sub_42BA80; /*0x42d75f*/
  v7[0xA] = 0; /*0x42d766*/
  v7[1] = 0; /*0x42d769*/
  *v7 = 0; /*0x42d76c*/
  if ( zlib_InflateInitEx(v7, "1.2.1", 0x38) ) /*0x42d76e*/
  {
    Zlib_inflateEnd(v7); /*0x42d77b*/
    if ( !ArgList ) /*0x42d785*/
      v6 = "<Unknown>"; /*0x42d787*/
    PrintError("Error initializing ZLib inflate stream for file %s.", v6); /*0x42d792*/
    FormHeapFree((unsigned int)v7); /*0x42d798*/
    *((_DWORD *)this + 0x57) = 0; /*0x42d7a0*/
  }
  else
  {
    v8 = Size; /*0x42d7ae*/
    if ( *((_DWORD *)this + 0x59) < (unsigned int)Size ) /*0x42d7b5*/
      v8 = *((_DWORD *)this + 0x59); /*0x42d7b7*/
    *((_DWORD *)this + 0x5A) = v8; /*0x42d7ba*/
    *((_DWORD *)this + 0x58) = FormHeapAlloc(v8); /*0x42d7c8*/
    *((_DWORD *)this + 0x5B) = 0; /*0x42d7d0*/
    *((_DWORD *)this + 0x5C) = 0; /*0x42d7d6*/
  }
  return this; /*0x42d7de*/
}
