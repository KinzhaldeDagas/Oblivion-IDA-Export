BSShaderProperty *__thiscall SkyShaderProperty::`scalar deleting destructor'(BSShaderProperty *this, char a2)
{
  SkyShaderProperty::~SkyShaderProperty(this); /*0x7c5443*/
  if ( (a2 & 1) != 0 ) /*0x7c544d*/
    FormHeapFree((unsigned int)this); /*0x7c5450*/
  return this; /*0x7c545a*/
}
