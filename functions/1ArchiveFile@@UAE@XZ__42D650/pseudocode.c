void __thiscall ArchiveFile::~ArchiveFile(ArchiveFile *this)
{
  *(_DWORD *)this = &ArchiveFile::`vftable'; /*0x42d679*/
  Arcghive_CheckDelete(*((volatile LONG **)this + 0x55)); /*0x42d68b*/
  if ( *((_DWORD *)this + 6) ) /*0x42d690*/
    FormHeapFree(*((_DWORD *)this + 6)); /*0x42d698*/
  *((_DWORD *)this + 6) = 0; /*0x42d6a2*/
  *((_DWORD *)this + 7) = 0; /*0x42d6a5*/
  *((_BYTE *)this + 0x24) = 0; /*0x42d6a8*/
  BSFile::~BSFile(this); /*0x42d6b3*/
}
