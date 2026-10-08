NiPathInterpolator *__thiscall NiPathInterpolator::`scalar deleting destructor'(NiPathInterpolator *this, char a2)
{
  NiPathInterpolator::~NiPathInterpolator(this); /*0x6dbaf3*/
  if ( (a2 & 1) != 0 ) /*0x6dbafd*/
    FormHeapFree((unsigned int)this); /*0x6dbb00*/
  return this; /*0x6dbb0a*/
}
