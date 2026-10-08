BSShaderLightingPropertyLayout_t *__thiscall BSShaderLightingProperty::`scalar deleting destructor'(
        BSShaderLightingPropertyLayout_t *this,
        char a2)
{
  BSShaderLightingProperty::~BSShaderLightingProperty(this); /*0x7ee7c3*/
  if ( (a2 & 1) != 0 ) /*0x7ee7cd*/
    FormHeapFree((unsigned int)this); /*0x7ee7d0*/
  return this; /*0x7ee7da*/
}
