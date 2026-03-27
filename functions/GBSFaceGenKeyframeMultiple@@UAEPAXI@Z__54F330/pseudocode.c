BSFaceGenKeyframeMultiple *__thiscall BSFaceGenKeyframeMultiple::`scalar deleting destructor'(
        BSFaceGenKeyframeMultiple *this,
        char a2)
{
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
