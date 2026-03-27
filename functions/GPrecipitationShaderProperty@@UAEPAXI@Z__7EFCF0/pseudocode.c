BSShaderProperty *__thiscall PrecipitationShaderProperty::`scalar deleting destructor'(BSShaderProperty *this, char a2)
{
  PrecipitationShaderProperty::~PrecipitationShaderProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
