BSFaceGenMorphDataHair *__thiscall BSFaceGenMorphDataHair::`scalar deleting destructor'(
        BSFaceGenMorphDataHair *this,
        char a2)
{
  BSFaceGenMorphDataHair::~BSFaceGenMorphDataHair(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
