BSShaderPPLightingProperty *__thiscall BSShaderPPLightingProperty::`scalar deleting destructor'(
        BSShaderPPLightingProperty *this,
        char a2)
{
  BSShaderPPLightingProperty::~BSShaderPPLightingProperty(this); /*0x7d97d3*/
  if ( (a2 & 1) != 0 ) /*0x7d97dd*/
    FormHeapFree((unsigned int)this); /*0x7d97e0*/
  return this; /*0x7d97ea*/
}
