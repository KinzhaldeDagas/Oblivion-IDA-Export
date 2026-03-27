BSShaderProperty *__thiscall SkyShaderProperty::`scalar deleting destructor'(BSShaderProperty *this, char a2)
{
  SkyShaderProperty::~SkyShaderProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
