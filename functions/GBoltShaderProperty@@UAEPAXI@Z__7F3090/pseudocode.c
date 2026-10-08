BoltShaderProperty *__thiscall BoltShaderProperty::`scalar deleting destructor'(BoltShaderProperty *this, char a2)
{
  BoltShaderProperty::~BoltShaderProperty(this); /*0x7f3093*/
  if ( (a2 & 1) != 0 ) /*0x7f309d*/
    FormHeapFree((unsigned int)this); /*0x7f30a0*/
  return this; /*0x7f30aa*/
}
