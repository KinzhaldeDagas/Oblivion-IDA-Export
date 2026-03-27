BSFile *__thiscall BSFile::`scalar deleting destructor'(BSFile *this, char a2)
{
  BSFile::~BSFile(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
