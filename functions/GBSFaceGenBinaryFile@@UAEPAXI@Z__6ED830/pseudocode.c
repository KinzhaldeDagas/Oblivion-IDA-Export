BSFaceGenBinaryFile *__thiscall BSFaceGenBinaryFile::`scalar deleting destructor'(BSFaceGenBinaryFile *this, char a2)
{
  BSFaceGenBinaryFile::~BSFaceGenBinaryFile(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
