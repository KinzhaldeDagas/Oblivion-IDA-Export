NiDynamicEffect *__thiscall NiTextureEffect::`scalar deleting destructor'(NiDynamicEffect *this, char a2)
{
  NiTextureEffect::~NiTextureEffect(this); /*0x73c013*/
  if ( (a2 & 1) != 0 ) /*0x73c01d*/
    FormHeapFree((unsigned int)this); /*0x73c020*/
  return this; /*0x73c02a*/
}
