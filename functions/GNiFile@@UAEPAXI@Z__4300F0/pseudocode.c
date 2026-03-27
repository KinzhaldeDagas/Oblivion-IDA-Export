NiFile *__thiscall NiFile::`scalar deleting destructor'(NiFile *this, char a2)
{
  NiFile::~NiFile(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
