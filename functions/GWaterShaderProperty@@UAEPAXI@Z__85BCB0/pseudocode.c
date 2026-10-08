BSShaderProperty *__thiscall WaterShaderProperty::`scalar deleting destructor'(BSShaderProperty *this, char a2)
{
  this->vtbl = &WaterShaderProperty::`vftable'; /*0x85bcb3*/
  BSShaderProperty::~BSShaderProperty(this); /*0x85bcb9*/
  if ( (a2 & 1) != 0 ) /*0x85bcc3*/
    FormHeapFree((unsigned int)this); /*0x85bcc6*/
  return this; /*0x85bcd0*/
}
