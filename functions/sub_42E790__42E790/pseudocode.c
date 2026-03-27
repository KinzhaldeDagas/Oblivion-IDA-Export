ArchiveFile *__thiscall sub_42E790(ArchiveFile *this, char a2)
{
  _DWORD *v3; // edi

  v3 = *((_DWORD **)this + 0x57);
  *(_DWORD *)this = &CompressedArchiveFile::`vftable';
  if ( v3 )
  {
    Zlib_inflateEnd(v3);
    FormHeapFree((unsigned int)v3);
  }
  if ( *((_DWORD *)this + 0x58) )
    FormHeapFree(*((_DWORD *)this + 0x58));
  ArchiveFile::~ArchiveFile(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
