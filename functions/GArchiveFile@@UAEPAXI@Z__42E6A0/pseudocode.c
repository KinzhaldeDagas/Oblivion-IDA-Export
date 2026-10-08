ArchiveFile *__thiscall ArchiveFile::`scalar deleting destructor'(ArchiveFile *this, char a2)
{
  ArchiveFile::~ArchiveFile(this); /*0x42e6a3*/
  if ( (a2 & 1) != 0 ) /*0x42e6ad*/
    FormHeapFree((unsigned int)this); /*0x42e6b0*/
  return this; /*0x42e6ba*/
}
