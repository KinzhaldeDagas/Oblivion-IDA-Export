BSFaceGenModelMap::Entry *__thiscall BSFaceGenModelMap::Entry::`scalar deleting destructor'(
        BSFaceGenModelMap::Entry *this,
        char a2)
{
  BSFaceGenModelMap::Entry::~Entry(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
