void __thiscall ArchiveFile::~ArchiveFile(ArchiveFile *this)
{
  *(_DWORD *)this = &ArchiveFile::`vftable';
  Arcghive_CheckDelete(*((volatile LONG **)this + 0x55));
  if ( *((_DWORD *)this + 6) )
    FormHeapFree(*((_DWORD *)this + 6));
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_BYTE *)this + 0x24) = 0;
  BSFile::~BSFile(this);
}
