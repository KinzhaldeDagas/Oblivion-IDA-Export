BSFaceGenAnimationData *__thiscall BSFaceGenAnimationData::`scalar deleting destructor'(
        BSFaceGenAnimationData *this,
        char a2)
{
  BSFaceGenAnimationData::~BSFaceGenAnimationData(this); /*0x54cdb3*/
  if ( (a2 & 1) != 0 ) /*0x54cdbd*/
    FormHeapFree((unsigned int)this); /*0x54cdc0*/
  return this; /*0x54cdca*/
}
