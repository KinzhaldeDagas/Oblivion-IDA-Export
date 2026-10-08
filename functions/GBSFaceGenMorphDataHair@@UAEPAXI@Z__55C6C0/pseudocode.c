BSFaceGenMorphDataHair *__thiscall BSFaceGenMorphDataHair::`scalar deleting destructor'(
        BSFaceGenMorphDataHair *this,
        char a2)
{
  BSFaceGenMorphDataHair::~BSFaceGenMorphDataHair(this); /*0x55c6c3*/
  if ( (a2 & 1) != 0 ) /*0x55c6cd*/
    FormHeapFree((unsigned int)this); /*0x55c6d0*/
  return this; /*0x55c6da*/
}
