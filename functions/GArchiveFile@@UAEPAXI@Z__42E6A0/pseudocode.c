ArchiveFile *__thiscall ArchiveFile::`scalar deleting destructor'(ArchiveFile *this, char a2)
{
  ArchiveFile::~ArchiveFile(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
