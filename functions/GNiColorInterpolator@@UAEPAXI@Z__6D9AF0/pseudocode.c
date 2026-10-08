NiColorInterpolator *__thiscall NiColorInterpolator::`scalar deleting destructor'(NiColorInterpolator *this, char a2)
{
  NiColorInterpolator::~NiColorInterpolator(this); /*0x6d9af3*/
  if ( (a2 & 1) != 0 ) /*0x6d9afd*/
    FormHeapFree((unsigned int)this); /*0x6d9b00*/
  return this; /*0x6d9b0a*/
}
