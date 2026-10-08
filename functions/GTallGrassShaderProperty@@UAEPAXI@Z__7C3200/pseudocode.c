BSShaderLightingPropertyLayout_t *__thiscall TallGrassShaderProperty::`scalar deleting destructor'(
        BSShaderLightingPropertyLayout_t *this,
        char a2)
{
  TallGrassShaderProperty::~TallGrassShaderProperty(this); /*0x7c3203*/
  if ( (a2 & 1) != 0 ) /*0x7c320d*/
    FormHeapFree((unsigned int)this); /*0x7c3210*/
  return this; /*0x7c321a*/
}
