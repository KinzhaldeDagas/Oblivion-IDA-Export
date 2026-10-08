BSShaderLightingPropertyLayout_t *__thiscall DistantLODShaderProperty::`scalar deleting destructor'(
        BSShaderLightingPropertyLayout_t *this,
        char a2)
{
  DistantLODShaderProperty::~DistantLODShaderProperty(this); /*0x7b27d3*/
  if ( (a2 & 1) != 0 ) /*0x7b27dd*/
    FormHeapFree((unsigned int)this); /*0x7b27e0*/
  return this; /*0x7b27ea*/
}
