BSFaceGenMorphDataHead *__thiscall BSFaceGenMorphDataHead::`scalar deleting destructor'(
        BSFaceGenMorphDataHead *this,
        char a2)
{
  BSFaceGenMorphDataHead::~BSFaceGenMorphDataHead(this); /*0x55c3d3*/
  if ( (a2 & 1) != 0 ) /*0x55c3dd*/
    FormHeapFree((unsigned int)this); /*0x55c3e0*/
  return this; /*0x55c3ea*/
}
