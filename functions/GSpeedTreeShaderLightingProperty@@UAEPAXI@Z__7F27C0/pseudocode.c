BSShaderLightingPropertyLayout_t *__thiscall SpeedTreeShaderLightingProperty::`scalar deleting destructor'(
        BSShaderLightingPropertyLayout_t *this,
        char a2)
{
  SpeedTreeShaderLightingProperty::~SpeedTreeShaderLightingProperty(this); /*0x7f27c3*/
  if ( (a2 & 1) != 0 ) /*0x7f27cd*/
    FormHeapFree((unsigned int)this); /*0x7f27d0*/
  return this; /*0x7f27da*/
}
