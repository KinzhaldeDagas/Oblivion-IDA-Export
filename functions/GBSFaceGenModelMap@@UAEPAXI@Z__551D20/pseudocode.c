BSFaceGenModelMap *__thiscall BSFaceGenModelMap::`scalar deleting destructor'(BSFaceGenModelMap *this, char a2)
{
  BSFaceGenModelMap::~BSFaceGenModelMap(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
