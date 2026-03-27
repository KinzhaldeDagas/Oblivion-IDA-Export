BSShaderProperty *__thiscall WaterShaderProperty::`scalar deleting destructor'(BSShaderProperty *this, char a2)
{
  this->vtbl = &WaterShaderProperty::`vftable';
  BSShaderProperty::~BSShaderProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
