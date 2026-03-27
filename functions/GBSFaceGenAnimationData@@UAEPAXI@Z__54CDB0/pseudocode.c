BSFaceGenAnimationData *__thiscall BSFaceGenAnimationData::`scalar deleting destructor'(
        BSFaceGenAnimationData *this,
        char a2)
{
  BSFaceGenAnimationData::~BSFaceGenAnimationData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
