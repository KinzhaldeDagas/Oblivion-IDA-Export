BSShaderProperty *__thiscall PrecipitationShaderProperty::`scalar deleting destructor'(BSShaderProperty *this, char a2)
{
  PrecipitationShaderProperty::~PrecipitationShaderProperty(this); /*0x7efcf3*/
  if ( (a2 & 1) != 0 ) /*0x7efcfd*/
    FormHeapFree((unsigned int)this); /*0x7efd00*/
  return this; /*0x7efd0a*/
}
