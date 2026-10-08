NiBlendBoolInterpolator *__thiscall NiBlendBoolInterpolator::`scalar deleting destructor'(
        NiBlendBoolInterpolator *this,
        char a2)
{
  NiBlendBoolInterpolator::~NiBlendBoolInterpolator(this); /*0x6ea323*/
  if ( (a2 & 1) != 0 ) /*0x6ea32d*/
    FormHeapFree((unsigned int)this); /*0x6ea330*/
  return this; /*0x6ea33a*/
}
