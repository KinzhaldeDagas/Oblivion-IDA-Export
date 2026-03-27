BSFaceGenMorphDataHead *__thiscall BSFaceGenMorphDataHead::`scalar deleting destructor'(
        BSFaceGenMorphDataHead *this,
        char a2)
{
  BSFaceGenMorphDataHead::~BSFaceGenMorphDataHead(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
