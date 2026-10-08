BSFaceGenKeyframeMultiple *__thiscall BSFaceGenKeyframeMultiple::`scalar deleting destructor'(
        BSFaceGenKeyframeMultiple *this,
        char a2)
{
  BSFaceGenKeyframeMultiple::~BSFaceGenKeyframeMultiple(this); /*0x54f333*/
  if ( (a2 & 1) != 0 ) /*0x54f33d*/
    FormHeapFree((unsigned int)this); /*0x54f340*/
  return this; /*0x54f34a*/
}
