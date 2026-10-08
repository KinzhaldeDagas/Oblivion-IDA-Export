BSFaceGenModelMap::Entry *__thiscall BSFaceGenModelMap::Entry::`scalar deleting destructor'(
        BSFaceGenModelMap::Entry *this,
        char a2)
{
  BSFaceGenModelMap::Entry::~Entry(this); /*0x5512f3*/
  if ( (a2 & 1) != 0 ) /*0x5512fd*/
    FormHeapFree((unsigned int)this); /*0x551300*/
  return this; /*0x55130a*/
}
