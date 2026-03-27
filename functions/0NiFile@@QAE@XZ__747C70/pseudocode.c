NiFile *__userpurge NiFile::NiFile@<eax>(NiFile *this@<ecx>, char *Filename, int a3, size_t Size)
{
  const char *v5; // eax
  bool v6; // al

  NiBinaryStream_constr(this);
  *(_DWORD *)this = &NiFile::`vftable';
  NiFile_SetByteSwap(this, 0);
  *((_DWORD *)this + 8) = a3;
  if ( a3 )
  {
    v5 = "wb";
    if ( a3 != 1 )
      v5 = (const char *)&aAb;
  }
  else
  {
    v5 = "rb";
  }
  v6 = !fopen_s((FILE **)this + 7, Filename, v5) && *((_DWORD *)this + 7);
  *((_BYTE *)this + 0x24) = v6;
  *((_DWORD *)this + 3) = Size;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  if ( v6 && (_DWORD)Size )
  {
    *((_DWORD *)this + 6) = FormHeapAlloc(Size);
    return this;
  }
  else
  {
    *((_DWORD *)this + 6) = 0;
    return this;
  }
}
