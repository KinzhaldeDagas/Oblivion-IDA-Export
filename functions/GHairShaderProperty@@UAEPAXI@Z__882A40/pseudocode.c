HairShaderProperty *__thiscall HairShaderProperty::`scalar deleting destructor'(HairShaderProperty *this, char a2)
{
  HairShaderProperty::~HairShaderProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
