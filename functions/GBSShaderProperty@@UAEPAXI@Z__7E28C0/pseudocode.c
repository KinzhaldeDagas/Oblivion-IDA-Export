BSShaderProperty *__thiscall BSShaderProperty::`scalar deleting destructor'(BSShaderProperty *this, char a2)
{
  BSShaderProperty::~BSShaderProperty(this); /*0x7e28c3*/
  if ( (a2 & 1) != 0 ) /*0x7e28cd*/
    FormHeapFree((unsigned int)this); /*0x7e28d0*/
  return this; /*0x7e28da*/
}
