BSFaceGenModelMap *__thiscall BSFaceGenModelMap::`scalar deleting destructor'(BSFaceGenModelMap *this, char a2)
{
  BSFaceGenModelMap::~BSFaceGenModelMap(this); /*0x551d23*/
  if ( (a2 & 1) != 0 ) /*0x551d2d*/
    FormHeapFree((unsigned int)this); /*0x551d30*/
  return this; /*0x551d3a*/
}
