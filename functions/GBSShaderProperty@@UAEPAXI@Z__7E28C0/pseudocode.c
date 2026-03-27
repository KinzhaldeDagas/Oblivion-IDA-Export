BSShaderProperty *__thiscall BSShaderProperty::`scalar deleting destructor'(BSShaderProperty *this, char a2)
{
  BSShaderProperty::~BSShaderProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
