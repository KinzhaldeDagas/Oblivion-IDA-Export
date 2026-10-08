NiDynamicEffect *__thiscall NiDynamicEffect::`scalar deleting destructor'(NiDynamicEffect *this, char a2)
{
  NiDynamicEffect::~NiDynamicEffect(this); /*0x709143*/
  if ( (a2 & 1) != 0 ) /*0x70914d*/
    FormHeapFree((unsigned int)this); /*0x709150*/
  return this; /*0x70915a*/
}
